# image 요소 아래에 패딩된 여분의 공간 제거하기

컨테이너 요소로 img 요소를 래핑하면 img 요소 아래에 의도하지 않은 여분의 공간이 패딩된다.

image 요소는 inline 요소이다. 다시 말해 image 요소는 텍스트로 취급된다.   
브라우저는 요소 내의 텍스트를 렌더링할 때 나름의 방식이 있는데   
이를 이해하려면 타이포그래피(Typography)에 대해 어느 정도 이해해야 한다.

image 요소는 inline 요소이며 텍스트로 취급된다고 하였다.   
이것은 image 요소 또한 위 그림과 같이 타이포그래피를 따른다는 것을 의미한다. 정말 그런지 텍스트와 image 요소를 같이 배치해 확인해보자.
![image](https://user-images.githubusercontent.com/128302413/235548727-49e67edf-2525-4d2c-9549-0242cd77a6e1.png)

위 그림과 같이 image 요소에도 디센더가 적용되어 여분의 공간이 발생한다.   
원인을 알았으니 이 문제에 대한 해결 방법에 대해 생각해보자.    
첫번째, image 요소를 블록 요소로 전환하면 더 이상 텍스트로 취급되지 않는다.

```
img {
      display: block;
    }
```

하지만 이 방법은 image 요소를 블록 요소로 전환할 수 없는 레이아웃에서는 사용할 수 없다.   
두번째, inline 요소에 사용할 수 있는 vertical-align 프로퍼티를 사용하는 방법이 있다.    
vertical-align 프로퍼티의 기본값은 baseline인데 이를 변경하여 이미지 표시 위치를 조정하는 것이다.

```
img {
      vertical-align: bottom;
    }
```
