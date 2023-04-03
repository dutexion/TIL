# 셀렉터

css는 html의 요소의 style을 정의해준다.

정의해주기 위해서는 html의 요소가 있어야하고 요소를 특정할 필요가 있다.

이러한 목적으로 사용되는 것이 셀렉터이다.

- 복수개의 셀렉터를 선택할 수 있으며, 쉼표(,)로 구분한다.

- ## 1 . 전체 셀렉터
> 애스터리스트(* ) 는 모든 요소를 선택한다. head태그도 포함한다.
```
* {  color : red; }
```

- ## 2 . 태그 셀렉터
> 태그명 셀렉터는 지정된 태그명을 가지는 요소를 선택한다.
```
p { color : red; }
```

- ## 3 . id 셀렉터
> id 속성값을 지정하여 일치하는 요소를 선택한다. ( _id 속성값은 중복될 수 없는 유일한 값이다. / #'id명'식으로 지정한다._ )
```
<head>
  <style>
    #p1 { color : red; }
    #p2 { color : blue; }
  </style>
</head>
<body>
  <p id="p1">hello</p>
  <p id="p2">world</p>
</body>
```

- ## 4 . class 셀렉터
> class 속성값을 지정하여 일치하는 요소를 선택한다. ( _class 속성값은 중복될 수 있다. / .'class명'식으로 지정한다._ )
```
<head>
  <style>
    .red { color : red; } // 빨강
    .large { font-size : 200%; } // 커짐
  </style>
</head>
<body>
  <p class="red">it is red text</p> // 빨강
  <p class="red large">it is red large text</p> // 빨강,커짐
</body>
```

- ## 5 . 속성 셀렉터
> 셀렉터[속성]은 지정된 속성을 가지는 모든 요소를 선택합니다.
> - [태그] = 속성을 가지는 모든 요소를 선택한다.
> - [태그="abs"] = 속성과 속성값이 일치하는 모든 요소를 선택한다.
> - [태그~="pls"] = pls 속성값을 포함하고 있는 요소를 선택한다. ( _공백으로 분리되어 있어야 한다._ )
> - [태그|="qwe"] = 지정된 속성값을 포함하거나 속성값 뒤 붙임표(-)로 시작하는 요소를 선택한다.
> - [태그^="http"] = 지정된 속성값으로 시작되는 요소를 선택한다.
> - [태그$=".html"] = 지정된 속성 값으로 끝나는 요소를 선택한다.
> - [태그*="test"] = 지정된 속성 값이 포함된 요소를 선택한다.
```
<head>
  <style>
    a[href] { color : red; }
    a[href="naver.com"] { font-size : 200%; }
    h1[title~="first"] { font-style : italic; }
    a[href^="http"] { color : aqua; }
    a[href$=".html"] {color : green; }
    a[href*="text"] {color : white;}
  </style>
</head>
<body>
  <h1 title="heading first">heading</h1> // 이탤릭체를 가진다.
  <h1 title="heading-first">heading2</h1> // 스타일을 가지지 않는다
  <a href="google.com">google</a> // 빨갛다
  <a href="naver.com">naver</a> // 빨갛고 크다
  <a href="https://www.test.com">test</a> // 아쿠아색이다
  <a href="test.html">test.html</a> // 초록색이다
  <a href="row-text"">text</a> // 하얀색이다
  
</body>
```
```
<head>
  <style>
    p[lang|="en"] { color: red; }
  </style>
</head>
<body>
  <p lang="en">Hello!</p> // 빨갛다
  <p lang="en-us">Hi!</p> // 빨갛다
  <p lang="en-gb">Ello!</p> // 빨갛다
  <p lang="us">Hi!</p>
  <p lang="no">Hei!</p>
</body>
```

- ## 6 . 복합 셀렉터
> ### 6.1 . 후손 셀렉터
> 자신의 한단계 상위에 속하는 요소를 부모 요소, 한단계 하위에 속하는 요소를 자식 요소라고 한다.
> 
> 자신보다 n만큼 하위에 속하는 요소는 후손 요소라 한다.
>
> 후손 셀렉터는 셀렉터A의 모든 후손 요소 중 셀렉터B와 일치하는 요소를 선택한다.
>
> _태그 태그_
```
<head>
  <style>
    div p { color : red; }
  </style>
</head>
<body>
  <div>
    <p>hello</p> // 스타일이 적용된다
    <p>world</p> // 스타일이 적용된다
  </div>
  <p>hi~</p> // 스타일이 적용되지 않는다
</body>
```
> ### 6.2 . 자식 셀렉터
> 자손 셀렉터는 셀렉터A의 모든 자식 요소 중 셀렉터B와 일치하는 요소를 선택한다.
>
> _태그 > 태그_
```
<head>
<style>
    div > p { color: red; }
  </style>
</head>
<body>
  <h1>Heading</h1>
  <div>
    <p>paragraph 1</p> // 스타일이 적용된.
    <p>paragraph 2</p> // 스타일이 적용된다
    <span><p>paragraph 3</p></span> // 스타일이 적용되지 않는다
  </div>
  <p>paragraph 4</p> // 스타일이 적용되지 않는다
</body>
```
> ### 6.3 . 형제 셀렉터
> 형제 셀렉터는 형제 관계에서 뒤에 위치하는 요소를 선택할 때 사용합니다.
> 
> ### 6.3.1 . 인접 형제 셀렉터
> 셀렉터A의 형제 요소 중 셀렉터A 바로 뒤에 위치하는 셀렉터B 요소를 선택한다. A와 B 사이에 다른 요소가 존재하면 선택되지 않는다.
>
> _태그 + 태그_
> ### 6.3.2 . 일반 형제 셀렉터
> 셀렉터A의 형제 요소 중 셀렉터A 뒤에 위치하는 셀렉터B 요소를 모두 선택한다.
>
> _태그 ~ 태그
```
<head>
  <style>
    p + ul { color: red; }
  </style>
</head>
<body>
  <div>A div element.</div>
  <ul>
    <li>Coffee</li> // 스타일이 적용되지 않는다
    <li>Tea</li> // 스타일이 적용되지 않는다
    <li>Milk</li> // 스타일이 적용되지 않는다
  </ul>

  <p>The first paragraph.</p>
  <ul>
    <li>Coffee</li> // 스타일이 적용된다
    <li>Tea</li> // 스타일이 적용된다
    <li>Milk</li> // 스타일이 적용된다
  </ul>

  <h2>Another list</h2>
  <ul>
    <li>Coffee</li> // 스타일이 적용되지 않는다
    <li>Tea</li> // 스타일이 적용되지 않는다
    <li>Milk</li> // 스타일이 적용되지 않는다
  </ul>
</body>
```
```
<head>
  <style>
    p ~ ul { color: red; }
  </style>
</head>
<body>
  <div>A div element.</div>
  <ul>
    <li>Coffee</li> // 스타일이 적용되지 않는다
    <li>Tea</li> // 스타일이 적용되지 않는다
    <li>Milk</li> // 스타일이 적용되지 않는다
  </ul>

  <p>The first paragraph.</p>
  <ul>
    <li>Coffee</li> // 스타일이 적용된다
    <li>Tea</li> // 스타일이 적용된다
    <li>Milk</li> // 스타일이 적용된다
  </ul>

  <h2>Another list</h2>
  <ul>
    <li>Coffee</li> // 스타일이 적용된다
    <li>Tea</li> // 스타일이 적용된다
    <li>Milk</li> // 스타일이 적용된다
  </ul>
</body>
```

- ## 7 . 가상 클래스 셀렉터
> 가상 클래스는 요소의 특정 상태에 따라 스타일을 정의할 때 사용된다.
> 
> 특정 상태란 예를 들어 다음과 같다.
>
> - 마우스가 올라와 있을때
>
> - 링크를 방문했을 때와 아직 방문하지 않았을 때
>
> - 포커스가 들어와 있을 때
>
> 이러한 특정 상태에는 원래 클래스가 존재하지 않지만 가상 클래스를 임의로 지정하여 선택하는 방법이다.
>
> 가상 클래스는 마침표(.) 대신 콜론(:)을 사용한다.
> 
> CSS 표준에 의해 미리 정의된 이름이 있기 때문에 임의의 이름을 사용할 수 없다.
```
<head>
  <style>
    a:hover { color: red; } // 마우스를 올렸을 때
    input:focus { background-color: yellow; } // 인풋을 선택했을 때
  </style>
</head>
<body>
  <a href="#">Hover me</a><br><br>
  <input type="text" placeholder="focus me">
</body>
```
> ### 7.1 . 링크 셀렉터, 동적 셀렉터
> > :link | 셀렉터가 방문하지 않은 링크일 때
> > 
> > :visited | 셀렉터가 방문한 링크일 때
> > 
> > :hover | 셀렉터에 마우스가 올라와 있을 때
> > 
> > :active | 셀렉터가 클릭된 상태일 때
> > 
> > :focus | 셀렉터에 포커스가 들어와 있을 때
> ### 7.2 . ui 요소 셀렉터
> > :checked | 셀렉터가 체크 상태일 때
> >
> > :enabled | 셀렉터가 사용 가능한 상태일 때
> > 
> > :disabled | 셀렉터가 사용 불가능한 상태일 때
> ### 7.3 구조 가상 셀렉터
> > :first-child | 셀렉터에 해당하는 모든 요소 중 첫번째 자식인 요소를 선택한다.
> > 
> > :last-child | 셀렉터에 해당하는 모든 요소 중 마지막 자식인 요소를 선택한다.
> >
> > :nth-child(n) | 셀렉터에 해당하는 모든 요소 중 앞에서 n번째 자식인 요소를 선택한다.
> >
> > :nth-last-child(n) | 셀렉터에 해당하는 모든 요소 중 뒤에서 n번째 자식인 요소를 선택한다.
> >
> > :nth-child(2n) | 짝수 번째에 해당하는 셀렉터를 선택한다.
> >
> > :nth-child(2n+1) | 홀수 번째에 해당하는 셀렉터를 선택한다.
> >
> > :first-of-type | 셀렉터에 해당하는 요소의 부모 요소의 자식 요소 중 첫번째 등장하는 요소를 선택한다.
> > 
> > :last-of-type | 셀렉터에 해당하는 요소의 부모 요소의 자식 요소 중 마지막에 등장하는 요소를 선택한다.
> >
> > :nth-of-type(n) | 셀렉터에 해당하는 요소의 부모 요소의 자식 요소 중 앞에서 n번째에 등장하는 요소를 선택한다.
> >
> > :nth-last-of-type(n) | 셀렉터에 해당하는 요소의 부모 요소의 자식 요소 중 뒤에서 n번째에 등장하는 요소를 선택한다.
> ### 7.4 . not 셀렉터
> > :not(셀렉터) | 셀렉터에 해당하지 않는 모든 요소를 선택한다.
> ### 7.5 . 정합성 체크 셀렉터
> > :valid(셀렉터)	정합성 검증이 성공한 input 요소 또는 form 요소를 선택한다.
> > 
> > :invalid(셀렉터)	정합성 검증이 실패한 input 요소 또는 form 요소를 선택한다.

- ## 8 . 가상 요소 셀렉터
> 상 요소는 요소의 특정 부분에 스타일을 적용하기 위하여 사용된다.
> 
> 특정 부분이란 예를 들어 다음과 같다.
>
> 요소 콘텐츠의 첫글자 또는 첫줄
>
> 요소 콘텐츠의 앞 또는 뒤
>
> 가상 요소에는 두개의 콜론(::)을 사용한다.
> 
> CSS 표준에 의해 미리 정의된 이름이 있기 때문에 임의의 이름을 사용할 수 없다.
> > ::first-letter | 콘텐츠의 첫글자를 선택한다.
> > 
> > ::first-line | 콘텐츠의 첫줄을 선택한다. 블록 요소에만 적용할 수 있다.
> > 
> > ::after | 콘텐츠의 뒤에 위치하는 공간을 선택한다. 일반적으로 content 프로퍼티와 함께 사용된다.
> > 
> > ::before | 콘텐츠의 앞에 위치하는 공간을 선택한다. 일반적으로 content 프로퍼티와 함께 사용된다.
> > 
> > ::selection | 드래그한 콘텐츠를 선택한다. iOS Safari 등 일부 브라우저에서 동작 않는다.
