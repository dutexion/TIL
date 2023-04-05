# 텍스트 관련 태그

최근 웹 트렌드는 텍스트를 줄이고 이미지나 동영상 등으로 콘텐츠를 구성하는 것 이지만

  HTML 콘텐츠의 대부분은 텍스트로 구성된다.
  
- ## 1 . 제목 태그
> heading 태그는 h1부터 h6 까지의 태그가 있다.
> 
> h1이 가장 중요한 제목을 의미하며 글자의 크기도 크다.
> 
> 시멘틱 웹의 의미를 살려서 제목 이외에는 사용하지 않는 것이 좋다. ( _검색엔진은 heading 태그를 중요하게 받아들일 가능성이 크다._ )
>
> > ex )
```
<body>
  <h1>heading 1</h1>
  <h2>heading 2</h2>
  <h3>heading 3</h3>
  <h4>heading 4</h4>
  <h5>heading 5</h5>
  <h6>heading 6</h6>
</body>
```

- ## 2 . 글자 형태 태그
- ### 2.1 . b 태그
> bold체를 지정한다. ( _의미론적 중요성은 없다._ )
> > ex )
```
<body>
  <b>bold</b>
  <p style="font-weight: bold;">This text is bold.</p>
</body>
```

- ### 2.2 . strong 태그
> b 태그와 같이 bold체를 지정한다. ( _b태그와는 달리 의미론적 중요성을 지닌다._ )
> > ex )
```
<body>
  <strong>strong</strong>
</body>
```

- ### 2.3 . i 태그
> italic체를 지정한다. ( _의미론적 중요성은 없다._ )
> > ex )
```
<body>
  <i>italic</i>
  <p style="font-style: italic;">This text is italic.</p>
</body>
```

- ### 2.4 . em 태그
> emphasized(강조) text를 지정한다. i 태그와 같이 italic체로 자정된다. ( _i태그와는 달리 의미론적 중요성을 지닌다._ )
> > ex )
```
<body>
  <em>italic</em>
</body>
```

- ### 2.5 . small 태그
> small text를 지정한다.
> > ex )
```
<body>
  <p>hello everybody i'm <small>good</small> people</p> // small 태그 안에 있는 good만 한단계 작은 글자로 표시된다.
</body>
```

- ### 2.6 . mark 태그
> highlighted text를 지정한다.
> > ex )
```
<body>
  <p>it is <mark>highlight</mark> text</p> // mark 태그 안에 있는 highlight만 마커 표시된다.
</body>
```

- ### 2.7 . del 태그
> delected text를 지정한다.
> > ex )
```
<body>
  <p>it's <del>delected</del> text?</p> // del 태그 안에 있는 delected만 취소선 표시된다.
</body>
```

- ### 2.8 . ins 태그
> inserted text를 지정한다.
```
<body>
  <p>My favorite <ins>color</ins> is red.</p> // ins 태그 안에 있는 color만 언더바 표시된다.
</body>
```

- ### 2.9 . sub/sup 태그
> sub 태그는 subscripted(아래에 쓰인) text를 sup 태그는 superscripted(위에 쓰인) text를 지정한다.
> > ex )
```
<body>
  <p>This is <sub>subscripted</sub> text.</p>
  <p>This is <sup>superscripted</sup> text.</p>
</body>
```

- ## 3 . 본문 태그
- ### 3.1 . p 태그
> 단락을 지정한다.
> > ex )
```
<body>
  <p>hello world!</p>
</body>
```

- ### 3.2 . br 태그
> br 태크를 사용하면 줄넘김한다. ( _br 태그는 빈 요소로 종료태그가 없다._ )
> > ex )
```
<body>
  <p>hello <br> world</p> // HTML에서는 1개 이상의 연속된 공백을 삽입하여도 1개의 공백으로 표시된다. 1개 이상의 연속된 줄바꿈 또한 1개의 공백으로 표시된다.
</body>
```

- ### 3.3 . pre 태그
> 형식화 된 text를 지정한다. ( _pre 태그 안에 요소들은 작성된 콘텐츠 그대로 브라우저에 표시된다._ )
> > ex )
```
<body>
  <pre>
  hello world
  hello everybody
  </pre>
</body>
```

- ### 3.4 . hr 태그
> 수평줄을 삽입한다. ( _hr 태그는 빈 요소로 종료태그가 없다._ )
> > ex )
```
<body>
  <h1>heading</h1>
  <hr>
  <p>hello</p>
</body>
```

- ### 3.5 . q 태그
> 짧은 인용문을 지정한다. ( _브라우저는 인용부호(큰따움표)로 q 요소를 감싼다._ )
> > ex )
```
<body>
  <p>Browsers usually insert quotation marks around the q element.</p>
  <p>WWF's goal is to: <q>Build a future where people live in harmony with nature.</q></p>
</body>
```

- ### 3.6 . blockquote 태그
> 긴 인용문 블록을 지정한다. ( _브라우저는 blockquote 요소를 들여쓰기한다. css를 이용하여 다양한 style을 적용할 수 있다._ )
> > ex )
```
<body>
   <p>Browsers usually indent blockquote elements.</p>
   <blockquote>
   <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>
   </blockquote>
</body>
```
