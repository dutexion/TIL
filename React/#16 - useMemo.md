활성된 사용자 수를 세어보겠다.

```js
import React, {useState,useRef} from "react";
import CreateUser from "./CreateUser";
import UserList from "./UserList";

function countActiveUsers(users) {
  console.log("활성 사용자 수 세는 중...");
  return users.filter(user => user.active).length;
}

function App() {
  const [text,setText] = useState({
    name:"",
    email:""
  });

  const {name,email} = text;

  const [userList,setUserList] = useState([
    {id:0,name:"apple",email:"apple@gmail.com",active:true},
    {id:1,name:"banana",email:"banana@gmail.com",active:false},
    {id:2,name:"pineapple",email:"pineapple@gmail.com",active:false}
  ])

  const nextId = useRef(3);

  const count = countActiveUsers(userList)

  const onChange = e => {
    const {name,value} = e.target;
    setText({
      ...text,
      [name]:value
    })
  }

  const onCreate = () => {
    const user = {
      id:nextId.current,
      name:name,
      email:email,
      active:false
    }
    setUserList([...userList,user])
    setText({
      name:"",
      email:""
    })
    nextId.current += 1;
  }

  const onRemove = id => {
    setUserList(userList.filter(user => user.id !== id));
  }

  const onToggle = id => {
    setUserList(userList.map(user => user.id === id ? {...user, active:!user.active}:user))
  }

  return (
    <>
      <CreateUser onChange={onChange} name={name} email={email} onCreate={onCreate}/>
      <UserList user={userList} onRemove={onRemove} onToggle={onToggle}/>
      <h3>활성화 된 사용자 수 : {count}</h3>
    </>
  )
}

export default App;
```

이런 식으로 코드를 짜면 활성 사용자 수가 세어지기는 하지만   
input 값이 바뀔때도 컴포넌트가 리렌더링 되어 비효율적이다.

이럴 때 사용하는게 **useMemo**이다.

```js
import React, {useState,useRef,useMemo} from "react";
import CreateUser from "./CreateUser";
import UserList from "./UserList";

function countActiveUsers(users) {
  console.log("활성 사용자 수 세는 중...");
  return users.filter(user => user.active).length;
};

function App() {
  const [text,setText] = useState({
    name:"",
    email:""
  });

  const {name,email} = text;

  const [userList,setUserList] = useState([
    {id:0,name:"apple",email:"apple@gmail.com",active:true},
    {id:1,name:"banana",email:"banana@gmail.com",active:false},
    {id:2,name:"pineapple",email:"pineapple@gmail.com",active:false}
  ])

  const nextId = useRef(3);

  const count = useMemo(() => countActiveUsers(userList), userList);

  const onChange = e => {
    const {name,value} = e.target;
    setText({
      ...text,
      [name]:value
    })
  }

  const onCreate = () => {
    const user = {
      id:nextId.current,
      name:name,
      email:email,
      active:false
    }
    setUserList([...userList,user])
    setText({
      name:"",
      email:""
    })
    nextId.current += 1;
  }

  const onRemove = id => {
    setUserList(userList.filter(user => user.id !== id));
  }

  const onToggle = id => {
    setUserList(userList.map(user => user.id === id ? {...user, active:!user.active}:user))
  }

  return (
    <>
      <CreateUser onChange={onChange} name={name} email={email} onCreate={onCreate}/>
      <UserList user={userList} onRemove={onRemove} onToggle={onToggle}/>
      <h3>활성화 된 사용자 수 : {count}</h3>
    </>
  )
}

export default App;
```

이렇게 하면 useMemo에서 **두번째 인자 값에 넣은 배열이 바뀔 때**만   
첫번째 인자 값으로 넣어준 함수가 실행되는 것이다.
