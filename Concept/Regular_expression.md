### Deepen theories
***

## Regular Expression 
* Regular expression is in theoretical computer science and formal language theory, **a sequence of characters** that define a **search pattern.** <br>
Usually this pattern is then used by **string searching algorithms** for "find" or "find and replace" operations on strings or for input validation.
<br>(정규 표현식은 특정한 규칙을 가진 문자열의 집합을 표현하는 데 사용하는 형식 언어이다. <br>정규 표현식은 많은 텍스트 편집기와 프로그래밍 언어에서 문자열의 검색과 치환을 위해 지원하고 있다.) 

* Regular expression is often used to mean **the specific, standard textual syntax** for representing patterns for matching text.
<br>(정규 표현식은 텍스트가 준수해야 하는 "패턴"을 표현하기 위해 특정한 표준의 텍스트 신택스를 의미하기 위해 사용된다.)

* There are meta characters that it is used as **specific way without original meaning** of characters in regular expressions.
<br>(정규 표현식에서 메타 문자가 사용되며, 메타 문자란 원래 그 문자가 가진 뜻이 아닌 특별한 용도로 사용되는 문자를 말한다.)
<br><br>
Ex1)
```a.``` 은 ```a```와 일치하는 리터럴 문자이며, ```.```은 모든 문자와 일치시키는 메타 문자로서  ```'a', 'ax', 'a0'```와 일치시킬 수 있다. <br><br> Ex2)
```.```은 매우 포괄적인 패턴으로, ```[a-z]```을 사용하여 ```a~z```덜 포괄적인 패턴을 사용할 수 도 있다. <br><br>Ex3)
```0.013517 1  175   Rx   d 8 30 04 64 14 1D 00 00 00```의 여러 format을 가지고 있는 input을 <br> ```(r" +([0-9.]+) +(\w+) +(\w+) +(\w+) +d (\d+)((?: [0-9a-fA-F]{2})*)")```의 정규 표현식을 이용하여 원하는 type으로 split을 할 수 있게 된다.
>  https://regex101.com 을 통해 정규 표현식을 연습해볼 수 있다.