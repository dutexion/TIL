# 박스 모델

모든 HTML 요소는 Box 형태의 영역을 가지고 있다. Box 형태란 물론 사각형을 의미한다.

이 Box는 콘텐트(Content), 패딩(Padding), 테두리(Border), 마진(Margin)로 구성된다.
![image](https://user-images.githubusercontent.com/128302413/230049042-d4c6038d-f5a5-4cbe-8926-befd69bfbe34.png)

Content | 요소의 텍스트나 이미지 등의 실제 내용이 위치하는 영역이다.

Padding | 테두리 안쪽에 위치하는 요소의 내부 여백 영역이다. 요소에 적용된 배경의 컬러, 이미지는 패딩 영역까지 적용된다.

Border | 테두리 영역으로 padding 바깥을 두른다.

Margin | 테두리 바깥에 위치하는 요소의 외부 여백 영역이다. margin 값은 마진 영역의 두께를 의미한다. 기본적으로 투명하며 배경색을 지정할 수 없다.

## 1 . width / height 프로퍼티
width와 height 프로퍼티는 요소의 너비와 높이를 지정하기 위해 사용된다.

이때 지정되는 요소의 너비와 높이는 콘텐츠 영역을 대상으로 한다.

만일 width와 height로 지정한 콘텐츠 영역보다 실제 콘텐츠가 크면 콘텐츠 영역을 넘치게 된다는 것에 유의하여야 한다.

## 2 . margin / padding 프로퍼티
margin / padding 프로퍼티는 요소의 4개 방향(top, right, left, bottom)에 대하여 지정이 가능하다.

-top, -right, -bottom, -left 4방향의 프로퍼티를 각각 지정하지 않고 margin, padding 1개의 프로퍼티만으로 4방향의 프로퍼티를 한번에 지정할 수 있다.

margin : 100px 40px 50px 60px; = 순서대로 위 왼쪽 오른쪽 아래를 지정한다.    
margin : 100px 40px 60px; = 순서대로 위 양쪽 아래를 지정한다.   
margin : 100px 40px; = 순서대로 위아래 양쪽을 지정한다.    
margin : 100px; = 순서대로 모든방향 지정한다.

margin 프로퍼티에 auto 키워드를 설정하면 해당 요소를 브라우저 중앙에 위치 시킬 수 있다.

요소 너비가 브라우저 너비보다 크면 가로 스크롤바가 만들어진다.   
이 문제를 해결하기 위해서 max-width 프로퍼티를 사용할 수 있다.

## 3 . border 프로퍼티

### 3.1 border-style
border-style 프로퍼티는 테두리 선의 스타일을 지정한다.    
border-style 모음 링크 : https://developer.mozilla.org/ko/docs/Web/CSS/border-style

### 3.2 border-width
border-width 프로퍼티는 테두리의 두께를 지정한다.

프로퍼티 값의 갯수에 따라 4개 방향(top, right, left, bottom)에 대하여 지정이 가능하다.

**border-width 프로퍼티는 border-style과 함께 사용하지 않으면 적용되지 않는다.**

border-width 정리 링크 : https://developer.mozilla.org/ko/docs/Web/CSS/border-width

### 3.3 . border-color
border-color 프로퍼티는 테두리의 색상을 지정한다.

프로퍼티 값의 갯수에 따라 4개 방향(top, right, left, bottom)에 대하여 지정이 가능하다.

**border-color 프로퍼티는 border-style과 함께 사용하지 않으면 적용되지 않는다.**

border-color 정리 링크 : https://developer.mozilla.org/ko/docs/Web/CSS/border-color

### 3.4 border-radius
border-radius 프로퍼티는 테두리 모서리를 둥글게 표현하도록 지정한다.

프로퍼티 값은 길이를 나타내는 단위(px, em 등)와 %를 사용한다.

각각의 모서리에 border-radius 프로퍼티를 개별적으로 지정할 수도 있고 4개의 모서리를 short-hand로 한번에 지정할 수도 있다.

하나 혹은 두개의 반지름을 설정하여 각각의 모서리 굴곡을 설정할 수 있기 때문에 원 혹은 타원의 모양으로 정의가 가능하다.

border-radius 정리 링크 : https://developer.mozilla.org/en-US/docs/Web/CSS/border-radius

### 3.5 border
border 프로퍼티는 border-width, border-style, border-color를 한번에 설정하기 위한 shorthand 프로퍼티이다.

border 정리 링크 : https://developer.mozilla.org/en-US/docs/Web/CSS/border

## 4 . box-sizing 프로퍼티
box-sizing 프로퍼티는 width, height 프로퍼티의 대상 영역을 변경할 수 있다.

box-sizing 프로퍼티의 기본값은 content-box이다.

이는 width, height 프로퍼티의 대상 영역이 content 영역을 의미한다. box-sizing 프로퍼티의 값을 border-box로 지정하면    
마진을 제외한 박스 모델 전체를 width, height 프로퍼티의 대상 영역으로 지정할 수 있어서 CSS Layout을 직관적으로 사용할 수 있게 한다.

content-box | width, height 프로퍼티 값은 content 영역을 의미한다. (기본값)

border-box | width, height 프로퍼티 값은 content 영역, padding, border가 포함된 값을 의미한다.

box-sizing 프로퍼티는 상속되지 않는다. 따라서 box-sizing 프로퍼티를 사용하도록 초기화하려면 아래와 같이 정의한다.
