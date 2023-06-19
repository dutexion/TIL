## React.memo

최적화 할 수 있는 함수이다.    
이 함수를 사용하면 컴포넌트에서 리렌더링이 필요할 때만 리렌더링 할 수 있다.

## 사용법?
```jsx
import React from 'react';

const Component {
  return (
    <div>
      <h1>Hello</h1>
    </div>
  );
};

export default React.memo(Component);
```

리액트 개발을 할 때에는 useCallback, useMemo, React.memo 는 컴포넌트의    
성능을 실제로 개선할수있는 상황에서만 사용해야 한다.
