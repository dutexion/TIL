# 클래스

자바스크립트는 프로토타입 기반(prototype-based) 객체지향 언어다.  
비록 다른 객체지향 언어들과의 차이점에 대한 논쟁이 있긴 하지만, 자바스크립트는 강력한 객체지향 프로그래밍 능력을 지니고 있다.

프로토타입 기반 프로그래밍은 클래스가 필요없는(class-free) 객체지향 프로그래밍 스타일로  
프로토타입 체인과 클로저 등으로 객체 지향 언어의 상속, 캡슐화(정보 은닉) 등의 개념을 구현할 수 있다.

ES5에서는 생성자 함수와 프로토타입, 클로저를 사용하여 객체 지향 프로그래밍을 구현하였다.

```js
// ES5
var Person = (function () {
  // Constructor
  function Person(name) {
    this._name = name;
  }

  // public method
  Person.prototype.sayHi = function () {
    console.log("Hi! " + this._name);
  };

  // return constructor
  return Person;
})();

var me = new Person("Lee");
me.sayHi(); // Hi! Lee.

console.log(me instanceof Person); // true
```

하지만 클래스 기반 언어에 익숙한 프로그래머들은 프로토타입 기반 프로그래밍  
방식이 혼란스러울 수 있으며 자바스크립트를 어렵게 느끼게하는 하나의 장벽처럼 인식되었다.

ES6의 클래스는 기존 프로토타입 기반 객체지향 프로그래밍보다 클래스 기반 언어에  
익숙한 프로그래머가 보다 빠르게 학습할 수 있는 단순명료한 새로운 문법을 제시하고 있다.  
그렇다고 ES6의 클래스가 기존의 프로토타입 기반 객체지향 모델을 폐지하고 새로운 객체지향 모델을 제공하는 것은 아니다.  
사실 클래스도 함수이며 기존 프로토타입 기반 패턴의 문법적 설탕(Syntactic sugar)이라고 볼 수 있다.  
다만, 클래스와 생성자 함수가 정확히 동일하게 동작하지는 않는다. 클래스가 보다 엄격하다.  
따라서 클래스를 프로토타입 기반 패턴의 문법적 설탕이라고 인정하지 않는 견해도 일리가 있다.

## 1 . 클래스 정의 (Class Definition)

ES6 클래스는 class 키워드를 사용하여 정의한다. 앞에서 살펴본 Person 생성자 함수를 클래스로 정의해 보자.

```js
// 클래스 선언문
class Person {
  // constructor(생성자)
  constructor(name) {
    this._name = name;
  }

  sayHi() {
    console.log(`Hi! ${this._name}`);
  }
}

// 인스턴스 생성
const me = new Person("Lee");
me.sayHi(); // Hi! Lee

console.log(me instanceof Person); // true
```

클래스는 클래스 _선언문 이전에 참조할 수 없다_.

하지만 호이스팅이 발생하지 않는 것은 아니다.  
클래스는 var 키워드로 선언한 변수처럼 호이스팅되지 않고 let, const 키워드로 선언한 변수처럼 호이스팅된다.  
따라서 클래스 선언문 이전에 일시적 사각지대(Temporal Dead Zone; TDZ)에 빠지기 때문에 호이스팅이 발생하지 않는 것처럼 동작한다.

```js
const Foo = "";

{
  // 호이스팅이 발생하지 않는다면 ''가 출력되어야 한다.
  console.log(Foo);
  // ReferenceError: Cannot access 'Foo' before initialization
  class Foo {}
}
```

클래스 선언문도 변수 선언, 함수 정의와 마찬가지로 호이스팅이 발생한다.  
호이스팅은 var, let, const, function, function\*, class 키워드를 사용한 모든 선언문에 적용된다.  
다시 말해, 선언문을 통해 모든 식별자(변수, 함수, 클래스 등)는 호이스팅된다.  
모든 선언문은 런타임 이전에 먼저 실행되기 때문이다.

