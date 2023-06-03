## input에 값을 입력하면 화면에 띄어보자

```js
function App() {
  const [text,setText] = useState("");
  /* 현재 상태 text / settet 함수 setText / 초기값 ""을 선언해주었다 */
  
  const onChange = (e) => {
    setText(e.target.value);
    /* 파라미터 e가 가리키고 있는 input의 value를 setter 함수인 setText를 통해 text에 값을 넣는다 */
  }
  
  const onClick = () => {
    setText("")
    /* setter 함수 setText에 공백을 입력하여 text 값을 공백으로 만든다 */
  }
  
  return (
    <div>
      <input onChange={onChange} value={text}/>
      /* input에 변화가 일어나면 onChange 함수가 실행되도록 했다 */
      /* value를 text로 지정해주어 text 값에 변화가 일어나면 input의 value도 바뀌게 해주었다 */
      <button onClick={onClick}>reset</button>
      /* button이 클릭되면 onClick 함수가 실행되도록 했다 */
      <p>값 : {text}</p>
    </div>
  )
}
```
