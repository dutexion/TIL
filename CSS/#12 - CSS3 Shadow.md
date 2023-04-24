# 그림자

텍스트나 요소에 그림자 효과를 부여하기 위한 프로퍼티를 선언한다.

## 1 . text-shadow

텍스트에 그림자 효과를 부여하는 프로퍼티이다.

형식 ) 
```
선택자 { text-shadow: Horizontal-offset Vertical-offset Blur-Radius Shadow-Color; }
```

| 프로퍼티 값 | 단위 | 설명 | 생략 |
| --- | --- | --- | --- |
| Horizontal-offset | px | 그림자를 텍스트의 오른쪽으로 지정값만큼 이동시킨다 | 불가능 |	 
| Vertical-offset | px | 그림자를 텍스트의 아래로 지정값만큼 이동시킨다 | 불가능 |
| Blur-Radius | px | 그림자의 흐림정도를 지정한다. 지정값만큼 그림자가 커지고 흐려진다. | 가능 |
| Shadow-Color | color | 그림자의 색상을 지정한다 | 가능 |

ex )
```
h1 { text-shadow: 5px 5px 5px red } /* 여러개의 값을 ,로 구분지어 지정해 줄 수 있다 */
```

## 2 . box-shadow

요소에 그림자 효과를 부여하는 프로퍼티이다.

형식 )
```
선택자 { box-shadow: Inset Horizontal-offset Vertical-offset Blur-Radius Spread Shadow-Color; }
```

| 프로퍼티 값 | 단위 | 설명 | 생략 |
| --- | --- | --- | --- |
| Inset | inset | inset 키워드를 지정하면 그림자가 요소 안쪽에 위치한다 | 가능 |
| Horizontal-offset | px | 그림자를 텍스트의 오른쪽으로 지정값만큼 이동시킨다 | 불가능 |
| Vertical-offset | px | 그림자를 텍스트의 아래로 지정값만큼 이동시킨다 | 불가능 |
| Blur-Radius | px | 그림자의 흐림정도를 지정한다. 지정값만큼 그림자가 커지고 흐려진다. (양수) | 가능 |
| Spread | px | 그림자를 더 크게 확장시킨다. (음수, 양수) | 가능| 
| Shadow-Color | color | 그림자의 색상을 지정한다 | 가능 |

ex )
```
div { box-shadow: inset 10px 10px 10px 10px blue; }
```
