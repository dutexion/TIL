## 이름과 이메일을 화면에 띄어보자

```js
function App() {
  
  const [inputs,setInputs] = useState({
    name : "",
    email : ""
  });
  /* 입력 값이 두개이기 때문에 inputs 값을 객체로 만들어 주었다 */
  
  const {name,email} = inputs;
  /* inputs의 각 값들을 비구조화 처리를 통해 개별 변수로 분리해주었다 */
  
  const onChange = (e) => {
    const {name, value} = e.target;
    setInputs({
      ...inputs,
      [name] : value
    });
  };
  /* e가 가리키고 있는 input의 name과 value 값을 비구조화 처리 해주었고 */
  /* setter 함수인 setInputs에는 spread 문법을 사용하여 원래 있던 값을 복사하고 */
  /* e가 가리키고 있는 input에서 넘어온 name과 동일한 객체 속 key의 value에 e가 가리키고 있는 input에서 넘어온 value를 넣어준다 */
  
  const onReset = () => {
    setInputs({
      name : "",
      email : ""
    });
  }
  
  return (
    <div>
      <input name="name" onChange={onChange} value={name}/>
      <input name="email" onChange={onChange} value={email}/>
      <button onClick={onReset}>reset</button>
      <p>이름 : {name} / 이메일 : {email}</p>
    </div>
  );
};

```
