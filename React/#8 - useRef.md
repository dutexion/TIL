## 특정 DOM을 선택해보자

특정 DOM을 선택하려면 useRef Hook함수를 사용해주면 된다.

```js
function App() {

  const focus = useRef();

  const onFocus = () => {
    focus.current.focus();
  }

  return (
    <div>
      <input ref={focus}/>
      <button onClick={onFocus}>click me</button>
    </div>
  )
};
```

위에 코드는 버튼을 누르면 input에 focus 되게 하는 간단한 코드다.    
**변수를 선언하고, DOM의 ref에 변수를 넣어**    
버튼을 눌러 onFocus가 실행되면 input에 focus 된다.
