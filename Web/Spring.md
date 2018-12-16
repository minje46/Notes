# Framework

- **Framework is providing classes** as cooperated type **to reuse** in specific part of software and implementation.
  <br>(프레임워크란, 소프트웨어의 구체적인 부분에 해당하는 설계와 구현을 재사용이 가능하게끔 일련의 협업화된 형태로 클래스들을 제공하는 것.)

  > - Library
  >
  >   → **Library is set of code to reuse logic** or code which is used frequently.
  >
  >   (라이브러리란, 자주 사용되는 로직을 재사용하기 편리하도록 잘 정리한 일련의 코드들의 집합이다.)
  >
  >   Ex) 자동차에 비유하자면, Frame work는 자동차의 뼈대를 말하며 Library는 자동차의 기능인 바퀴 or 라이트 등을 말한다.
  >
  >   한 번 정해진 frame wrok는 변경이 불가능한데, 이는 SUV에 맞게 제작하고 있다가 중형차로 변경할 수 없기 때문이다.

- **Features.**

  > - Advantage
  >
  >   → Efficiency : Zero base로 모든것을 구현하는 것에 비하면 cost가 cheap하고 efficient하다.
  >
  >   → High quality : 이미 많은 개발자들이 사용해왔기 때문에, bug or error의 처리가 되어 있는 검증된 코드라고 볼 수 있다.
  >
  > - Disadvantage
  >
  >   → Learning : Frame work를 사용하기 위해서 code를 이해하고 습득해야 하는 시간이 소요된다.
  >
  >   → Limited : 이미 정해진 Frame work를 사용하는 것이기에, 정해진 틀을 벗어나는데 한계가 존재한다.



# Spring

* **Spring is light application frame work** to develop java enterprise easily based on open source.
  <br>(Spring은 자바 엔터프라이즈 개발을 편하게 해주는 오픈소스 경량급 애플리케이션 프레임워크이다.)

  > * Application frame work
  >
  >   > → Application frame work는 특정 계층이나, 기술, 업무 분야에 국한되지 않고 application의 전 영역을 포괄하는 범용적인 frame work를 말한다.
  >   >
  >   > `→ Generally, library와 frame work는 특정 업무 분야나 한 가지 기술에 특화된 목표를 가지고 만들어진다.`
  >   >
  >   > → Application frame work는 application 개발의 전 과정을 빠르고 편리하며 효율적으로 진행하는데 일차적인 목표를 둔다.
  >
  > * Lightness
  >
  >   > → Spring은 불필요하게 무겁지 않다.
  >   > `→Spring 이전의 EJB(Enterprise Java Beans)는 Enterprise 개발을 편리하게 하기위해 고급 기술을 사용하여 개발에 제한과 무겁다는 단점이 存`
  >   >
  >   > → Spring은 가장 단순한 서버 환경인 Tomcat에서도 개발이 가능하다.

* Spring provides **convienience** of development to **element the complexity.**

  <br>(Spring은 근본적인 부분에서 엔터프라이즈 개발의 복잡함을 제거하여 개발을 편하게 해주는 해결책을 제시한다.)

  > * Java enterprise 
  >
  >   → Java Enterprise(Java EE)란, 서버에서 동작하며 기업과 조직의 업무를 처리해주는 시스템을 말한다.
  >
  >   > → 기술적인 제약조건과 요구사항이 증가.
  >   >
  >   > → Java EE가 구현해야 하는 핵심기능인 business logic의 복잡함이 증가.

  `→ 편리한 application 개발이란, 개발자가 복잡하고 실수하기 쉬운 low level 기술에 많은 신경을 쓰지 않으면서도 applicatio의 core인 user requiremen, 즉 business logic을 빠르고 효과적으로 구현하는 것을 말한다. `

* **Dependency Injection**

  → DI란, 객체 사이의 의존 관계를 객체 자신이 아닌 외부에서 수행한다는 개념이다.

  → 각각의 계층이나 서비스들 간의 dependency가 존재할 경우, frame work에서 자동으로 연결시켜준다.



  > * Dependency 
  >
  >   Ex)
  >
  >   ```java
  >   Car c = new Car();
  >   c.getTire();
  >   ```
  >
  >   → Simply to say, Dependency is `new`.
  >
  >   → `new`를 실행하는 Car와 Tire 사이에 dependency가 있다.
  >
  > * Injection
  >
  >   Ex)
  >
  >   ```java
  >   Tire t = new KoreanTire();
  >   Car c = new Car(t);
  >   ```
  >
  >   → Injection means things from outside.
  >
  >   → Car 내부에서 Tire를 생산하는 것이 아닌, 외부에서 생산된 Tire를 Car에 장착하는 작업을 **Injection**이라고 한다.

  → Dependency injection을 하게 되면, Object는 외부의 interface를 구현한 어떤 object가 들어오기만 하면 정상적으로 작동 될 수 있다.

  > Ex)
  >
  > ```java
  > ApplicationContext context = new FilesystemXmlApplication("/src/main/java/test.xml");
  > Tire t = (Tire)context.getBean("t");
  > Car c = (Car)context.getBean("c")l
  > c.setTire(t);
  > ```
  >
  > → Tire와 Car의 내용이 정의 되어 있는 XML file을 load하여, 필요 object를 사용한다.
  >
  > → 이를 통해, Car or Tire의 수정이 필요할 경우, XML file만 수정하면, java의 recompile이 not need.

* **IoC(Inversion of Control)**

  → IOC란, instance(object)의 생성부터 소멸까지의 object life cycle을 spring container에서 대신 해주는 것을 의미한다.

* **AOP(Aspect Oriented Programming)**

  → AOP는 핵심 관심사를 분리하여, 프로그램 모듈화를 향상시키는 programming style이다. 

  → Transaction, logging, security와 같이 여러 모듈에서 공통적으로 사용되는 기능의 경우 분리하여 module 관리를 가능하게 한다.

  → Module을 분리하고 재사용을 가능하게 하여 code의 확정성을 높인다.



