# 폰트와 텍스트

폰트 및 텍스트 관련 프로퍼티는 폰트의 크기, 폰트의 지정, 폰트의 스타일, 텍스트 정렬 등을 정의한다.

## 1 . font-size 프로퍼티

텍스트의 크기를 정의한다.

## 2 . font-family 프로퍼티

폰트를 지정한다. 컴퓨터에 해당 폰트가 설치되어 있지 않으면 적용되지 않는다.   
폰트는 여러 개를 동시에 지정이 가능하다.   
**첫번째 지정한 폰트가 클라이언트 컴퓨터에 설치되어 있지 않은 경우, 다음에 지정된 폰트를 적용한다.**   
따라서 마지막에 지정하는 폰트는 대부분의 OS에 기본적으로 설치되어 있는    
generic-family 폰트(Serif, Sans-serif, Mono space)를 지정하는 것이 일반적이다.   
( _폰트명은 따옴표로 감싸주며 폰트명이 한단어인 경우는 따옴표로 감싸주지 않아도 된다._ )

## 3 . font-style / font-weight 프로퍼티

font-style 프로퍼티는 *이탤릭체* 의 지정,    
font-weight 프로퍼티는 폰트 *굵기 지정* 에 사용된다.

## 4 . font Shorthand

style, variant, weight, size, height, family를 한번에 정의하기 위한 shorthand syntax이다.
```
font : font-style(이탤릭체) font-variant(대소문자 변경) font-weight(굵기) font-size(크기) line-height(문단 간격) font-family(폰트)
```

## 5 .  line-height 프로퍼티

텍스트의 높이를 지정한다. 텍스트 수직 정렬에도 응용되어 사용된다.

## 6 .letter-spacing 프로퍼티

글자 사이의 간격을 지정한다.

## 7 . text-align 프로퍼티

텍스트의 수평 정렬을 정의한다.

( _inline 요소는 width 프로퍼티가 없으므로 중앙 개념이 존재하지 않는다. inline 요소에 display: block;을 지정한다면 중앙 정렬이 가능할 것이다._ )

## 8 . text-decoration 프로퍼티

텍스트에 underline, overline, line-through를 추가할 수 있다.

## 9 . white-space 프로퍼티

white space는 공백, 들여쓰기, 줄바꿈을 의미한다.   
html은 기본적으로 연속된 공백, 들여쓰기는 1번만 실행되며 줄바꿈은 무시된다.   
또한 텍스트는 부모의 가로 영역을 벗어나지 않고 자동 줄바꿈(wrap)된다.    
white-space 프로퍼티는 이러한 기본 동작을 제어하기 위한 프로퍼티이다.

> 프로퍼티값 | line break | space/tab | wrapping(자동줄바꿈)    
> normal | 무시 | 1번만 반영 | O    
> nowrap | 무시 | 1번만 반영 | X    
> pre | 반영 | 그대로 반영 | X   
> pre-wrap | 반영 | 그대로 반영 | O    
> pre-line | 반영 | 1번만 반영 | O

## 10 . text-overflow 프로퍼티

부모 영역을 벗어난 wrapping(자동줄바꿈)이 되지 않은 텍스트의 처리 방법을 정의한다.

이 프로퍼티를 사용하기 위해서는 아래의 조건이 필요하다.
- width 프로퍼티가 지정되어 있어야 한다. 이를 위해 필요할 경우 block 레벨 요소로 변경하여야 한다.   
- 자동 줄바꿈을 방지하려면 white-space 프로퍼티를 nowrap으로 설정한다.    
- overflow 프로퍼티에 반드시 “visible” 이외의 값이 지정되어 있어야 한다.

text-overflow 프로퍼티에 설정할 수 있는 프로퍼티 값은 아래와 같다.

> 프로퍼티값 | Description   
> clip | 영역을 벗어난 텍스트를 표시하지 않는다. (기본값)   
> ellipsis | 영역을 벗어난 텍스트를 잘라내어 보이지 않게 하고 말줄임표(…)를 표시한다.

## 11 . word-wrap 프로퍼티
한 단어의 길이가 길어서 부모 영역을 벗어난 텍스트의 처리 방법을 정의한다.    
link 등을 표기할 때(e.g. https://poiemaweb.com/css3-font-text) 그 길이가 매우 길어지는데   
이 프로퍼티를 사용하지 않으면 부모 영역을 넘어가게 된다.

## 12 . word-break 프로퍼티

한 단어의 길이가 길어서 부모 영역을 벗어난 텍스트의 처리 방법을 정의한다.    
word-wrap 프로퍼티는 단어를 어느 정도는 고려하여 개행하지만(.,- 등을 고려한다)    
word-break: break-all;는 단어를 고려하지 않고 부모 영역에 맞추어 강제 개행한다.