일반적이지는 않지만, 표현식으로도 클래스를 정의할 수 있다.  
함수와 마찬가지로 클래스는 이름을 가질 수도 갖지 않을 수도 있다.  
이때 클래스가 할당된 변수를 사용해 클래스를 생성하지 않고 기명 클래스의 클래스 이름을 사용해 클래스를 생성하면 에러가 발생한다.  
이는 함수와 마찬가지로 클래스 표현식에서 사용한 클래스 이름은 외부 코드에서 접근 불가능하기 때문이다.

```js
// 클래스명 MyClass는 함수 표현식과 동일하게 클래스 몸체 내부에서만 유효한 식별자이다.
const Foo = class MyClass {};

const foo = new Foo();
console.log(foo); // MyClass {}

new MyClass(); // ReferenceError: MyClass is not defined
```

## 2 . 인스턴스 생성

마치 생성자 함수와 같이 new 연산자와 함께 클래스 이름을 호출하면 클래스의 인스턴스가 생성된다.

```js
class Foo {}

const foo = new Foo();
```

위 코드에서 new 연산자와 함께 호출한 Foo는 클래스의 이름이 아니라 constructor(생성자)이다.    
표현식이 아닌 선언식으로 정의한 클래스의 이름은 constructor와 동일하다.

```js
// Foo는 사실 생성자 함수(constructor)이다.
console.log(Object.getPrototypeOf(foo).constructor === Foo); // true
```

new 연산자를 사용하지 않고 constructor를 호출하면 타입 에러(TypeError)가 발생한다.    
constructor는 new 연산자 없이 호출할 수 없다.

## 3 . constructor

constructor는 인스턴스를 생성하고 클래스 필드를 초기화하기 위한 특수한 메소드이다.

**클래스 필드(class field)**
클래스 내부의 캡슐화된 변수를 말한다.   
데이터 멤버 또는 멤버 변수라고도 부른다.    
클래스 필드는 인스턴스의 프로퍼티 또는 정적 프로퍼티가 될 수 있다.    
쉽게 말해, 자바스크립트의 생성자 함수에서 this에 추가한 프로퍼티를 클래스 기반 객체지향 언어에서는 클래스 필드라고 부른다.

```js
// 클래스 선언문
class Person {
  // constructor(생성자). 이름을 바꿀 수 없다.
  constructor(name) {
    // this는 클래스가 생성할 인스턴스를 가리킨다.
    // _name은 클래스 필드이다.
    this._name = name;
  }
}

// 인스턴스 생성
const me = new Person('Lee');
console.log(me); // Person {_name: "Lee"}
```

constructor는 클래스 내에 한 개만 존재할 수 있다.   
인스턴스를 생성할 때 new 연산자와 함께 호출한 것이 바로 constructor이며   
constructor의 파라미터에 전달한 값은 클래스 필드에 할당한다.

constructor는 생략할 수 있다. constructor를 생략하면 클래스에 constructor() {}를 포함한 것과 동일하게 동작한다.   
즉, 빈 객체를 생성한다. 따라서 인스턴스에 프로퍼티를 추가하려면 인스턴스를 생성한 이후,   
프로퍼티를 동적으로 추가해야 한다.

```js
class Foo { }

const foo = new Foo();
console.log(foo); // Foo {}

// 프로퍼티 동적 할당 및 초기화
foo.num = 1;
console.log(foo); // Foo&nbsp;{ num: 1 }
```

constructor는 인스턴스의 생성과 동시에 클래스 필드의 생성과 초기화를 실행한다.    
따라서 클래스 필드를 초기화해야 한다면 constructor를 생략해서는 안된다.

```js
class Foo {
  // constructor는 인스턴스의 생성과 동시에 클래스 필드의 생성과 초기화를 실행한다.
  constructor(num) {
    this.num = num;
  }
}

const foo = new Foo(1);

console.log(foo); // Foo { num: 1 }
```

## 4 . 클래스 필드

클래스 몸체에는 메소드만 선언할 수 있다.

```js
class Foo {
  name = ''; // SyntaxError

  constructor() {}
}
```

클래스 필드의 선언과 초기화는 반드시 constructor 내부에서 실시한다.
```js
class Foo {
  constructor(name = '') {
    this.name = name; // 클래스 필드의 선언과 초기화
  }
}
const foo = new Foo('Lee');
console.log(foo); // Foo { name: 'Lee' }
```

