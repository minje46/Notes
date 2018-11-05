### Servlet & JSP

------

## 1. What is Servlet? 

- **Servlet**(Server + Applet) **controls and generates dynamic contents on WAS** as a java program.
  <br>(Servlet은 WAS 위에서 동작하는 java 프로그램으로서, java언어를 기반으로 동적인 contents를 생성하는 기술을 뜻한다.)

- **Servlet is standard API** to implement web application based on java language and **classes which is under this rule** are servlet.

  <br>(Servlet은 java언어를 웹 어플리케이션에서 쉽게 사용하기 위해 만든 표준 API로서, 이 규약에 맞추어 만든 클래스들을 servlet이라고도 한다.)



  <img width="547" alt="servlet" src="https://user-images.githubusercontent.com/23169707/47987533-1196ca80-e123-11e8-8535-f9f51578fbba.png">

  > * WAS 구동 과정.
  >
  >   1. WAS가 java file을 compile하여 class로 만든다.
  >
  >   2. Class file을 memory에 올리고 servlet object를 만들게 된다.
  >
  >   3. Servlet object는 doPost와 doGet을 통해 request에 response하게 된다.
  >
  > * Structure
  >
  >   <img width="440" alt="servlet_structure" src="https://user-images.githubusercontent.com/23169707/47987719-94b82080-e123-11e8-9527-07bd739c9a3c.png">
  >
  >   * Init 과 Service, Destroy는 callback method로 구현되어 있다.
  >   * Init은 servlet이 memory에 load될 때, 실행된다.
  >   * Destroy는 memory에서 unload될 때, 실행된다.
  >   * Service는 Http method type에 따라 doGet, doPost가 각각 호출된다.
  >   * **초기화된 Servlet은 client의 request가 있을 때 마다, thread를 생성하여 병렬적으로 service를 수행한다.**
  >     (Servlet object를 여러개 생성하는 것이 아니다.)

- **Servlet은 WAS를 통해 compile된 후, memory에 load되어 client의 http request를 처리하는 java program이라 할 수 있다.**

  > * CGI (Common Gateway Interface)
  >
  >   → Web 기반 위에 programming 요소가 추가된 것으로, web server와 외부 program 사이에 정보를 주고 받기 위한 것.
  >
  >   → Dynamic하게 HTML 문서를 생성하고 서비스를 제공할 수 있다.
  >
  >   → CGI program은 client의 request 수 만큼 process를 생성해서 처리하게 되기에 server computer의 memory 낭비와 overhead를 발생시킨다.
  >
  > * 확장 CGI
  >
  >   → 하나의 process에서 여러개의 thread를 생성해서 client의 request를 처리하는 구조로 기존 CGI의 단점을 보완.
  >
  >   → Servlet 과 JSp 가 확장 CGI programming의 종류.



------

## 2. What is JSP? 

- **JSP**(Java Server Pages) is a technology **to control contents or structure of web page using servlet.**

  <br>(JSP는 Servlet의 사용을 통해 웹 페이지의 내용이나 모양을 제어하는 기술이다.)

  > * JSP (Java Server Pages)
  >
  >   → Oracle 사에서 관리중인 Java 언어가 기반이다.
  >
  >   → 우수한 보안성과 다양한 기능을 제공하며, java의 이식성 덕분에 다양한 platform에서 사용이 가능하다.
  >
  > * PHP (Hypertext Preprocessor)
  >
  >   → Open source로 제공되는 명령형, 객체지향형 언어로 대부분의 open source s/w는 php로 구성되어 있다.
  >
  >   → Unix OS 과 Window OS 에서 사용이 가능하며, 다양한 DB를 지원하기 때문에 user에게 편의성이 제공된다.
  >
  >   → Easy to learn이기 때문에, 개발이 fast. 
  >
  >   → 상대적으로 light 하기 때문에, 구동 속도가 fast.
  >
  >   → 그러나, JSP에 비해 안정적이지 못하여 traffic이 많아지면, server speed가 slow.
  >
  > * ASP (Active Server Pages)
  >
  >   → MS 사에서 서비스하는 programming language이다.
  >
  >   → Visual basic script와 연동이 가능하며, MS의 다양한 component와 연동이 가능하다.
  >
  >   → Window에서만 사용할 수 있다.

