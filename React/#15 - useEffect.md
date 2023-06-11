## 구조
- useEffect는 함수이다
- 첫번째 인자로는 함수가, 두번쨰 인자로는 배열이 들어간다<br>( _배열은 deps라 칭한다_ )

## cleanUp 함수
- useEffect 안에서 return 될 때 실행된다
- useEffcet의 뒷정리를 한다. -> state에서 값을 지울때 실행됨

## deps
- deps에 특정값을 넣게 되면, 컴퍼넌트가 마운트 될 때, 지정한 값이 업데이트 될 때 useEffect 실행된다
- deps에 값이 없다면 useEffect가 최신 값을 가리키지 않게 된다
- deps에 값이 없다면 컴포넌트가 리렌더링 될 때마다 호출이 된다
