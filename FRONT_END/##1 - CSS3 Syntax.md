# CSS 기본 문법

css는 html이나 xml 같은 구조화 된 문서를 화면에 어떻게 렌더링 할지 정의하기 위한 언어이다.

즉, css는 html의 각 요소의 style을 정의하여 화면 등에 어떻게 렌더링하면 되는지 브라우저에게 설명하기 위한 언어이다.

html과 css는 각자의 문법을 갖는 별개의 언어이며, html은 css를 포함할 수 있다. 그러나 html없이 단독으로 존재하는 css는 의미가 없다.

- ## 1 . 선택자

> css는 html 요소의 style을 정의하기 위해 사용된다.
>
> 이를 위해서 선행되야 하는 것은 스타일을 적용할 html 요소를 선택을 할 수 있어야 한다.
> > ex )
```
h1 { color : red; }
```
> 위와 같이 ( 선택자 ) { 프로퍼티 : 값; } 와 같은 형태를 지니고 있다.
>
> 위와 같은 구문을 Rule이라 하며 셀렉터에 의해 선택된 특정 html 요소를 어떻게 렌더링할 것인지 브라우저에 지시하는 역할을 한다.
>
> 이와 같은 Rule의 집합을 stylesheet라고 한다.

- ## 2 . 프로퍼티(property)

> 셀렉터로 html 요소를 선택하고 {} 내에 프로퍼티와 값을 지정하는 것으로 다양한 style을 정의할 수 있다.
> 
> 프로퍼티는 표준 스펙으로 이미 지정되어 있는 것을 사용하여야하며 사용자가 임의로 정의할 수 없다.
> 
> 여러 개의 프로퍼티를 연속해서 지정할 수 있으며 세미콜론(;)으로 구분한다.
> > ex )
```
p {
  color: ...;
  font-size: ...;
}
```

- ## 3 . 값(value)

> 셀렉터로 지정한 html 요소에 style을 적용하기 위해 프로퍼티를 사용했다.
> 
> 프로퍼티의 값은 해당 프로퍼티에 사용할 수 있는 값을 “키워드”나 “크기 단위” 또는 “색상 표현 단위” 등의 특정 단위로 지정하여야 한다.
> > ex )
```
p {
  color : red;
  font-size : 16px;
}
```

- ## 4 . html과 css의 연동

> html은 css를 포함할 수 있다. css를 가지고 있지 않은 html은 브라우저에서 기본으로 적용하는 css에 의해 렌더링된다.
>
> html과 css를 연동 하는 방법은 총 세가지로 나뉜다.

- ### 4.1 . link style

> html 내에서 외부에 있는 css파일을 로드하는 방식이다. ( _가장 일반적으로 사용된다._ )
> > ex )
```
<head>
  <link rel="stylesheet" href="style.css">
</head>
```

- ### 4.2 . embedding style

> html 내부에 css를 포함시키는 방식이다.
> 
> 매우 간단한 웹페이지의 경우는 문제될 것이 없겠지만 link style을 사용하는 편이 좋다.
> > ex )
```
<head>
  <style>
    h1 { color : red; }
  </style>
</head>
```

- ### 4.3 . inline style

> html요소의 style 프로퍼티에 css를 기술하는 방식이다.
> 
> javaScript가 동적으로 css를 생성할 때 사용하는 경우가 있다.
> > ex )
```
<body>
  <p style="color : red"> hello world </p>
</body>
```
