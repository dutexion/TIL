# 이미지의 표현과 동영상, 음악 등 멀티미디어를 지원하는 태그

- ## 1 . 이미지

> 웹페이지에 이미지를 삽입하는 경우 img 태그를 사용한다.
> > attribute | Description
> > 
> > src | 이미지 파일 경로
> > 
> > alt | 이미지 파일이 없을 경우 표시되는 문장
> > 
> > width | 이미지의 너비 (CSS에서 지정하는 것이 일반적)
> > 
> > height | 이미지의 높이 (CSS에서 지정하는 것이 일반적)
> > 
> > ex )
```
<body>
    <img src="assets/images/doug.jpg" alt="doug" width="100">
    <img src="assets/images/wrongname.gif" alt="이미지가 없습니다.">
</body>
```

- ## 2 . 미디어

- ### 2.1 . 오디오

> audio 태그는 HTML5에서 새로 추가된 태그이다.
>
> IE8 이하에서는 사용할 수 없다.
> > attribute | Description
> > 
> > src | 음악 파일 경로
> > 
> > preload | 재생 전에 음악 파일을 모두 불러올 것인지 지정
> > 
> > autoplay | 음악 파일을 자동의 재생 개시할 것인지 지정
> > 
> > loop | 음악을 반복할 것인지 지정
> > 
> > controls | 음악 재생 도구를 표시할 것인지 지정. 재생 도구의 외관은 브라우저마다 차이가 있다.
> >
> > ex )
```
<body>
    <audio src="assets/audio/Kalimba.mp3" controls></audio>
</body>
```
> 웹브라우저 마다 지원하는 음악 파일 형식이 다르다. ( _파일 형식에 따라 재생되지 않는 브라우저가 존재한다는 뜻이다._ )
> 
> source 태그를 사용하여 파일 형식의 차이 문제를 해결 할 수 있다. ( _type 속성은 생략 가능하다._ )
> > Browser | MP3 | Wav | Ogg
> > 
> > Internet | Explorer | YES | NO | NO
> > 
> > Chrome | YES | YES | YES
> > 
> > Firefox | YES(24~) | YES | YES
> > 
> > Safari | YES | YES | NO
> > 
> > Opera | YES(25~) | YES | YES
> >
> > ex )
```
<audio controls>
    <source src="assets/audio/Kalimba.mp3" type="audio/mpeg">
    <source src="assets/audio/Kalimba.ogg" type="audio/ogg">
</audio>
```

- ### 2.2 . 비디오

> audio 태그는 HTML5에서 새로 추가된 태그이다.
>
> IE8 이하에서는 사용할 수 없다.
> > attribute | Description
> > 
> > src | 동영상 파일 경로
> > 
> > poster | 동영상 준비 중에 표시될 이미지 파일 경로
> > 
> > preload | 재생 전에 동영상 파일을 모두 불러올 것인지 지정
> > 
> > autoplay | 동영상 파일을 자동의 재생 개시할 것인지 지정
> > 
> > loop | 동영상을 반복할 것인지 지정
> > 
> > controls | 동영상 재생 도구를 표시할 것인지 지정. ( _재생 도구의 외관은 브라우저마다 차이가 있다._ )
> > 
> > width | 동영상의 너비를 지정
> > 
> > height | 동영상의 높이를 지정
> audio 태그와 마찬가지로 파일 형식의 차이 문제가 발생할 수 있다.
> 
> source 태그를 사용하여 형식 차이 문제를 해결한다. ( _type 속성은 생략 가능하다._ )
> > Browser | MP4 | WebM | Ogv
> > 
> > Internet | Explorer | YES | NO | NO
> > 
> > Chrome | YES | YES | YES
> > 
> > Firefox | YES(21~) | YES | YES
> > 
> > Safari | YES | NO | NO
> > 
> > Opera | YES(25~) | YES | YES
> > 
> > ex )
```
<video width="640" height="360" controls>
    <source src="assets/video/wildlife.mp4" type="video/mp4">
    <source src="assets/video/wildlife.webm" type="video/webm">
</video>
```
