------

## What is Rest API?

- **REST API is developed for providing usability of web architecture's advantages.**
  <br>(REST API는 웹 아키텍쳐의 우수성을 최대한 활용할 수 있도록 만들어진 API이다.)

  > - API(Application Programming Interface)
  >   → API는 다른 applications에서 OS와 programming language가 제공하는 기능 등을 사용하고 제어할 수 있게 해주는 interface이다.   
  >
  >   Ex) Daum map의 지도 data를 활용하기 위해 API를 사용하여 Follow를 제작.

  > - REST(REpresentational State Transfer)
  >   → Rest란, Web resources(image, video, DB)에 고유한 URI를 부여하고, HTTP URI로 표현된 resource에 대한 행위를 HTTP Method로 정의한다.
  >
  >   → Rest는 resource, method, representations로 구성되어 있다.
  >
  >   > - Resource(자원)
  >   >
  >   >   → Rest에서 가장 중요한 개념은 바로 유일한 ID를 가지는 resource가 server에 존재하고, client는 각 resource의 상태를 조작 및 조회를 하기 위해 요청을 보낸다. 
  >   >
  >   >   → Resource라는 것은 처리되는 대상으로 JSON, XML 문서, image 등이 될 수 있으며, 이러한 resource는 URI를 통해 위치가 지정된다.
  >   >
  >   > - Method (verb, 행위)
  >   >   → Method는 resource를 조작할 수 있는 기능을 뜻하며, client는 URI를 이용하여 resource를 지정하고 해당 resource를 조작 및 조회를 하기 위해 method를 사용한다.
  >   >
  >   >   → HTTP 에서는 `GET, POST, PUT, DELETE` 등의 method가 존재한다.
  >   >
  >   >   → `GET https://github.com/minje46` 에서 Get은 method, URI는 resource이다.
  >   >
  >   > - Representation (표현)
  >   >
  >   >   → Client가 server로 request를 했을 때, Server가 response 해주는 resource의 형태를 representation이라 한다. Rest에서 하나의 resource가 여러 형태의 representation으로 나타내어 질 수 있다.
  >   >
  >   >   → XML, JSON, YMAL 처럼 다양한 type과 언어로 구현될 수 있기 때문에, 해석할 수 있도록 representation이 필요.
  >
  >   → Application의 복잡도가 증가하면서, application의 분리 및 통합이 주요해졌기에 Rest API의 필요성이 증대.
  >
  >   > - Uniform 
  >   >
  >   >   → HTTP와 mobile 등 몇 개의 platform에 제한받지 않고, 특정 언어나 기술에 종속되지 않고 모든 platform에 사용이 가능했다.
  >   >
  >   > - Stateless
  >   >
  >   >   → HTTP는 stateless protocol이므로, rest역시 stateless 특성을 가진다. Rest API를 통해 request들어오는 것을 http session과 같은 context 저장소에 저장하지 않고, server에 들어오는 요청만을 단순 response 해주는 시스템이다.
  >   >
  >   >   (Session 등 data 저장을 고려하지 않아도 되어 구현이 단순.)
  >   >
  >   > - Cacheable
  >   >   → HTTP 기존의 web 표준을 사용하기 때문에 기존의 인프라와 특징 (HTTP protocol 기반의 로드밸런서(mod_proxy), SSL, caching 기능)들을 활용할 수 있다.



- The differences of resources location.

  > - IRI (International Resource Identifier)
  >
  >   → While URI supports only ASCI encoding, IRI fully supports international characters. In practice, UTF-8 is the most popular encoding used for IRI.
  >
  >   (URI는 오직 ASCII encoding을 지원하는 반면, IRI는 ASCII를 포함하여 모든 문자 규격을 지원하되 주로 UTF-8을 통해 전세계의 문자셋을 지원한다.)
  >
  > <img width="293" alt="uri" src="https://user-images.githubusercontent.com/23169707/45594134-76119500-b9d0-11e8-8d43-f2353a75ca6b.png">
  >
  > - URI (Uniform Resource Identifier)
  >
  >   → URI is a string of charactrrs used to identify a name or abstract or physical web resource. 
  >
  >   (URI는 인터넷 상의 resource를 유일하게 identify하기 위한 규약으로, URL+URN의 superset 개념.)
  >
  >   > → 일반적으로 URL과 혼동되는 개념이지만, URL과 달리 특정 resource에 대해 절대적 경로 뿐만 아니라, unique한 이름을 통해 상대적 경로를 가지고 구분할 수도 있다.
  >
  > - URL (Unifor Resource Locator)
  >
  >   → URL is a specific character string that constitutes a reference to a resource. 
  >
  >   (URL은 resource의 location에 대한 정대경로 값을 지닌 문자열.)
  >
  > - URN (Uniform Resource Name)
  >
  >   → URN is persistent and location-independent identifiers for resources.
  >
  >   (URN은 지속적이면서 위치에 독립적인 자원을 가르키기 위한 unique한 identifier.)
  >
  >   > - **URL** vs. **URN**
  >   >
  >   >   Ex) 성남 리치카페에 사는 David(1994.06.21)이 다른 곳으로 이사를 가고 Taiju(1996.04.17)가 이사를 왔을 경우.
  >   >
  >   >   → 성남 리치카페 라는 주소(URL) / David(1994.06.21) 라는 주민등록 번호를 가진 사람(URN)
  >   >
  >   >   → 리치카페에 사는 사람은 Taiju로 바뀌었지만, 리치카페라는 주소 (URL) 값은 동일하고, David과 Taiju의 주소(URL)은 변경되었지만, 주민등록 번호(URN)은 동일하다.
  >   >
  >   >   → 이 때, Taiju가 유일하게 결정지어지는 조건(URI)는 1996.04.17(URN)라는 주민등록을 가진 사람 or 리치카페(URL)에 사는 사람.



