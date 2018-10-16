### Basic theories

------

## What is Server? 

- **Server is computer to operate special task as role of providing information** and operating special task needs high utility of CPU and memory and so on. 

  <br>(서버란, 정보 제공 역할을 하는 주체로서 어떤 특화된 임무를 수행하기 위해 설정된 컴퓨터라 할 수 있다. 그래서 특화된 업무를 수행하기 위해 일반 컴퓨터보다 고성능의 CPU와 대용량 메모리 등으로 구성되어 있다.)

  > Ex)
  >
  > 	domain server : Controlling domain server.
  >		
  > 	E-mail server : Controlling email server.
  >	
  > 	Web server : Controlling web site's server and being host server.
  >	
  > 	Multi media server : Controlling videos and musics in the server.
  >	
  > 	→  ```[Naver-Email]```을 확인 하는 것은 Naver 라는 web server에 접속하여 E-mail server에 
  >	
  > 		접근하여 mail을 확인하는 것이다.



* One **web server usually has 2~300 accounts** and it operates and controls 2~300 web sites. It is called hosting. <br>Usually **buying web server** means **buying one account** from web server and **hosting this one accounts.**

  <br>(웹 서버 한대를 보통 2~300개의 계정으로 나누어 웹서버 한대가 2~300개의 웹을 운영하며, 이것을 호스팅이라고 한다. <br> 일반적으로 웹 서버를 구매한다는 것이 웹 서버의 계정 한개를 구매하여 웹 호스팅을 한다는 것이다.)

  ![server_structure](https://user-images.githubusercontent.com/23169707/45259928-8c898080-b413-11e8-9080-3fe4c7d6e415.png)

* **Logical server** has web server which **provides client's request and html** and db server which **provides requested data.** <br>**Physical server** is physical **hard ware** to operate logical server.
  <br>(논리적인 서버는 사용자의 입력 및 HTML 생성을 담당하는 web server와 data 제공을 하는 db server를 말할 수 있다.<br>물리적인 서버는 web server와 db server를 동작 시키는 물리적인 컴퓨터 하드웨어를 말한다.)

  > → Logical 과 Physical 이라는 단어를 많은 곳에서 사용하는 것을 확인할 수 있는데, 
  > Physical은 물리적으로 실제로 연결되어 있는, 물리적으로 관계가 되어 있는 것을 뜻하며 
  >
  > 반대로 logical은 물리적인 관계와는 상관 없는 논리적인 구조 또는 관계를 뜻한다.
  >
  > ex) Logical structure, logical time, logical address etc.

  ------

  ## Client & Server

  ![server_client](https://user-images.githubusercontent.com/23169707/45259918-6e238500-b413-11e8-8ad8-b2749ee824db.png)

  > 기본적으로 **웹의 구조**는 **Client & Server 방식**으로 이루어지며, **Client(Web browser)**가 특정 페이지를 웹 서버에 **Request**하면 이를 **처리한 결과**를 Client에게 **Response 하는 구조.**
  >
  > 	1. Request : Web browser 가 Web server에 해당 페이지를 request.
  >
  >    	2. 해당 **web server**는 **requested page를 html인지 jsp 인지 판단**하고, **html이면 response 하고** 아닌 경우에는 **요청된 페이지의 logic / DB 연동을 위해 WAS에 처리를 request한다.**
  >             	3. WAS에서 DB연동이 필요하면 DB 처리를 수행한다.
  >          	4. **처리 결과**를 web server에 **response**한다.
  >                 	5. **최종 결과를** Web browser에 **response**한다.



  ### Client 

  - When **client(user, web browser) requests** some thing to server, **Server response** to client.

    <br>(클라이언트(사용자, 웹브라우저)가 서버에 요청을 보내고 서버가 해당 요청에 대해 응답한다는 것이 기본적인 동작원리이다.)

    > **Web browser** is web application which **displays the results from server** such as chrome



  ### Web server

  - **Web server transports html or object in http protocol** for dealing with client's request and **sends client's request** if there are things can't deal with itself and **response the final results** of client's request. <br> **Just web server is able to deal with only static page** such as web page and images and Apache, IIS are the typical web server.

    <br>(웹 서버는 클라이언트의 요청을 받아 html 이나 object를 http 프로토콜을 이용해 전송하며, 사용자가 요청한 것들 중에 웹 서버 자체적으로 처리할 수 없는 것을 웹 컨테이너 등과 같이 처리할 수 있는 곳으로 넘기고 처리된 결과를 종합적으로 받아와서 사용자에게 넘겨주는 역할을 한다.<br>웹 서버 만으로 구축된 서버는 웹페이지, 이미지 등 정적인 페이지를 생성하고 Apache, IIS(Internet Information Server)등의 종류가 있다.)

    >* **IIS (Internet Information Services) is the server group** for using MS window.
    >  <br>(IIS는 마이크로소프트 윈도우를 사용하는 서버들을 위한 인터넷 기반 서비스들의 모임이라고 할 수 있다.)
    >
    >  > 1. IIS 관리자를 사용하여 IIS 기능을 구성하고 web site를 관리한다.
    >  > 2. FTP를 사용하여 web site 소유자가 file을 upload & download할 수 있다.
    >  > 3. Web site 격리를 사용하여 web site가 server의 다른 web site를 방해하지 않도록 한다.
    >  > 4. 클래식 ASP, ASP.NET, PHP 등의 다양한 기술을 사용하여 작성된 web 응용 프로그램을 구성한다.
    >  > 5. Windows PowerShell을 사용하여 web server에 대한 대부분의 관리 작업관리 과정을 자동하 할 수 있다.
    >
    >* **Apache**는 open source license에 따라 배포되어 사용할 수 있는 **HTTP web server**이다. 
    >
    >  > → Tomcat과 Resin 등의 web application server와 함께 사용할 수 있다.
    >  >
    >  > → Open-SSL, Mod-SSL을 설치하여 보안을 강화할 수 있다. `(http → https)`
    >
    >* **Tomcat**은 Apache S/W의 application server로서, Java servlet을 실행시키고 JSP code가 포함되어 있는 web page를 제공한다.
    >
    >  > → Tomcat은 web server에서 넘어온 dynamic page를 read하고 program을 실행하여 result를 HTML로 재구성하여 Apache에 return해주는 구조를 가진다.



  - **Using web** is **client** is called user and web browser altogether **requests service** to server and **server will response** service which is requested from client and **display the results** on the monitor.    

    <br>(**웹을 사용한다는 것은** 사용자가 웹 브라우저를 이용하여 인터넷 서핑을 할 때, 실제로는 웹 브라우저가 지속적으로 해당 웹 페이지의 서버에 요청을 보내고 응답을 받는 과정이 일어난다. <br>즉, 사용자와 웹 브라우저는 클라이언트가 되어 서버에 서비스를 요청하는 것이고, 서버는 해당 요청에 대해 응답하는 서비스를 제공해주고 웹 브라우저 화면에 결과를 출력하는 것이다. )

    > **Web server controls static pages** and **controls page logic and database and requests these things to web application server** for dealing with client's request and **response the results** to web browser. Apache is one of the famous web server.



  ### Web container

  * The software **which is able to operate JSP and Servlet** is called **web container** or **servlet container.**

    <br>(JSP와 서블릿을 실행시킬 수 있는 소프트웨어를 웹 컨테이너 혹은 서블릿 컨테이너 라고 한다.)

    > JSP 는 Java Server Page 로서, Server 에서 해당 자원들을 사용하는 Server 언어. 
    > JS 는 Java Script 로서, `<script>`를 이용하여 사용자의 web browser에 표현해주는 Client 언어.

  * **When web server requests JSP task,** Tomcat **compiles what JSP file is changed to servlet** and the **servlet result will be transported** to web server.

    <br>(웹 서버에서 JSP를 요청하면 톰캣에서는 JSP 파일을 서블릿으로 변환하여 컴파일을 수행하고, 서블릿 수행결과를 웹서버에게 전달하게 된다.<br>JSP 컨테이너가 탑재 되어 있는 WAS는 JSP 페이지를 컴파일 하여 동적인 페이지를 생성한다.)

    > * JSP 동작 구조
    >
    >   1. User의 web brwoser에서 `http://server_IP/xxx.jsp` 형태로 해당 페이지(JSP 페이지)를 web server로 request.
    >
    >   2. Web server는 JSP에 대한 요청을 JSP container(Web container)에 처리를 reqeust.
    >
    >   3. JSP file이 처음 reqeust된 것이라면, JSP file을 servlet(.java file 생성)으로 변환하는 parsing을 하게 된다.
    >
    >      (이전에 요청했던  페이지는 Parsing 없이, Parsing 했던 class file을 memory에 allocation한다.)
    >
    >   4. Servlet file은 Java에서 실행가능한 class file로 compile이 된다.
    >
    >   5. Class file은 memory에 allocation되어 execute.
    >
    >   6. 실행 결과는 다시 web server에 response.
    >
    >   7. Web server는 web browser가 인식할 수 있는 html 형태로 결과를 response. html 페이지를 web browser에서 실행시켜 표시한다.
    >      (Web browser는 html tag로 구성된 페이지를 실행시켜 주는 프로그램.
    >      Web server에서 html이 실행되는 것이 아니라, web browser에서 실행되어 보여진다.)
    >

  ### Web Application Server (WAS)

  ![server_was](https://user-images.githubusercontent.com/23169707/45259920-7da2ce00-b413-11e8-95ae-2d0d72922533.png)

  - **WAS is `web server` + `web container`** and **it has components** what is used on web.
    <br>(웹 어플리케이션 서버는 웹 서버와 웹 컨테이너를 포용하는 용어로, 웹 상에서 사용하는 컴포넌트들을 올려 놓고 사용하게 되는 서버를 말한다.)

  - It is **possible to decrease server's task**, **separating web server** controls web documents and **WAS** operates JSP page and so one.

    <br>(웹 서버는 웹 문서를, WAS는 JSP 페이지 등의 작업을 하도록 분할 하여 서버 부담을 줄이는 것이 가능하며, Tomcat, BEA가 대표적인 WAS 이다.)

    >**Web page 의 request**를 web server가 처리를 하는 것이 아니라, **WAS에서 처리**를 한다.
    >
    >Ex) 여러명의 사용자가 동일한 페이지를 요청하여 같은 어플리케이션 프로그램을 처리할 때, **한개의 프로세스만 할당**하고 **사용자 요청을 쓰레드 방식으로 처리한다.**

  - When web server gets requestions, web server response results which is connected logic and database.

    <br>(웹 서버가 요청을 받으면 웹 어플리케이션 서버에서 다양한 로직이나 데이터베이스와의 연동을 통해 완성된 결과물을 응답한다.)

    >**Web application server deals with requested page logic and connection of database** and **controls dynamic pages.** Apache Tomcatand WebSphere are one of the famous WAS.
