# DNS란?

DNS란 인터넷의 전화번호부와 같다.    
사람은 naver.com, google.com과 같이 도메인 이름을 통해서 접속한다.  
웹 브라우저는 IP주소를 통해서 상호작용하는데,    
DNS는 웹 브라우저가 인터넷 리소스를 로드할 수 있도록 도메인 이름을 IP 주소로 변환한다.

## 웹페이지 로드와 관련된 4개의 DNS서버들

### 1 . DNS 리커서
리커서는 도서관에서 특정 책을 찾으라는 사서라고 생각할 수 있다.   
웹 브라우저와 같은 앱을 통해 클라이언트 시스템에서 쿼리를 수신하도록 설계된 서버이다.

### 2 . 루트 네임서버
루트서버는 사람이 읽을 수 있는 호스트 이름을 IP주소로 변환하는 첫 번째 단계이다.   
서로 다른 책꽂이를 가리키는 도서관의 색인이라고 생각할 수 있다.    
일반적으로 좀 더 구체적인 위치에 대한 참조 역할을 한다.

### 3 . TLD 네임서버
Top Level Domain server, TLD는 도서관의 특정 책꽂이라고 생각할 수 있다.   
이 네임서버는 특정 IP주소 검색의 다음단계이며 호스트 이름의 마지막 부분을 호스팅한다.   
naver.com에서 TLD 서버는 com이다.

### 4 . 네임서버
네임서버는 영문 도메인을 네 자리의 IP주소로 바꿔주는 서버를 말한다.   
특정 이름을 해당 정의로 변환 할 수 있는 책꽂이의 사전으로 생각할 수 있다.   
인터넷에 도메인을 입력할 때 도메인 등록 시 지정된 네임서버를 통해 해당 도메인과 연결된 IP주소를 확인한다.