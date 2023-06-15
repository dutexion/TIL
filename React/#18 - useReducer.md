useReducer은 useState 같이 상태를 관리해주는 hook이다.

이 함수를 사용하면 컴포넌트의 상태 업데이트 로직을 분리시킬 수 있다.    
상태 업데이트 로직을 컴포넌트 바깥에 작성할 수도 있고, 다른 파일에서 불러 올 수도 있다.

우선 reducer가 무엇이냐면,    
현재 상태와 액션 객체를 파라미터로 받아와서 새로운 상태를 반환하는 함수이다.

useReducer의 사용법은 아래와 같다.
```js
const [state, dispatch] = useReducer(reducer, initialState);
```
여기서 state는 컴포넌트에서 사용할 수 있는 상태를 나타내고,    
dispatch는 action을 발생하는 함수이다.    
그리고 useReducer에 넣는 첫번째 파라미터는 함수이고,    
두번째 파라미터는 초기 상태이다.
