# 요소의 위치 정의

## 1 . position 프로퍼티

position 프로퍼티는 요소의 위치를 정의한다.    
top, bottom, left, right 프로퍼티와 함께 사용하여 위치를 지정한다.

### 1.1 . static (기본위치)

static은 position 프로퍼티의 기본값으로 position 프로퍼티를 지정하지 않았을 때와 같다.   
기본적인 요소의 배치 순서에 따라 위에서 아래로, 왼쪽에서 오른쪽으로 순서에 따라 배치되며    
부모 요소 내에 자식 요소는 부모 요소의 위치를 기준으로 배치된다.   
기본적으로 이 값을 지정할 일은 없지만 이미 설정된 position을 무력화하기 위해 사용될 수 있다.   
좌표 프로퍼티(top, bottom, left, right)를 같이 사용할 수 없으며 사용할 경우에는 무시된다.

### 1.2 . relative (상대위치)

기본 위치(static으로 지정되었을 때의 위치)를 기준으로 좌표 프로퍼티(top, bottom, left, right)를 사용하여 위치를 이동시킨다.    
static을 선언한 요소와 relative를 선언한 요소의 차이점은 좌표 프로퍼티의 동작 여부뿐이며 그외는 동일하게 동작한다.

### 1.3 . absolute (절대위치)

부모 요소 또는 가장 가까이 있는 조상 요소(static 제외)를 기준으로 좌표 프로퍼티(top, bottom, left, right)만큼 이동한다.   
즉, relative, absolute, fixed 프로퍼티가 선언되어 있는 부모 또는 조상 요소를 기준으로 위치가 결정된다.    
다른 요소가 먼저 위치를 점유하고 있어도 **뒤로 밀리지 않고 덮어쓰게 된다**. ( _이런 특성을 부유 또는 부유 객체라 한다_ )    
**absolute 선언 시, block 레벨 요소의 width는 inline 요소와 같이 content에 맞게 변화되므로 적절한 width를 지정하여야 한다.**

relative 프로퍼티와 absolute 프로퍼티의 차이점
- relative 프로퍼티는 기본 위치를 기준으로 좌표 프로퍼티를 사용하여 위치를 이동시킨다. 따라서 무조건 _부모를 기준_으로 위치하게 된다.
- absolute 프로퍼티는 부모 요소에 static 이외의 position 프로퍼티가 지정되어 있을 경우에만 부모를 기준으로 위치하게 된다.    
  만일 부모 조상이 모두 static 프로퍼티인 경우, document body를 기준으로 위치하게 된다.

### 1.4 . fixed (고정위치)

부모 요소와 관계없이 브라우저의 viewport를 기준으로 좌표 프로퍼티를 사용하여 위치를 이동시킨다.    
스크롤이 되더라도 화면에서 사라지지 않고 항상 같은 곳에 위치한다.   
fixed 프로퍼티 선언 시, block 요소의 width는 inline 요소와 같이 content에 맞게 변화되므로 적절한 width를 지정하여야 한다.

## 2 . z-index 프로퍼티

z-index 프로퍼티에 큰 숫자값을 지정할수록 화면 전면에 출력된다.   
positon 프로퍼티가 static 이외인 요소에만 적용된다.

## 3 . overflow 프로퍼티

overflow 프로퍼티는 자식 요소가 부모 요소의 영역를 벗어났을 때 처리 방법을 정의한다.

> visible | 영역을 벗어난 부분을 표시한다. (기본값)   
> hidden | 영역을 벗어난 부분을 잘라내어 보이지 않게 한다.    
> scroll | 영역을 벗어난 부분이 없어도 스크롤 표시한다.(현재 대부분 브라우저는 auto과 동일하게 작동한다)    
> auto | 영역을 벗어난 부분이 있을때만 스크롤 표시한다.

특정 방향으로만 스크롤을 표시하고자 할 때는 overflow-x 또는 overflow-y 프로퍼티를 사용한다.
```
div { overflow-y: auto; }
```