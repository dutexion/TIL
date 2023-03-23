# 웹페이지를 구성하는 기본 태그

- 1 . 문서 형식 정의 태그 ( _html5 이전에 html에도 문서 형식 정의 태그가 따로 있지만 서술하지 않음._ )
> 문서 형식 정의 태그는 출력할 웹페이지의 형식을 브라우저에 전달한다.
> > ex )
```
<!DOCTYPE html>
```
> 문서 형식 정의 태그는 출력할 웹페이지의 형식을 브라우저에 전달한다.

- 2 . html 태그
< html > 태그는 모든 태그의 부모 태그이며, 모든 요소들은 <html> 태그 안에 작성해야 한다. ( _< !DOCTYPE >는 예외이다._ )
  
- 3 . head 태그
  
> head 요소는 메타데이터를 포함하기 위한 요소이며 웹페이지에 단 하나만 존재한다. ( _메타데이터란 데이터의 데이터를 의미한다._ )
>
> 메타데이터는 HTML 문서의 title, style, link, script에 대한 데이터로 화면에 표시되지 않는다.
  
- 3.1 . title 태그

> title 요소는 문서의 제목을 정의한다.
>
> 정의된 제목은 브라우저 탭에 표시된다.
> > ex )
  ```
  <title> 문서 제목 </title>
  ```
  
- 3.2 . style 태그

> style 요소에는 HTML 문서를 위한 style 정보를 의미한다.
> > ex )
```
  <style>
      body {
        background-color: yellow; // body 요소의 배경을 노란색으로 지정한다.
        color: blue; // 글자 색을 파란색으로 지정한다.
      }
   </style>
```
  
- 3.3 . link 태그
  
> link 요소에는 외부 리소스와의 연계 정보를 정의한다.
> 
> 주로 HTML과 외부 CSS 파일을 연계에 사용된다
> > ex )
```
<link rel="stylesheet" href="style.css">
```
  
- 3.4 . script 태그
  
> script 요소에는 client-side JavaScript를 정의한다.
> > ex )
```
<script>
      document.addEventListener('click', function () {
        alert('Clicked!');
      });
</script>
```
> src 어트리뷰트를 사용하면 외부 JavaScript 파일을 로드할 수 있다.
> >
```
<script src="main.js"></script>
```
  
- 3.5 . meta 태그

> meta 요소는 description, keywords, author, 기타 메타데이터 정의에 사용된다.
>
> 메타데이터는 브라우저, 검색엔진 등에 의해 사용된다.
> 
> charset 어트리뷰트는 브라우저가 사용할 문자셋을 정의한다.
> > ex )
```
<meta charset="utf-8">
<meta name="keywords" content="HTML, CSS, XML, XHTML, JavaScript"> // SEO를 위해 검색엔진이 사용할 keywords을 정의한다.
<meta name="description" content="Web tutorials on HTML and CSS"> // 웹페이지의 설명을 정의한다.
<meta name="author" content="John Doe"> // 웹페이지의 저자을 명기한다.
<meta http-equiv="refresh" content="30"> // 웹페이지를 30초 마다 Refresh한다.
```
  
- body 태그

> body 태그는 HTML 문서의 내용을 나타내며 웹페이지에 단 하나만 존재한다.
>
> 메타데이터를 제외한 웹페이지를 구성하는 대부분의 요소가 body 요소 내에 기술된다.
> > ex )
```
<body>
  <h1> 어쩌구 </h1>
</body>
```
