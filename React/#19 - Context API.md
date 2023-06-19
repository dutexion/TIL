## Context API
프로젝트 안에서 전역적으로 사용 할 수 있는 값을 관리


## 사용?
```jsx
export const Name = React.createContext(null);
```    
createContext 함수를 통해 기본값을 설정한다.    
설정하는 값은 Context 를 쓸 때 값을 따로 지정하지 않을 경우 사용되는 기본 값이다.
앞에 export를 붙여 내보내 줄 수 있다.

```jsx
<Name.Provider value={dispatch}>...</Name.Provider>
  ```    
Context 안에 Provider 라는 컴포넌트가 들어있는데 이 컴포넌트를 통하여 Context 의 값을 정할 수 있다.    
이 컴포넌트를 사용할 때, value라는 값을 설정해주면 된다.    
Provider 에 의하여 감싸진 컴포넌트 중 어디서든지 우리가 Context 의 값을 다른 곳에서 바로 조회해서 사용할 수 있다.

```jsx
import {Name} from 'file'
```
사용하고 싶을 때 이렇게 불러와 주면 된다.

useReducer의 dispatch 를 Context API 를 사용해서 전역 사용한다.    
컴포넌트에게 함수를 전달해줘야 하는 상황에서 코드의 구조가 훨씬 깔끔해짐.
