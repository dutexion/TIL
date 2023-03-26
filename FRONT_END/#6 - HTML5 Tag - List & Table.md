# 목표와 표 형식을 위한 태그

## 1.목록 ( List )
> 목록 안에는 li 태그를 사용한다

- ### 1.1 . 순서없는 목록 ( Unordered List )

> unordered list의 약자인 ul 태그를 사용한다.
> > ex )
```
<html>
  <body>
    <ul>
      <li> coffee </li>
      <li> tea </li>
      <li> milk </li>
    </ul>
  </body>
</html>
```

- ### 1.2 . 순서있는 목록 ( Ordered List )

> ordered list의 약자인 ol 태그를 사용한다.
> > ex )
```
<html>
  <body>
    <ol>
      <li> coffee </li>
      <li> tea </li>
      <li> milk </li>
    </ol>
  </body>
</html>
```
> type 속성을 사용하여 순서를 나타내는 문자를 지정할 수 있다.
> 
> value 속성을 사용하여 나타내는 값을 지정할 수 있다. ( _값을 3으로 변경했다면 다음으로 나타내는 값 또한 4로 변경된다._ )
> 
> > “1”	| 숫자 (기본값)
> > 
> > “A”	| 대문자 알파벳
> > 
> > “a”	| 소문자 알파벳
> > 
> > “I”	| 대문자 로마숫자
> > 
> > “i”	| 소문자 로마숫자
> > 
> > ex )
```
<ol type="I">
  <li value="2">Coffee</li>
  <li value="4">Tea</li>
  <li>Milk</li>
</ol>
```
> start 속성을 사용하여 목록의 시작 값을 지정할 수 있다.
> > ex )
```
<ol start = "5">
  <li>asd</li>
  <li>xzc</li>
</ol>
```
> reversed 속성을 사용하여 목록의 순서를 뒤집을 수 있다.
> > ex )
```
<ol reversed>
  <li>asd</li>
  <li>ssda</li>
</ol>
```

- ### 1.3 . 중첩목록

> 목록 안에 목록을 적어 중첩 목록을 만들 수 있다.
> > ex )
```
<ul>
  <li>coffee</li>
    <ol>
      <li>ice coffee</li>
      <li>warm coffee</li>
    </ol>
  <li>tea</li>
    <ol>
      <li>black tea</li>
      <li>green tea</li>
    </ol>
  <li>milk</li>
    <ol>
      <li>banana milk</li>
      <li>strawberry milk</li>
    </ol>
</ul>
```
**목록 태그는 내비게이션 메뉴를 만들 때 자주 사용된다.**

- ## 2 . 표 ( Table )

> 표를 만들 때 사용하는 태그이다.
> 
> 과거에는 table 태그를 사용하여 레이아웃을 구성하기도 하였으나 모던 웹에서는 주로 공간 분할 태그인 div 태그를 사용하여 레이아웃을 구성한다.
>
> > table | 표를 감싸는 태그
> > 
> > tr | 표 내부의 행 (table row)
> > 
> > th | 행 내부의 제목 셀 (table heading)
> > 
> > td | 행 내부의 일반 셀 (table data)
> >
> > img ex )

![image](https://user-images.githubusercontent.com/128302413/227774001-47fdef51-808f-418b-ac1d-49e92fa2ecb4.png)

> > ex )
```
<!DOCTYPE html>
<html>
  <body>
    <table border="1">
      <tr>
        <th>First name</th>
        <th>Last name</th>
        <th>Score</th>
      </tr>
      <tr>
        <td>Jill</td>
        <td>Smith</td>
        <td>50</td>
      </tr>
      <tr>
        <td>Eve</td>
        <td>Jackson</td>
        <td>94</td>
      </tr>
      <tr>
        <td>John</td>
        <td>Doe</td>
        <td>80</td>
      </tr>
    </table>
  </body>
</html>
```

> 테이블 태그의 속성은 아래와 같다.
> > border | 표 테두리 두께 지정. ( _CSS border property를 사용하는 것이 더 나은 방법이다._ )
> > rowspan | 해당 셀이 점유하는 행의 수 지정
> > colspan | 해당 셀이 점유하는 열의 수 지정
> > ex )
```
<!DOCTYPE html>
<html>
  <head>
    <style>
      table, th, td {
        border: 1px solid black;
        border-collapse: collapse;
      }
      th, td {
        padding: 15px;
      }
    </style>
  </head>
  <body>
    <h2>2개의 culumn을 span</h2>
    <table>
      <tr>
        <th>Name</th>
        <th colspan="2">Telephone</th>
      </tr>
      <tr>
        <td>Bill Gates</td>
        <td>555 77 854</td>
        <td>555 77 855</td>
      </tr>
    </table>

    <h2>2개의 row를 span</h2>
    <table>
      <tr>
        <th>Name:</th>
        <td>Bill Gates</td>
      </tr>
      <tr>
        <th rowspan="2">Telephone:</th>
        <td>555 77 854</td>
      </tr>
      <tr>
        <td>555 77 855</td>
      </tr>
    </table>
  </body>
</html>
```
> > 실행 결과

![image](https://user-images.githubusercontent.com/128302413/227774450-735a16df-fa9a-4188-875e-25e59874d32d.png)

