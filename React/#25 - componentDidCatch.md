```jsx
import React from 'react';

function Hello({name}) {
  return (
    <div>
      {name}
    </div>
  )
}

export default Hello;
```

```jsx
import React from 'react';
import Hello from './Hello'

function App() {
  return (
    <Hello>
  )
}

export default App
```

위 두개의 파일이 있다고 할 때    
App 컴포넌트에서 prop을 제대로 설정해 주지 않았다.

그럴때 오류가 뜨는데    
이것을 해결해 보자

```jsx
import React from 'react';

function Hello({name}) {
  if(!name) return null;
  
  return (
    <div>
      {name}
    </div>
  )
}

export default Hello;
```

Hello 컴포넌트의 코드가 위처럼 된다면    
name이 undefined일 때 if문이 실행되어 null을 반환한다.

물론 흰 화면이 출력되지만 적어도 에러는 발생하지 않는다.    
이런 방식을 null checking이라고 한다.

또 다른 상황으론
```jsx
import React from 'react';

function Hello({name, onToggle}) {
  if(!name) return null;
  
  return (
    <div>
      {name}
    </div>
  )
}

export default Hello;
```
위와 같은 상황이 있을 수 있다.

그렇다면 아래와 같이 고쳐보자
```jsx
import React from 'react';

function Hello({name, onToggle}) {
  if(!name) return null;
  
  return (
    <div>
      {name}
    </div>
  )
}

Hello.defaultProps = {
  onToggle: () => {
    console.warn("onToggle is missing!");
  }
}

export default Hello;
```
