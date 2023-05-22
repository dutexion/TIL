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