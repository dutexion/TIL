# 사용자와의 커뮤니케이션을 위한 폼 태그

- ## 1 . form 태그


> form 태그는 사용자가 입력한 데이터를 수집하기 위해 사용되며 input, textarea, button, checkbox 등의 **입력 양식 태그** 포함할 수 있다.
> > attribute | Value | Description
> > 
> > action | URL | 입력 데이터가 전송될 URL 지정
> > 
> > method | get / post | 입력 데이터 전달 방식 지정
>
> GET과 POST는 HTTP 프로토콜을 이용해서 사용자 입력 데이터를 서버에 전달하는 방식을 나타내며 HTTP request method라 한다
> > **GET**
> > 
> > - GET 방식은 전송 URL에 입력 데이터를 쿼리스트링으로 보내는 방식이다.
> > 
> > 예) http://jsonplaceholder.typicode.com/posts?userId=1&id=1
> > 
> > - 전송 URL 바로 뒤에 ‘?’를 통해 데이터의 시작을 알려주고, key-value형태의 데이터를 추가한다. ( _1개 이상의 전송 데이터는 ‘&’로 구분한다._ )
> > 
> > - URL에 전송 데이터가 모두 노출되기 때문에 보안에 문제가 있으며 전송할 수 있는 데이터의 한계가 있다. ( _최대 255자_ ).
>
> > **POST**
> >
> > - POST 방식은 Request Body에 담아 보내는 방식이다.
> > 
> > 예) http://jsonplaceholder.typicode.com/posts
> > 
> > - URL에 전송 데이터가 모두 노출되지 않지만 GET에 비해 속도가 느리다.
> > 
> > - REST API에서 POST 메소드는 특정 리소스의 생성을 요청한다.
> >
> > ex )
```
<form action="http://jsonplaceholder.typicode.com/users" method="get">
    ID: <input type="text" name="id" value="1"><br>
    username: <input type="text" name="username" value="Bret"><br>
    <input type="submit" value="Submit">
</form>
```
> > img ex )
> > 
![image](https://user-images.githubusercontent.com/128302413/228243258-0b0fef4a-8c6a-4eb1-8244-bfd8b78ece42.png)
> >
> > submit button이 클릭되면 input 태그에 입력된 정보가 form 태그의 method 속성에 지정된 방식으로 action 속성에 지정된 서버측의 처리 로직에 전달된다.

- ## 2 . input 태그

> input 태그는 form 태그 중에서 가장 중요한 태그로 사용자로부터 데이터를 입력받기 위해 사용된다.
>
> input 태그는 다양한 종류가 있는데 type 속성에 의해 구분된다.
> 
> form 태그 내에 존재하여야 입력 데이터를 전송할 수 있으나 ajax를 사용할 시에는 form 태그 내에 존재하지 않아도 된다.
>
> 서버에 전송되는 데이터는 name 속성 키로, value 속성 값으로하여 key=value의 형태로 전송된다.
> > button / 버튼 생성
> > 
> > checkbox / 체크박스 생성
> > 
> > color / 컬러선택 생성
> > 
> > date / 년,월,일 생성
> > 
> > datetime / 년,월,일,시,분,초 생성
> > 
> > datetime-local / 지역 년,월,일,시,분,초 생성
> > 
> > email / 이메일 form 생성 ( _submit 시 자동 검증한다._ )
> > 
> > file / 파일 form 생성
> > 
> > hidden / 감추어진 입력 form 생성
> > 
> > image / 이미지로 된 submit 버튼 생성
> > 
> > month / 월 선택 form 생성
> > 
> > number / 숫자 선택 form 생성
> > 
> > password / 비밀번호 입력 form 생성
> > 
> > range / 범위 선택 form 생성
> > 
> > radio / 라디오 버튼 생성
> > 
> > reset / 초기화 버튼 생성
> > 
> > search / 검색어 입력 form 생성
> > 
> > submit / 제출 버튼 생성
> > 
> > tel / 전화번호 입력 form 생성
> > 
> > text / 텍스트 입력 form 생성
> > 
> > time / 시간 입력 form 생성
> > 
> > url / url 입력 form 생성
> > 
> > week / 주 선택 입력 form 생성

- ## 3 . select 태그

> 복수개의 리스트에서 복수개의 아이템을 선택할 때 사용한다.
> 
> 함께 사용할 수 있는 태그는 다음과 같다.
>
> 서버에 전송되는 데이터는 select 요소의 name 속성을 키로, option 요소의 value 속성을 값으로하여 key = value의 형태로 전송된다.
> > select | select form 생성
> > 
> > option | option 생성
> > 
> > optgroup | option을 그룹화한다
> >
> > ex )
```
  <select name="cars1">
    <option value="volvo" selected>Volvo</option>
    <option value="saab" disabled>Saab</option>
    <option value="fiat">Fiat</option>
    <option value="audi">Audi</option>
  </select>

  <select name="cars2" size="4" multiple>
    <option value="volvo">Volvo</option>
    <option value="saab">Saab</option>
    <option value="fiat">Fiat</option>
    <option value="audi" selected>Audi</option>
  </select>

  <select name="cars3">
    <optgroup label="Swedish Cars">
      <option value="volvo">Volvo</option>
      <option value="saab">Saab</option>
    </optgroup>
    <optgroup label="German Cars" disabled>
       <option value="mercedes">Mercedes</option>
      <option value="audi">Audi</option>
    </optgroup>
  </select>
```
> > img ex )
> >
![image](https://user-images.githubusercontent.com/128302413/228251232-2948a7cd-7aaa-4c4a-b775-dc22f172a15e.png)

- ## 4 . textarea 태그

> textarea 태그는 여러 줄의 글자를 입력할 때 사용한다.
> > ex )
```
<textarea name="message" rows="10" cols="30">Write something here</textarea>
```

- ## 5 . button

> button 태그는 클릭할 수 있는 버튼을 생성한다. <input type="button">과 유사하지만 input 태그는 빈 태그인 반면 button 태그는 그렇지 않다.
>
> 따라서 button 요소에는 텍스트나 이미지 같은 콘텐츠를 사용할 수 있다.
>
> type 어트리뷰트는 반드시 지정하는 것이 바람직하며 어트리뷰트값으로 button, reset, submit를 지정할 수 있다.
> > ex )
```
<button type="button" onclick="alert('Hello World!')">Click Me!</button>
<input type="button" value="Click Me!" onclick="alert('Hello world!')">
```
> >  button 태그는 속성만을 받아들이는 input 태그와 달리 콘텐츠로 문자열은 물론 HTML 요소를 받을 수도 있다는 장점이 있다.

- ## 6 . fieldset / legend 태그

> fieldset 태그는 관련된 입력 양식들을 그룹화할 때 사용한다.
> 
> legend 태그는 fieldset 태그 내에서 사용되야 하며 그룹화된 fieldset의 제목을 정의한다.
> > ex )
```
<fieldset>
    <legend>Login</legend>
    Username <input type="text" name="username">
    Password <input type="text" name="password">
</fieldset>
```
> > img ex )
> >
![image](https://user-images.githubusercontent.com/128302413/228254161-d178681e-5bce-42f5-8fa9-bcd8aa193cd6.png)
