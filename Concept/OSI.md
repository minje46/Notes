### Basic OS theories
***
## 1. OSI 7 layer
* OSI(Open System Interconnection Reference Model) explains computer network protocol design and communication with layer developed by ISO.
<br>(OSI 모형은 국제표준화기구(ISO)에서 개발한 모델로, 컴퓨터 네트워크 프로토콜 디자인과 통신을 계층으로 나누어 설명한 것이다.) 

>#### 7th layer - Application layer(응용계층)
* Application layer **provides application** to users and interacts with users directly.
<br>(응용프로그램은 사용자에게 보여지며 직접적으로 상호작용하는 사용자에게 가장 가까운 계층이다.)

>#### 6th layer - Presentation layer(표현계층)
* Simply to say, Presentation layer **represent data to application or network** such as encryption or decode. 
<br>(표현계층은 응용계층의 데이터 표현에서 독립적인 부분을 나타내며, 일반적으로 응용프로그램 형식을 준비 또는 네트워크 형식으로 변환하거나 네트워크 형식을 응용프로그램 형식으로 변환하는 것을 나타낸다. 쉽게 말해, 표현계층은 암호화와 복호화처럼 응용프로그램이나 네트워크를 위해 데이터를 표현 하는 것이다)

>#### 5th layer - Session layer(세션계층)
* Session layer **control and set up sessions** between two devices for example system response waiting time.
<br>(세션계층에서는 설정 및 조율의 작업을 처리하여 2대의 기기간의 대화에 필요한 세션을 만든다. 예를 들어 시스템의 응답 대기 기간.)

>#### 4th layer - Transport layer(전송계층)
* Transport layer **controls and set up data transportation** between final system and host with speed and destination and so on.
<br>(전송계층은 최종 시스템 및 호스트 간의 데이터 전송 조율을 담당하며, 보낼 데이터의 용량과 속도, 목적지 등을 처리한다. ex)TCP.)

>#### 3rd layer - Network layer(네트워크 계층)
* Network layer **controls and set up routing and sending packets through routher** effectively.
<br>(네트워크 계층에서는 라우터를 통한 라우팅을 비롯한 패킷 전달을 효율적으로 처리하도록 담당한다.)

>#### 2nd layer - Data link layer(데이터 링크 계층)
* Data link layer **provides data transportation between nodes** wihch are connected **directly** and **finds and modifies errors from physical layer.**
And there are two more sub layers in data link layer, one is MAC and another is LLC.
<br>(데이터 링크 계층은 직접 연결된 노드의 데이터 전송을 제공하며 물리 계층의 오류 수정을 처리한다. 이곳에는 MAC(매체 접근 제어)계층과 LLC(논리적 연결 제어)계층의 2개의 부계층이 추가적으로 존재한다. ex)switch가 2계층에서 작동된다.)

>#### 1st layer - Physical layer(물리계층)
* Physical layer **represents electronic or physical things of system.**
<br>(물리 계층은 시스템의 전기적, 물리적 표현을 나타낸다. ex)케이블의 연결 문제, 라우터 또는 스위치의 플러그 문제 등.)

**``` All(Application) - People(Presentation) - Seem(Session) - To(Transport) - Need(Network) - Data(Data link) - Processing(Physical) ``` is the method of memorize easily.**

## 2. Environment variables(환경변수)
* Environment variables are **dynamic values** that process could **effect to computer's working.** 
<br>(환경변수는 process가 컴퓨터에서 동작하는 방식에 영향을 미치는 동적인 값들을 말한다.)

* Path is kind of envrionment variables which **includes locations of specific files** where it is saved. And it makes execute file in every where.
<br>(Path(경로)는 특정한 파일이 있는 위치를 나타내는 주소인 환경변수이다. 이 변수는 어떤 directory에서도 실행할 수 있는 파일들을 ㅊ찾기 위한 경로를 미리 설정해두는 데 사용된다.)

* Additionally, it works for **avoiding executing uncorrect file** has same name with others and path is stored not as file but **in memory of envrionment variables.**
<br>(또한, 같은 이름을 가진 다른 파일이 잘못 실행되는 위험을 방지하기 위해서 사용되기도 하며, path는 파일이 아닌 환경변수 라는 메모리에 저장된다.)


<br></br><br></br><br></br>
