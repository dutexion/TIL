# 레이아웃

이전에는 table을 사용하여 layout을 만들기도 하였으나 html과 css의 본연의 취지와도    
맞지 않을 뿐더러 반응형 웹 페이지 작성이 곤란하며 코드의 양 또한 많아져 현재는 거의 사용하지 않는다.   
모던한 웹 페이지는 style과 layout을 담당하는 CSS를 사용하여 layout을 구성하는 것이 바람직하다.

layout의 핵심은 블록 레벨 요소들을 원하는 위치에 배열하는 것이다.

모바일 사용자가 데스크탑 사용자보다 많은 상황을 감안하여 화면의 크기에 따라 적절히 화면 구성을   
변화시키는 반응형 웹 디자인(Responsive Web Design) 또한 모던 웹 사이트의 필수 사항이 되었다.

CSS를 사용하여 layout을 구성할 때에 자주 사용되는 핵심 기술은 float이다.

layout이란 웹사이트를 구성하는 요소들을 배치할 공간을 분할하고 정렬하는 것이다.   
공간을 분할할 때는 먼저 행을 구분한 후, 행 내부 요소를 분리하는 것이 일반적이다.

## 1 . Header & Navigation Bar

대부분의 웹사이트는 Navigation Bar를 가지고 있다. Navigation Bar는 웹사이트의 필수 구성 요소라고 할 수 있을 것이다.

Navigation Bar는 기본적으로 링크들의 리스트이다. 따라서 ul, li tag를 이용하여 작성하는 것이 일반적이다.   

![image](https://user-images.githubusercontent.com/128302413/235348942-7d463101-ea72-4fd2-ba37-69af38ed8a9b.png)

헤더에는 웹사이트의 로고 이미지, 링크를 넣는것이 일반적이다.

위 이미지를 예로 들면 이미지와 ul태그를 작성하여 ul 태그는 float 프로퍼티 값을 right로 해주어 오른쪽에 정렬했다.   
li 태그에 margin 값을 주어 간격을 주었다.    
이미지에도 margin 값을 주어 화면의 끝에서 약간 떨어뜨린 모습이다.    
헤더 자체에도 widht와 box-shadow를 적용하여 영역을 구분지었다.

## 2 . Section & Aside

콘텐츠의 영역을 Section, 콘텐츠에 대한 Navigation item이나 부가 정보 영역을 Aside라 한다.    
Section 영역은 다시 article 영역으로 구분할 수 있다.   
이 두개의 영역은 float 프로퍼티를 사용하여 수평 정렬하는 것이 일반적이다.    
header 요소 뒤에 aside, section, article을 포함하는 content-wrap 요소를 정의한다.

![image](https://user-images.githubusercontent.com/128302413/235351756-5d6de415-ffda-499b-81b4-b2108bc956ea.png)

aside는 왼쪽에 있는 공간이다. position을 fixed 값으로 정하여, 화면이 내려가도 옆에 고정되어 있다.   
section은 오른쪽에 있는 본문 공간이다. 이 section은 다시 article로 나뉜다.   
section의 float 값을 right로 하여 오른쪽 정렬을 하고, margin 값을 주어 aside 요소와 거리를 만들었다.    
article 끼리도 margin 값을 주어 거리를 벌렸다.

추가적으로 **fixed로 고정해둔 공간에 top과 bottom을 0으로 하면 공간의 끝이 화면 위 아래에 닿을 수 있게 한다.**

## 3 . footer

content-wrap 영역 다음에 footer를 배치한다.   
footer도 고정되어 있을 필요가 있지만 본문을 가리는 것은 곤란하다.    
따라서 fixed 프로퍼티를 설정해서는 안된다. fixed 프로퍼티는 스크롤이 되어도 언제나 그자리를 고수하기 때문이다.    
footer는 absolute 프로퍼티를 설정한다. absolute를 사용하면 다른 요소가 먼저 위치를 점유하고    
있어도 뒤로 밀리지 않고 덮어쓰게 된다. (이런 특성을 부유 또는 부유 객체라 한다)

![image](https://user-images.githubusercontent.com/128302413/235352019-a154a114-1fc9-4c11-a3fa-e1c997015848.png)

위에 이미지에서 footer영역이 content-wrap 영역을 침범하지 않았는데   
아래에 코드를 작성하여 구현할 수 있다.
```
#content-wrap:after {
      content: "";
      display: block;
      clear: both;
    }
```