constructor 내부에서 선언한 클래스 필드는 클래스가 생성할 인스턴스를 가리키는 this에 바인딩한다.    
이로써 클래스 필드는 클래스가 생성할 인스턴스의 프로퍼티가 되며,    
클래스의 인스턴스를 통해 클래스 외부에서 언제나 참조할 수 있다. 즉, 언제나 public이다.

ES6의 클래스는 다른 객체지향 언어처럼 private, public, protected    
키워드와 같은 접근 제한자(access modifier)를 지원하지 않는다.

```js
class Foo {
  constructor(name = '') {
    this.name = name; // public 클래스 필드
  }
}

const foo = new Foo('Lee');
console.log(foo.name); // 클래스 외부에서 참조할 수 있다.access
```

## 5 . Class field declarations proposal

2019년 이후 클래스에 관한 몇가지 표준안.

```js
class Foo {
  x = 1;            // Field declaration
  #p = 0;           // Private field
  static y = 20;    // Static public field
  static #sp = 30;  // Static private field
  // 2019/5 : Chrome 미구현
  // static #sm() {    // Static private method
  //   console.log('static private method');
  // }

  bar() {
    this.#p = 10; // private 필드 참조
    // this.p = 10; // 새로운 public p 필드를 동적 추가한다.
    return this.#p;
  }
}

const foo = new Foo();
console.log(foo); // Foo&nbsp;{#p: 10, x: 1}

console.log(foo.x); // 1
// console.log(foo.#p); // SyntaxError: Undefined private field #p: must be declared in an enclosing class
console.log(Foo.y); // 20
// console.log(Foo.#sp); // SyntaxError: Undefined private field #sp: must be declared in an enclosing class
console.log(foo.bar()); // 10
```

## 6 . getter, setter

### 6.1 . getter

getter는 클래스 필드에 접근할 때마다 클래스 필드의 값을 조작하는 행위가 필요할 때 사용한다.   
getter는 메소드 이름 앞에 get 키워드를 사용하여 정의.   
이때 메소드 이름은 클래스 필드 이름처럼 사용된다.   
다시 말해 getter는 호출하는 것이 아니라 프로퍼티처럼 참조하는 형식으로 사용하며 참조 시에 메소드가 호출된다.    
getter는 이름 그대로 무언가를 취득할 때 사용하므로 반드시 무언가를 반환해야 한다.

```js
class Foo {
  constructor(arr = []) {
    this._arr = arr;
  }

  // getter: get 키워드 뒤에 오는 메소드 이름 firstElem은 클래스 필드 이름처럼 사용된다.
  get firstElem() {
    // getter는 반드시 무언가를 반환해야 한다.
    return this._arr.length ? this._arr[0] : null;
  }
}

const foo = new Foo([1, 2]);
// 필드 firstElem에 접근하면 getter가 호출된다.
console.log(foo.firstElem); // 1
```

### 6.2 . setter

setter는 클래스 필드에 값을 할당할 때마다 클래스 필드의 값을 조작하는 행위가 필요할 때 사용한다.    
setter는 메소드 이름 앞에 set 키워드를 사용해 정의한다.   
이때 메소드 이름은 클래스 필드 이름처럼 사용된다.   
다시 말해 setter는 호출하는 것이 아니라 프로퍼티처럼 값을 할당하는 형식으로 사용하며 할당 시에 메소드가 호출된다.

```js
class Foo {
  constructor(arr = []) {
    this._arr = arr;
  }

  // getter: get 키워드 뒤에 오는 메소드 이름 firstElem은 클래스 필드 이름처럼 사용된다.
  get firstElem() {
    // getter는 반드시 무언가를 반환하여야 한다.
    return this._arr.length ? this._arr[0] : null;
  }

  // setter: set 키워드 뒤에 오는 메소드 이름 firstElem은 클래스 필드 이름처럼 사용된다.
  set firstElem(elem) {
    // ...this._arr은 this._arr를 개별 요소로 분리한다
    this._arr = [elem, ...this._arr];
  }
}

const foo = new Foo([1, 2]);

// 클래스 필드 lastElem에 값을 할당하면 setter가 호출된다.
foo.firstElem = 100;

console.log(foo.firstElem); // 100
```

