# 수평/수직 중앙 정렬

## 1 . 수평 정렬(Horizontal Align)

### 1.1 inline/inline-block 요소

정렬 대상 요소(텍스트 또는 링크 등의 inline 레벨 요소 또는 inline-block 레벨 요소)의 부모 요소에 text-align: center;를 지정한다.

### 1.2 . block 요소

정렬 대상 요소에 너비를 명시적으로 지정하고 margin-right와 margin-left 프로퍼티에 auto를 지정한다.    
정렬 대상 요소에 너비를 명시적으로 지정하지 않으면 너비는 full width가 되므로 중앙 정렬이 필요없다.

### 1.3 복수의 block 요소

복수의 block 요소는 기본적으로 수직 정렬된다.    
이것을 수평정렬하기 위해서는 정렬 대상 block 요소를 inline-block 요소로 변경한 후 부모 요소에 text-align: center;를 지정한다.    
정렬 대상 요소에 width를 지정하지 않으면 콘텐츠에 너비에 맞추어 너비가 결정되므로 명시적으로 너비를 지정한다.

### 1.4 Flexbox

flexbox를 사용할 수도 있다. 정렬 대상의 부모 요소에 아래의 룰셋을 선언한다.
```
.flex-center {
  display: flex;
  justify-content: center;
}
```

## 2 . 수직 정렬(Vertical Align)

### 2.1 inline/inline-block 요소

**2.1.1 Single line**

정렬 대상의 부모 요소에 padding-top과 padding-bottom 프로퍼티값을 동일하게 적용한다.   
padding을 사용할 수 없는 경우, 요소의 height와 line-height 프로퍼티값을 동일하게 적용한다.   
단 이 방법은 행간이 지나치게 넓어지거나 Click Dead Zone 이슈가 발생하는 등 여러 줄의 텍스트에는 사용할 수 없다.

**2.1.2 Multiple lines**

여러 줄의 텍스트의 경우, padding-top과 padding-bottom 프로퍼티값을 동일하게 적용하는 방법도 가능하다.   
또 다른 방법으로 vertical-align 프로퍼티를 사용한 방법도 가능하다. 이 방법은 table 속성을 사용하여야 한다.

**2.1.3 Flexbox**

vertical-align 프로퍼티를 사용하는 방법은 table 프로퍼티를 사용하여야 하므로 번거로울 수 있다.    
좀 더 간단한 방법은 flexbox를 사용하는 것이다.

### 2.2 block 요소

**2.2.1 요소의 높이가 고정되어 있는 경우**

부모 요소를 기준으로 절대 위치를 지정한다.

**2.2.2 요소의 높이가 불확정 상태의 경우**

부모 요소를 기준으로 절대 위치를 지정한다.

**2.2.3 Flexbox**

부모 요소에 Flexbox layout을 지정한다.

## 3 . 수평/수직 정렬(Horizontal & Vertical Align)

요소의 너비와 높이가 고정되어 있는 경우, 요소의 너비와 높이가 불확정 상태의 경우 모두 사용 가능한 방법이다

```
.parent {
  position: relative;
}
.child {
  position: absolute;
  top: 50%;
  left: 50%;
  /*요소의 높이/너비의 반(50%)만큼 위/왼쪽으로 이동*/
  transform: translate(-50%, -50%);
}
```
