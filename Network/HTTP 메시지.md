# HTTP 메시지

HTTP 메시지는 서버와 클라이언트 간에 데이터를 교환하는 방법이다.    
메시지에는 서버에서 작업을 트리거하기 위해 클라이언트가 보낸 요청과 서버의 응답인 두 가지 유형이 있다.

## HTTP 요청 메시지 형식

HTTP Request Message = Request Header + 빈 줄 + Rquest Body

- Header
> 첫 번째 줄    
> 
> 요청 메서드 + 요청 URL + HTTP 프로토콜 버전
>
> 두 번째 줄    
> 
> Header 정보들    
> 각 줄은 line feed와 carriage return으로 구분된다

- 빈 줄
> 요청에 대한 모든 메타 정보가 전송되었음을 알린다.

- Body
> POST, PUT의 경우에만 존재    
> 요청과 관련된 내용 ( HTML 폼 콘텐츠 등 )

## HTTP 응답 메시지 형식

HTTP Response Message = Response Header + 빈 줄 + Response Body

- Header
> 첫 번째 줄
>
> HTTP 프로토콜 버전 + 응답 코드 + 응답 메시지
>
> 두 번째 줄
>
> Header 정보들 / 날짜, 웹서버 이름, 웹서버 버전, 콘텐츠 타입, 콘텐츠 길이, 캐시 제어 방식 등   
> 각 줄은 line feed와 carriage return으로 구분된다

- 빈 줄
> 요청에 대한 모든 메타 정보가 전송되었음을 알린다.

- Body
> 실제 응답 리소스 데이터   
> 201, 204와 같은 상태 토드를 가진 응답에는 보통 body가 존재하지 않는다. 