getter와 setter는 접근자 프로퍼티(accessor property)이다.

```js
// _arr은 데이터 프로퍼티이다.
console.log(Object.getOwnPropertyDescriptor(foo, '_arr'));
// {value: Array(2), writable: true, enumerable: true, configurable: true}

// firstElem은 접근자 프로퍼티이다. 접근자 프로퍼티는 프로토타입의 프로퍼티이다.
console.log(Object.getOwnPropertyDescriptor(Foo.prototype, 'firstElem'));
// {get: ƒ, set: ƒ, enumerable: false, configurable: true}
```

## 7 . 정적 메소드

클래스의 정적 메소드를 정의할 때 키워드를 사용한다.   
정적 메소드는 클래스의 인스턴스가 아닌 클래스 이름으로 호출한다.    
따라서 클래스의 인스턴스를 생성하지 않아도 호출할 수 있다.

```js
class Foo {
  constructor(prop) {
    this.prop = prop;
  }

  static staticMethod() {
    /*
    정적 메소드는 this를 사용할 수 없다.
    정적 메소드 내부에서 this는 클래스의 인스턴스가 아닌 클래스 자신을 가리킨다.
    */
    return 'staticMethod';
  }

  prototypeMethod() {
    return this.prop;
  }
}

// 정적 메소드는 클래스 이름으로 호출한다.
console.log(Foo.staticMethod());

const foo = new Foo(123);
// 정적 메소드는 인스턴스로 호출할 수 없다.
console.log(foo.staticMethod()); // Uncaught TypeError: foo.staticMethod is not a function
```

정적 메소드는 this를 사용할 수 없다.   
일반 메소드 내부에서 this는 클래스의 인스턴스를 가리키며,   
메소드 내부에서 this를 사용한다는 것은 클래스의 인스턴스의 생성을 전제로 하는 것이다.

정적 메소드는 클래스 이름으로 호출하기 때문에 클래스의 인스턴스를 생성하지 않아도 사용할 수 있다.

정적 메소드는 클래스의 인스턴스 생성없이 클래스의 이름으로 호출하며   
클래스의 인스턴스로 호출할 수 없다고 하였다. 이유가 무엇이냐면

위에서 언급했든   
사실 **클래스도 함수이고** 기존 prototype 기반 패턴의 Syntactic sugar일 뿐이다.

함수 객체는 prototype 프로퍼티를 갖는데 일반 객체의 과는 다른 것이며    
일반 객체는 prototype 프로퍼티를 가지지 않는다.

함수 객체만이 가지고 있는 **prototype 프로퍼티는 함수 객체가 생성자로 사용될 때,**    
**이 함수를 통해 생성된 객체의 부모 역할을 하는 프로토타입 객체**를 가리킨다.   
위 코드에서 Foo는 생성자 함수로 사용되므로 생성자 함수 Foo의 prototype 프로퍼티가 가리키는    
프로토타입 객체는 생성자 함수 Foo를 통해 생성되는 인스턴스 foo의 부모 역할을 한다.

```js
console.log(Foo.prototype === foo.__proto__); // true
```

그리고 생성자 함수 Foo의 prototype 프로퍼티가 가리키는    
프로토타입 객체가 가지고 있는 constructor 프로퍼티는 생성자 함수 Foo를 가리킨다.

```js
console.log(Foo.prototype.constructor === Foo); // true
```

**정적 메소드인 staticMethod는 생성자 함수 Foo의 메소드이고,**    
**일반 메소드인 prototypeMethod는 프로토타입 객체 Foo.prototype의 메소드이다.**   
**따라서 staticMethod는 foo에서 호출할 수 없다.**

## 8 . 클래스 상속

### 8.1 . extends 키워드

부모 클래스를 상속받는 자식 클래스를 정의할 때 사용한다.    

### 8.2 . super 키워드

super 키워드는 부모 클래스를 참조할 때 또는 부모 클래스의 constructor를 호출할 때 사용한다.
