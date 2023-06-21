생명주기 메서드는 클래스형 컴포넌트에서만 사용할 수 있다.    
useEffect랑 은근 비슷하다 생각하면 된다.

변화가 생길 때마다 생명주기 메서드를 호출한다.
![image](https://github.com/dutexion/TIL/assets/128302413/11d36a06-4167-452c-9e08-bf857b13d936)
## 마운트
마운트 될 때 발생하는 생명주기
- constructor
  - 컴포넌트가 만들어지면 가장 먼저 실행되는 메서드
- getDerivedStateFromProps
  - props 로 받아온 것을 state 에 넣어주고 싶을 때 사용
- render
  - 컴포넌트를 렌더링하는 메서드
- componentDidMount
  - 컴포넌트의 첫번째 렌더링이 마치고 나면 호출되는 메서드
 
## 업데이트
업데이트 되는 시점에 발생하는 생명주기
- getDerivedStateFromProps
  - props 나 state 가 바뀌었을때도 이 메서드가 호출됨
- shouldComponentUpdate
  - 컴포넌트가 리렌더링 할지 말지를 결정하는 메서드 ( 주로 최적화 할 때 사용 )
- render
  - 컴포넌트를 렌더링하는 메서드
- getSnapshotBeforeUpdate
  - 컴포넌트에 변화가 일어나기 직전의 DOM 상태를 가져와서 특정 값을 반환하면<br>그 다음 발생하게 되는 componentDidUpdate 함수에서 받아와서 사용을 할 수 있다.
- componentDidUpdate
  - 리렌더링이 마치고, 화면에 우리가 원하는 변화가 모두 반영되고 난 뒤 호출되는 메서드
 
## 언마운트
컴포넌트가 화면에서 사라질 때 발생하는 생명주기

- componentWillUnmount
  - 컴포넌트가 화면에서 사라지기 직전에 호출