- **JSP** is developed **to get over weakness of servlet** which includes **HTML tags inside java code** and it makes **hard to modify and develop.**

  <br>(JSP는 Java code 내부에 HTML tag가 섞여 있어 작업에 대한 분리적 측면에서 효율성이 떨어지고 프로그래밍이 상대적으로 여렵고 수정하기 어렵다는 단점이 있는 Servlet을 보완하기 위해 개발되었다.)

  > * Server Script Technology.
  >
  >   → 미리 약속된 규정에 따라 간단한 키워드 조합을 입력하면, 실행시점에 그 각각의 키워드에 mapping되어 있는 어떤 code로 parsing 후에 실행되는 형태를 말한다.

- When **clients requests using JSP**, it is **parsed to servlet by WAS.**

  <br>(JSP의 경우, 사용자가 요청을 하면, WAS에 의해 내부적으로 servlet으로 만들어져 실행된다.)

  Ex) `a.jsp` 라는 file을 실행할 경우, WAS에 의해 `a_jsp.java`가 만들어지고 servlet과 동일하게 `a_jsp.class`로 compile되어 실행된다.

- JSP model 1

  <img width="420" alt="jsp_1" src="https://user-images.githubusercontent.com/23169707/47990524-0cd61480-e12b-11e8-9179-4f2d51dafcb8.png">

  > → JSP만을 사용하는 model이다.
  >
  > → 개발 속도가 빠르고, 배우기가 쉽다.
  >
  > → Presentation logic과 Business logic이 confusing.
  >
  > → JSP code가 복잡해져 유지보수가 어렵다.

- JSP model 2

  <img width="421" alt="jsp_2" src="https://user-images.githubusercontent.com/23169707/47990604-46a71b00-e12b-11e8-993f-905e67a87c06.png">

  > → JSP / Servlet을 동시에 사용하는 MVC model.
  > (View는 JSP로, Container는 Servlet으로 구현.)
  >
  > →  Presentation logic 과 Business logic이 분리된다.
  > (보여지는 부분은 HTML이 중심이 되는 JSP, 다른 Java class에게 data를 넘겨주는 부분은 java code가 중심이 되는 servlet.)
  >
  > → 유지 보수가 용이하다.



------

## 3. Servlet & JSP

> * Servlet
>
>   → Servlet은 Java code로 구현해야 하며, 배포시에 compile을 해야한다.
>
>   → Code를 수정하면, 다시 compile 하여 배포해야 한다.
>
>   → HTML tag 사용할 경우, " "로 stream 처리를 해야 한다. Ex) "<body></body>"
>



> * JSP
>
>   → JSP는 HTML처럼 tag를 사용하며, java code도 사용이 가능하다.
>
>   → java code 사용 할 경우, <% %> tag 안에 처리해주어야 한다.
>
>   (Script technology이기 때문에, 정해진 format을 따라야 한다.)



* **In jsp, it should develop html tags though, in servlet it should develop java code only.**

  <br>(JSP에는 HTML tag를 주로 코딩하며 java code는 자제한다. [사용자의 view를 구현하는데 사용 / Static part 담당]
  Servlet에는 java code를 주로 코딩한다. [Control를 구현하는데 사용 / Dynamic part 담당]

* **The role** of servlet and jsp **is similar** though, the **key point** is **which part** should be **handled fast.**

  > Servlet과 JSP은 모두 java code와 HTML의 사용이 가능하지만, 사용 방법에 차이만 존재한다.
  >
  > 웹 개발 초기에는 Servlet을 이용한 개발이 이루어졌으며, servlet을 이용할 경우 유지 보수가 힘들다는 이유로 JSP가 개발 되었고 JSP만을 사용하는 Model 1의 개발이 유행하였다.
  >
  > 그러나, 이 또한 java code의 유지 보수의 단점이 발견되었기 때문에, 현재에는 Servlet과 JSP를 모두 사용하는 Model 2의 개발을 사용한다.
