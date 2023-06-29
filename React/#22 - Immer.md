리액트에서 배열이나 객체를 업데이트 할 때에는 불변성을 지켜주어야 한다.    
하지만 Immer 라이브러리를 사용하면 **불변성을 신경쓰지 않아도 Immer가 불변성 관리를 대신 해준다**.

```jsx
const nextState = {
  ...state,
  posts: state.posts.map(post =>
    post.id === 1
      ? {
          ...post,
          comments: post.comments.concat({
            id: 3,
            text: '새로운 댓글'
          })
        }
      : post
  )
};
```
위에서 아래로
```jsx
const nextState = produce(state, draft => {
  const post = draft.posts.find(post => post.id === 1);
  post.comments.push({
    id: 3,
    text: '와 정말 쉽다!'
  });
});
```

## 사용법?

프로젝트에서    
```$ yarn add immer```    
위 명령을 실행해주어야 한다.

파일 내부에서    
```import produce from 'immer';```

produce 함수를 사용해 줄 때에는    
첫번째 파라미터는 **수정하고 싶은 상태**    
두번째 파라미터는 **어떻게 업데이트 하고 싶을지 정의하는 함수**를 넣어준다.
