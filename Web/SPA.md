### Basic theories

------

## What is SPA(Single Page Application)? 

- **SPA consists only single page and it requests data to struct new page.**

  Generally menu bar and footer of website has no change in each pages and it should request data to struct page in every time.

  But, SPA has only one page so it request the data of web site's structure only one time and it will request view data to display different page with high speed.

  <br>(SPA는 단일 페이지에서 필요한 데이터를 호출하여 화면을 새로 구성하는 기법을 말한다. 

  보통 웹사이트의 메뉴바, footer 등 내용이 변하지 않음에도 불구하고 페이지를 이동할때마다 서버에서 코드를 생성해서 새로 읽어오는 구조를 가진다. 

  그러나 SPA를 사용하면 처음 웹사이트 접속할 때, 한번만 요청을 하고 새로운 페이지는 필요한 view부분만 데이터를 전달받아 구성할 수 있어 빠른 속도로 제공할 수 있다.)

  > * Rendering
  >
  >   → Rendering이란, 논리적인 문서의 표현식을 그래픽 표현식으로 변형시키는 과정을 말한다. 
  >
  >   > 1. DOM 요소와 스타일에 기반을 둔 레이아웃을 계산.
  >   > 2. 계산된 요소의 화면 표현.
  >
  >   위의 과정을 통해 rendering이 진행된다.