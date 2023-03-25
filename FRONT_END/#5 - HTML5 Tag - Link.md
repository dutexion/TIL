# HTML의 핵심 개념인 Hyperlink

하이퍼Text의 하이퍼는 컴퓨터 용어로서 텍스트 등의 정보가 동일 선상에 있는 것이 아니라 다중으로 연결되어 있는 상태를 의미한다.

이것은 HTML의 가장 중요한 특징인 링크의 개념과 연결되는데

기존 문서나 텍스트의 고정성의 제약에서 벗어나 사용자가 원하는 순서대로 원하는 정보를 얻을 수 있는 기능을 제공한다.

텍스트에서 다른 텍스트로 건너뛰어 읽을 수 있는 이 기능을 하이퍼링크라 한다.
 
HTML link는 하이퍼링크를 의미하며 a(anchor) tag가 그 역할을 담당한다.

- ## 1.href 속성

> href 속성은 이동하고자 하는 파일의 경로를 값으로 받는다. ( _'경로'란 파일 시스템 상에서 특정 파일의 위치를 의미한다._ )

- ### 1.1 . 디렉터리
> 디렉터리는 파일과 다른 디렉터리를 갖는 파일 시스템 내의 존재물로서 폴더라고도 불리운다.
> > **루트 디렉터리** - 파일 시스템 구조 상에 가장 최상위 디렉터리이다.
> > - Unix: /
> > - Windows: C:\
>
> > **홈 디렉터리** - 시스템의 사용자에게 각각 할당된 개별 디렉터리이다.
> > - Unix: /Users/{계정명}
> > - Windows: C:\Users\{계정명}
>
> > **작업 디렉터리** - 작업 중인 파일의 위치한 디렉터리이다.
> > - ./
>
> > **부모 디렉터리** - 작업 디렉터리의 부모 디렉터리이다.
> > - ../

- ### 1.2 . 파일 경로
> 파일 경로는 파일 시스템에서 파일의 위치를 나타내는 방법이다.
> 
> 경로에는 절대경로와 상대경로가 있다.
> > **절대경로** - 현재 작업 디렉터리와 관계없이 특정 파일의 절대적인 위치를 가리킨다. ( _루트 디렉터리를 기준으로 파일의 위치를 나타낸다._ )
> > - http://www.mysite.com/index.html
> > - /Users/leeungmo/Desktop/myImage.jpg
> > - C:\users\leeungmo\Desktop\myImage.jpg
> > - /index.html
>
> > **상대경로** - 현재 작업 디렉터리를 기준으로 특정 파일의 상대적인 위치를 가리킨다.
> > - ./index.html
> > - ../dist/index.js
> > - ../../dist/index.js
> > - index.html
> > - html/index.html
>
> href 어트리뷰트에 사용 가능한 값은 아래와 같다.
> > - 절대 URL / 웹사이트 URL (href=”http://www.example.com/default.html”)
> > - 상대 URL / 자신의 위치를 기준으로한 대상의 URL (href=”html/default.html”)
> > - fragment identifier	/ 페이지 내의 특정 id를 갖는 요소에의 링크 (href=”#top”)
> > - 메일 / mailto:
> > - script / href=”javascript:alert(‘Hello’);”
> > ex )
```
<!DOCTYPE html>
<html>
  <body>
    <a href="http://www.google.com">URL</a><br>
    <a href="html/my.html">Local file</a><br>
    <a href="file/my.pdf" download>Download file</a><br>
    <a href="#">fragment identifier</a><br>
    <a href="mailto:someone@example.com?Subject=Hello again">Send Mail</a><br>
    <a href="javascript:alert('Hello');">Javascript</a>
  </body>
</html>
```
> > fragment identifier를 이용한 페이지 내부 이동 방법은 다음과 같다.
```
<!DOCTYPE html>
<html>
<body>

<h2 id="top">Top of page!</h2>

<p>In my younger and more vulnerable years my father gave me some advice that I've been turning over in my mind ever since.</p>
<p>"Whenever you feel like criticizing any one," he told me, "just remember that all the people in this world haven't had the advantages that you've had."</p>
<p>He didn't say any more, but we've always been unusually communicative in a reserved way,
and I understood that he meant a great deal more than that. In consequence, I'm inclined to reserve all judgments,
a habit that has opened up many curious natures to me and also made me the victim of not a few veteran bores.
The abnormal mind is quick to detect and attach itself to this quality when it appears in a normal person,
and so it came about that in college I was unjustly accused of being a politician, because I was privy to the secret griefs of wild, unknown men.
Most of the confidences were unsought-frequently I have feigned sleep, preoccupation, or a hostile levity
when I realized by some unmistakable sign that an intimate revelation was quivering on the horizon; for the intimate revelations of young men,
or at least the terms in which they express them, are usually plagiaristic and marred by obvious suppressions. Reserving judgments is a matter of infinite hope.
I am still a little afraid of missing something if I forget that, as my father snobbishly suggested, and I snobbishly repeat,
a sense of the fundamental decencies is parcelled out unequally at birth.</p>
<p>And, after boasting this way of my tolerance, I come to the admission that it has a limit.
Conduct may be founded on the hard rock or the wet marshes, but after a certain point
I don't care what it's founded on. When I came back from the East last autumn 
I felt that I wanted the world to be in uniform and at a sort of moral attention forever;
I wanted no more riotous excursions with privileged glimpses into the human heart. Only Gatsby,
the man who gives his name to this book, was exempt from my reaction-Gatsby, who represented everything for which I have an unaffected scorn.
If personality is an unbroken series of successful gestures, then there was something gorgeous about him, some heightened sensitivity to the promises of life,
as if he were related to one of those intricate machines that register earthquakes ten thousand miles away.
This responsiveness had nothing to do with that flabby impressionability
which is dignified under the name of the "creative temperament"-it was an extraordinary gift for hope, a romantic readiness such as
I have never found in any other person and which it is not likely I shall ever find again. No-Gatsby turned out all right at the end;
it is what preyed on Gatsby, what foul dust floated in the wake of his dreams that temporarily closed out my interest in the
abortive sorrows and short-winded elations of men.</p>

<a href="#top">Go to top</a> // 페이지 내부에서 id가 top인 곳으로 이동한다.
</body>
</html>
```

## 2.target 속성

> target 속성은 링크를 클릭했을 때 윈도우를 어떻게 오픈할 지를 지정한다.
> > - self	링크를 클릭했을 때 연결문서를 현재 윈도우에서 오픈한다. (기본값)
> > - blank	링크를 클릭했을 때 연결문서를 새로운 윈도우나 탭에서 오픈한다.
> > ex )
```
<!DOCTYPE html>
<html>
  <body>
    <a href="http://www.google.com" target="_blank" rel="noopener noreferrer">Visit google.com!</a>
  </body>
</html>
```
> target="blank"를 사용해 외부 페이지를 오픈하는 경우, 이동한 외부 페이지에서..
> 
> 자바스크립트 코드를 사용해 악의적인 페이지로 리다이렉트할 수 있는 보안 취약점이 있다.
> 
> 따라서 rel="noopener noreferrer"를 추가해 Tabnabbing 피싱 공격에 대비할 것을 권장한다.
> 
> 참고로 noopener 속성은 성능 상 이점도 있는 것으로 알려져 있다.

