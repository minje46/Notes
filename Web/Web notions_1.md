### Web notions_1

------

## 1. What is XML? 

- XML is eXtensible Markup Language which **is able to transport data easily** each others for sharing data and structure documents as standards.
  <br>(XML은 확장성 있는 마크업 언어로, 전자적으로 데이터를 쉽게 교환하기 위한 데이터 및 구조화된 문서들을 위한 보편적인 표준이라 할 수 있다.)

  > **Markup Language provides additional information** of documentation and data such as structure using tag.
  >
  > <br>
  >
  > (마크업 언어는 태그 등을 이용하여 문서나 데이터의 구조를 명기하며 추가적인 정보를 제공하는 언어이다. )

- XML can **avoid limitation of HTML's tag and complexity of SGML.**
  <br>(XML은 기존 HTML이 가지고 있는 tag의 제한성과 SGML의 복잡성을 보완 할 수 있다는 것이 가장 큰 특징.)

  >**SGML is criteria of ISO to defend loss of data** during transportation, storagement, operations.
  >
  ><br>SGML 은 전자문서가 어떠한 시스템 환경에서도 정보의 손실 없이 전송, 저장, 자동처리가 가능하도록 국제표준화기구에서 정한 문서처리 표준이다.



## 2. XML & HTML 

- The purpose of **HTML** is **data expression**, otherwise **XML** **sets data structure** for exchanging data.
  <br>(HTML는 데이터 표현이 목적이라면, XML은 데이터 교환을 위한 구조 정의가 목적이다.)

- **HTML must use tag** which is **already set** though, **XML can use tag freely** because **tag is not predefined.**
  <br>(HTML은 정해진 태그를 가지고 표현해야 하지만, XML은 미리 정해진 태그가 없기 때문에 자유롭게 만들어 사용할 수 있다.)

- **HTML is web language** which only can use in web envrionment, otherwise **XML has no limitation.**
  <br>(HTML은 인터넷 웹 환경에서 작동되는 언어이지만, XML은 특정 환경에 제한받지 않는다.)

  >* jsoup
  >
  >  **→ jsoup은 기본적으로 HTML format의 string을 java에서 사용 가능한 DOM object로 parser해주는 기능을 지원하는 것이다. (Web page를 read하는 기능은 지원하지 않는다.)**
  >
  >  Ex) `Jsoup.parse(String url, int timeoutMillisecons)` 
  >
  >  → jsoup의 selector api를 이용해 특정 element에 접근할 수 있으며, data read 또는 수정을 할 수 있다. (jsoup은 jquery의 selector와 비슷한 selector api를 제공하기 때문에 쉽게 사용할 수 있다는 장점이 있다.)


## 3. DTD (Document Type Definition) 

- **DTD defines type of documentation **in SGML type's markup language. 
  <br>(DTD는 컴퓨터 용어로, SGML 계열의 마크업 언어에서 문서 형식을 정의하는 것을 뜻한다. 간단하게 문서 형식을 정의해준다고 말할 수 있다.)

- It **makes user read easily** and it **helps user make and use documentation** with referencing DTD before using XML.
  <br>(DTD를 사용하면, 사용자가 쉽게 이해할 수 있으며, DTD를 기준으로 XML을 사용할 수 있게된다.)


## 4. Element 

- **Element is all of instructions** having start and end tags and it **explains data.**
  <br>(Element는 HTML에서 시작 태그와 종료 태그로 이루어진 모든 명령어들을 의미하며, 태그에 포함된 데이터에 대해 설명하는 기능을 한다.)

  > EX1 ) ```<p> Hello world</p>``` 
  >
  > 	위의 예시 전체가 하나의 element라고 볼 수 있으며, `<p>`는 시작 태그, `</p>`는 종료 태그이다.
  > <br>
  >
  > Ex2) `<!Element Date(#PCDATA)>` 로 DTD에 선언할 수 있다.


## 5. Attribute 

- **Attribute is specific instruction systems to provides additional information of element** and it is used inside of element's tag.
  <br>(Attribute는 HTML element의 추가적인 정보를 전달하기 위해 element의 시작 태그 안에서 사용되며, 구체화된 명령어 체계를 의미한다.)

  > EX1 ) ```<p align = "center">``` 
  >
  > 	align을 center 로 설정한다는 구체적인 명령어 체계를 가지도록 하는 것이 attribute이다.
  >
  > <br>
  >
  > Ex2) `<!ATTLIST Name CDATA #REQUIRED>` 로 DTD에 선언할 수 있다.

- The purpose of attribute is explaining additional data of element and **it is located in HTML text** so it is also **static data.**

  <br>

  (Attribute는 HTML element의 추가적인 정보를 전달하며, HTML text 문서에 존재한다. [정적인 데이터라고 볼 수 있다.])



## 6. Property 

- **Property has a role of storing value** and it is **for object.**

  <br>

  (Property는 값을 저장하는 역할을 하며, 객체를 위해서 데이터를 저장한다.)

- **Property is located in HTML DOM tree of attribute** and it is also **dynamic data.**

  <br>(Property는 attribue에 대한 HTML DOM tree 내부에서 존재한다.[동적인 데이터로 볼 수 있다.])

> * Variable vs. Property
>
>   → Variable 과 property 모두 값을 저장하는 역할을 한다고 볼 수 있으나, variable은 context에 포함되어 있는 반면, property는 object에 포함되어 있어 object를 구성하는 block이라고 볼 수 있다.



## 7. Entity 

- Entity is similar concept of define in C Language, **it defines variables to other special value.**
  <br>(Entity는 C언어에서 define으로 설정해주는 상수와 유사한 개념으로, 변수를 미리 다른 값으로 정의하는 것이다.)

  Ex)  DTD 에서는 `<!ENTITY kwak "Genius">` 방식으로 선언하고, XML 에서는 `	&kwak;`  으로 사용하고,

  결과는 `Genius` 가 출력된다.