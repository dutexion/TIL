## props란?

props 는 properties 의 줄임말이다.   
우리가 어떠한 값을 컴포넌트에게 전달해줘야 할 때, props 를 사용한다.

## 사용법

App.js에서 Hello.js라는 컴포넌트에 name="철수" <= 이 값을 전달하고 싶다고 할때에    
( _앞 뒤는 생략하겠다._ )
```js
/* App.js */
<Hello name="철수"/>
```

```js
/* Hello.js */
function Hello(props) {
  return (
    <>
      <p>hello {props.name}</p>
    </>
  )
}
```

위 코드에서는 'hello 철수'가 출력된다.

## 여러개의 props

여러개의 props를 사용하기에는 코드가 복잡해 질 수 있다.    
이럴 때에는 ES6 문법인 비구조화 할당을 해주면 된다.

App.js에서 Hello.js라는 컴포넌트에 name="철수"라는 값과 age="16"<= 이 값을 전달하고 싶다고 할때에   
( _앞 뒤는 생략하겠다._ )
```js
/* App.js */
<Hello name="철수" age="16"/>
```

```js
/* Hello.js */
function Hello({name,age}) {
  return (
    <>
      <p>hello {name} age {age}</p>
    </>
  )
}
```

위 코드에서는 'hello 철수 age 16'가 출력된다.

## 값이 없다면?

컴포넌트에 props 를 지정하지 않았을 때 기본적으로 사용 할 값을 설정하고 싶다면   
컴포넌트에 defaultProps 라는 값을 설정하면 된다.

App.js에서 하나의 Hello.js 컴포넌트에 name="철수"라는 값과 age="16"<= 이 값을 전달하고,    
App.js에서 하나의 Hello.js 컴포넌트에 age="16"<= 이 값만을 전달 했을때,    
( _앞 뒤는 생략하겠다._ )

```js
/* App.js */
<Hello name="철수" age="16"/>
<Hello age="16"/>
```

```js
/* Hello.js */
function Hello({name,age}) {
  return (
    <>
      <p>hello {name} age {age}</p>
    </>
  )
}

Hello.defaultProps = {
  name: '이름없음'
}
```

위 코드에서는 'hello 철수 age 16' 'hello 이름없음 age 16'가 출력된다.

## props.children

컴포넌트 태그 사이에 넣은 값을 조회하고 싶을 땐, props.children 을 조회하면 된다.

```js
/* App.js */
<Wrap>
  <Hello/>
</Wrap>
```

```js
/* Wrap.js */
function Wrap({ children }) {
  const style = {
    border: '2px solid black',
    padding: '16px',
  };
  return (
    <div style={style}>
      {children}
    </div>
  )
}
```

```js
/* Hello.js */
function Hello () {
  return (
    <>
      <p>hello</p>
    </>
  )
}
```

위 코드에서는 테두리에 감싸져 있는 'Hello'가 출력된다.    
wrap에서 prop은 꼭 children으로 받아야한다.
