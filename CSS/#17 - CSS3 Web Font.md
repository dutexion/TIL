# 웹디자인 타이포그래피(Typography)

웹폰트는 사용자가 웹페이지를 요청한 순간 CSS에 기술된 필요 폰트가 서버에서 클라이언트로 전송된다.    
좀 더 구체적으로 말하면 매번 다운로드되는 것은 아니고 클라이언트에 해당 폰트가 존재하지 않을 경우 전송된다.

## 1 . CDN(Content Delivery Network) 링크 방식

웹폰트를 사용하는 방법 중 가장 간단한 방법은 CDN 링크를 사용하는 것이다. 다음은 구글에서 제공하는 웹폰트를 사용하는 방법이다.   
<a href="https://fonts.google.com/">Google Font</a> 에서 사용하고자 하는 웹폰트를 선택한다.    
한글 웹페이지에 자주 사용되는 나눔고딕은 <a href="https://fonts.google.com/earlyaccess">Google Font Early Access</a>에서 찾을 수 있다.

## 2 . 서버 폰트 로딩 방식

Google Font를 사용하기 위해 CDN 링크를 사용하는 방법은 간편한 방법이지만 로딩 속도가 느린 단점이 있다.   
여러 개의 폰트를 사용한다면 로딩에 더욱 시간이 걸릴 것이다. 또한 CDN 링크를 제공하지 않는 폰트는 사용할 방법이 없다.   
이러한 단점을 보완한 방법이 서버 폰트 로딩 방식이다.

@font-face 규칙으로 폰트를 등록하고 font-family 프로퍼티로 폰트를 선택하여 사용할 수 있다.

```
@font-face {
  font-family: myFontName;
  src: url("myFont.woff");
}

* { font-family: myFontName, sans-serif; }
```

폰트 파일을 서버에 두고 요청이 오면 클라이언트로 전송하는 방식이다. 하지만 문제는 여전히 존재한다.    
브라우저에 따라 지원하는 폰트 파일 형식이 다르다는 문제가 있다.

영문과 한글을 혼용하는 경우 먼저 영문 폰트, 그 다음 한글 폰트를 지정하여야 한다. 한글 폰트부터 지정하면 영문에도 한글 폰트가 지정된다.
