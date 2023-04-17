# HTTP란?
텍스트 기반의 통신 규약으로 인터넷에서 데이터를 주고받을 수 있는 프로토콜이다.    
이렇게 규약을 정해두었기 때문에 모든 프로그램이 이 규약에 맞춰 개발해서 서로 정보를 교환할 수 있게 되었다.

# HTTP의 동작
클라이언트가 브라우저를 통해서 어떠한 서비스를 url을 통하거나 다른 것을 통해서 요청을 하면    
서버에서는 해당 요청사항에 맞는 결과를 찾아서 사용자에게 응답하는 형태로 동작한다.    

HTML 문서만이 HTTP 통신을 위한 유일한 정보 문서는 아니다.   
plain text로 부터 JSON 데이터 및 XML과 같은 형태의 정보도 주고 받을 수 있으며,    
보통은 클라이언트가 어떤 정보를 어떤 형태로 받고 싶은지 명시해주는 경우가 많다.

## request ( 요청 )
클라이언트가 서버에게 연락하는 것을 요청이라고 하며 요청을 보낼때는 요청에 대한 정보를 담아 서버로 보낸다.

### request method ( 요청의 종류 )
- GET : 자료를 요청할 때 사용
- POST : 자료의 생성을 요청할 때 사용
- PUT : 자료의 수정을 요청할 때 사용
- DELETE : 자료의 삭제를 요청할 때 사용

## response ( 응답 )
서버가 요청에 대한 답변을 클라이언트에게 보내는 것을 응답이라고 한다.