# 매개변수 기본값, Rest 파라미터,<br>Spread 문법, Rest/Spread

## 1 . 매개변수 기본값

함수를 호출할 때 매개변수의 개수만큼 인수를 전달하는 것이 일반적이지만  
그렇지 않은 경우에도 에러가 발생하지는 않는다.  
함수는 매개변수의 개수와 인수의 개수를 체크하지 않는다.  
인수가 부족한 경우, 매개변수의 값은 undefined이다.

```js
function sum(x, y) {
  return x + y;
}

console.log(sum(1)); // NaN
```

따라서 매개변수에 적절한 인수가 전달되었는지 함수 내부에서 확인할 필요가 있다.

```js
function sum(x, y) {
  // 매개변수의 값이 falsy value인 경우, 기본값을 할당한다.
  x = x || 0;
  y = y || 0;

  return x + y;
}

console.log(sum(1)); // 1
console.log(sum(1, 2)); // 3
```

ES6에서는 매개변수 기본값을 사용하여 함수 내에서 수행하던 인수 체크 및 초기화를 간소화할 수 있다.  
_매개변수 기본값은 매개변수에 인수를 전달하지 않았을 경우에만 유효하다_.

```js
function sum(x = 0, y = 0) {
  return x + y;
}

console.log(sum(1)); // 1
console.log(sum(1, 2)); // 3
```

매개변수 기본값은 함수 정의 시 선언한 매개변수 개수를  
나타내는 함수 개체의 length 프로퍼티와 arguments 객체에 영향을 주지 않는다.

```js
function foo(x, y = 0) {
  console.log(arguments);
}

console.log(foo.length); // 1

sum(1); // Arguments { '0': 1 }
sum(1, 2); // Arguments { '0': 1, '1': 2 }
```

## 2 . Rest 파라미터

### 2.1 . 기본 문법

Rest 파라미터는 매개변수 이름 앞에 세개의 점 ...을 붙여서 정의한 매개변수를 의미한다.  
Rest 파라미터는 함수에 전달된 인수들의 목록을 배열로 전달받는다.

```js
function foo(...rest) {
  console.log(Array.isArray(rest)); // true
  console.log(rest); // [ 1, 2, 3, 4, 5 ]
}

foo(1, 2, 3, 4, 5);
```

함수에 전달된 인수들은 순차적으로 파라미터와 Rest 파라미터에 할당된다.

```js
function foo(param, ...rest) {
  console.log(param); // 1
  console.log(rest); // [ 2, 3, 4, 5 ]
}

foo(1, 2, 3, 4, 5);

function bar(param1, param2, ...rest) {
  console.log(param1); // 1
  console.log(param2); // 2
  console.log(rest); // [ 3, 4, 5 ]
}

bar(1, 2, 3, 4, 5);
```

Rest 파라미터는 이름 그대로 먼저 선언된 파라미터에 할당된 인수를 제외한 나머지 인수들이 모두 배열에 담겨 할당된다.  
따라서 Rest 파라미터는 반드시 마지막 파라미터이어야 한다.

```js
function foo( ...rest, param1, param2) { }

foo(1, 2, 3, 4, 5);
// SyntaxError: Rest parameter must be last formal parameter
```

Rest 파라미터는 함수 정의 시 선언한 매개변수 개수를 나타내는 함수 객체의 length 프로퍼티에 영향을 주지 않는다.

```js
function foo(...rest) {}
console.log(foo.length); // 0

function bar(x, ...rest) {}
console.log(bar.length); // 1

function baz(x, y, ...rest) {}
console.log(baz.length); // 2
```

### 2.2 . arguments와 rest 파라미터

ES5에서는 인자의 개수를 알 수 없는 가변 인자 함수의 경우, arguments 객체를 통해 인수를 확인한다.  
arguments 객체는 함수 호출 시 전달된 인수들의 정보를 담고 있는 순회가능한  
유사 배열 객체이며 함수 내부에서 지역 변수처럼 사용할 수 있다.

> arguments 프로퍼티는 현재 일부 브라우저에서 지원하고 있지만 ES3부터 표준에서 deprecated 되었다.  
> Function.arguments와 같은 사용 방법은 권장되지 않으며 함수 내부에서 지역변수처럼 사용할 수 있는 arguments 객체를 참조하도록 한다.

```js
// ES5
var foo = function () {
  console.log(arguments);
};

foo(1, 2); // { '0': 1, '1': 2 }
```

가변 인자 함수는 파라미터를 통해 인수를 전달받는 것이 불가능하므로 arguments 객체를 활용하여 인수를 전달받는다.  
하지만 arguments 객체는 유사 배열 객체이므로 배열 메소드를 사용하려면 Functiom.prototype.call을 사용해야 하는 번거로움이 있다.

```js
// ES5
function sum() {
  /*
  가변 인자 함수는 arguments 객체를 통해 인수를 전달받는다.
  유사 배열 객체인 arguments 객체를 배열로 변환한다.
  */
  var array = Array.prototype.slice.call(arguments);
  return array.reduce(function (pre, cur) {
    return pre + cur;
  });
}

console.log(sum(1, 2, 3, 4, 5)); // 15
```

ES6에서는 rest 파라미터를 사용하여 가변 인자의 목록을 **배열**로 전달받을 수 있다.  
이를 통해 유사 배열인 arguments 객체를 배열로 변환하는 번거로움을 피할 수 있다.

```js
// ES6
function sum(...args) {
  console.log(arguments); // Arguments(5) [1, 2, 3, 4, 5, callee: (...), Symbol(Symbol.iterator): ƒ]
  console.log(Array.isArray(args)); // true
  return args.reduce((pre, cur) => pre + cur);
}
console.log(sum(1, 2, 3, 4, 5)); // 15
```

하지만 ES6의 화살표 함수에는 함수 객체의 arguments 프로퍼티가 없다.  
따라서 화살표 함수로 가변 인자 함수를 구현해야 할 때는 반드시 rest 파라미터를 사용해야 한다.

```js
var normalFunc = function () {};
console.log(normalFunc.hasOwnProperty("arguments")); // true

const arrowFunc = () => {};
console.log(arrowFunc.hasOwnProperty("arguments")); // false
```
