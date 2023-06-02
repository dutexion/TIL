## useState

컴포넌트에서 동적인 값은 상태(State)라고 한다.   
상태를 관리하려면 useState 함수를 사용해주어야 한다.

## 사용법

```js
const [num,setNum] = useState(0);
```
num = 현재 상태 / setNum = setter 함수 / useState(0) = 기본값 <= 형태가 된다.   
배열 값이 반환되기 때문에 비구조화 처리 해주어야 한다.

## 함수형 업데이트

```js
const [num,setNum] = useState(0);

const onClick = () => {
  setNum(num + 1);
  setNum(num + 1);
  setNum(num + 1);
}
```
위에서 onClick이 실행되었을 때에 num은 1이다.

이는 리액트가 효율적으로 렌더링하기 위해서 여러 개의 상태 값 변경 요청을 일괄 처리하기 때문이다.   
( _쉽게 말하자면 변경된 사항을 기억하지 않는 것이다._ )

**하지만**
```js
const [num,setNum] = useState(0);

const onClick = () => {
  setNum(prev => prev+1);
  setNum(prev => prev+1);
  setNum(prev => prev+1);
}
```
이렇게 함수형 업데이트를 사용하면 변경된 사항이 저장되어 onClick이 실행되었을 때에 num은 3이 된다.
