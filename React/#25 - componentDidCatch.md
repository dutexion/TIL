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

클래스형 컴포넌트에서는    
componentDidCatch 생명주기 메서드를 사용하면 에러를 예외 처리를 할 수 있다.    

componentDidCatch 메서드에는 두개의 파라미터를 사용하게 되는데    
첫번째 파라미터는 에러의 내용, 두번째 파라미터에서는 에러가 발생한 위치를 알 수 있다.

다른 방법은 Sentry라는 서비스를 이용하면 된다.    
우리가 발견하지 못한 오류 또한 예외처리를 해주는 상용 서비스이다.
