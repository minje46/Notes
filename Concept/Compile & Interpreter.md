### Basic programing theories.
***
## 1.Static & Dynamic Languages
* Static language **decides type** such as int and char **during compile** and if type is uncorrect, it will be compile error.
While it is compiling data type is decided, the speed is **fast** and data type error is found easily. 
<br>(정적 언어는 int, char와 같은 자료형을 compile시에 결정하는 것을 말하며, 자료형이 정확하지 않으면 compile error가 발생한다.
Compile 할 때, 자료형 정보를 결정하기 때문에 속도가 빠르고 자료형 에러를 쉽게 발견할 수 있다.)

* Dynamic language **decides data type during run time** so it is possible to decide data type till run time. 
Although interpreter language is easy to learn, it also happens lots of error so it should be considered exceptions of error before.
<br>(동적 언어는 int, char와 같은 자료형을 compile이 아닌 실행 시에 결정하는 것을 말하며, 실행 까지 자료형에 대한 결정을 미룰 수 있기 때문에 선택의 여지가 존재한다.
Interpreter 언어는 배우기는 쉽지만, 에러 발생의 경우가 많이 존재하여 예외 처리에 신경을 많이 써야 한다.)

## 2. Machine & Assembly & High level Languages.
* Machine language is computer language consists of 0and 1 when **CPU deals with instructions.**
<br>(기계어는 컴퓨터의 CPU가 명령을 처리할 때 사용하는 언어로 0과1로 이루어져 있다.)

* Assembly language is easier language to understand **by changing machine language to meaningful words.**
<br>(어셈블리어는 기계어에서 숫자를 의미 있는 단어로 바꾸어 사람들이 이해하기 쉽게 만든 언어이다.)

* High level of lanugage is **able to return the result of people's instruction** such as Java, Python.
<br>(고급언어는 사람들이 이해하기 편하도록 만들어져 사람의 명령어를 결과로 리턴할 수 있는 Java, Python과 같은 언어를 말한다.)

## 3. Assebler & Compiler & Interpreter
* Assembler is translating program **from assebly language to machine language.**
<br>(어셈블러는 어셈블리어를 기계어로 번역하는 프로그램을 말한다.)

* Compiler is translating program **from high level of language to machine language.**
<br>(Compiler는 C언어와 같은 고급언어로 작성된 명령어를 기계어로 번역하는 프로그램을 말한다.)
**Additionally, C, C++ has each compiler depends on CPU or OS which has different machine language individually though, Compiler of Java translates to not machine language but byte code so it will be worked on JVM. That is why Java doesn't need each compiler with slow speed.**
<br>(추가적으로, C와 C++의 compiler는 CPU나 OS의 종류에 따라 각자 가지고 있는 기계어가 다르기에 별도의 compiler가 필요한 반면, Java의 경우compiler가 기계어가 아닌 byte code로 변환을 시키고 byte code를 JVM(Java Virtual Machine)에서 실행이 되는 차이가 존재한다. 이 때문에 Java는 별도의 compiler는 필요로 하지 않지만 속도가 느리다는 특징이 있다.) 

* Interpreter **can translate instructions** of high level language **directly** without through compiler.
<br>(Interpreter는 programming language의 source code를 compile과정(모든것을 기계어로 미리 변환하는 것) 없이 바로 한줄 한줄 실행하는 program 또는 환경을 말하며, 고급언어를 즉시 실행시킬 수 있다는 장점이 있다.)

