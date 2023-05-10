# 포인터 이벤트

요소에 부여된 이벤트를 제거하거나 다시 활성화 시켜야하는 경우가 생길 수 있다.    
pointer-events 는 HTML 요소들의 마우스/터치 이벤트들(CSS hover/active, JS click/tap, 커서 드래그등)의 응답을 조정할 수 있는 속성이다.

pointer-events 속성은 11개의 속성값을 가지지만 3개를 제외하고는 모두 SVG에서 사용하도록 예약되어 있다. 아래의 3개의 속성값은 HTML 요소들에서 사용 가능하다.

- none : HTML 요소에 정의된 클릭, 상태(hover,active등), 커서 옵션들이 비활성화한다.
- auto : 비활성화된 이벤트를 다시 기본 기능을 하도록 되돌린다.
- inherit : 부모 요소로부터 pointer-events 값을 상속받는다.
