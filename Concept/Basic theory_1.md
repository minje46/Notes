### Basic programing theories.
***
## 1.Static & Dynamic Languages
* Static language **decides type** such as int and char **during compile** and if type is uncorrect, it will be compile error.
While it is compiling data type is decided, the speed is **fast** and data type error is found easily. 
<br>(���� ���� int, char�� ���� �ڷ����� compile�ÿ� �����ϴ� ���� ���ϸ�, �ڷ����� ��Ȯ���� ������ compile error�� �߻��Ѵ�.
Compile �� ��, �ڷ��� ������ �����ϱ� ������ �ӵ��� ������ �ڷ��� ������ ���� �߰��� �� �ִ�.)

* Dynamic language **decides data type during run time** so it is possible to decide data type till run time. 
Although interpreter language is easy to learn, it also happens lots of error so it should be considered exceptions of error before.
<br>(���� ���� int, char�� ���� �ڷ����� compile�� �ƴ� ���� �ÿ� �����ϴ� ���� ���ϸ�, ���� ���� �ڷ����� ���� ������ �̷� �� �ֱ� ������ ������ ������ �����Ѵ�.
Interpreter ���� ����� ������, ���� �߻��� ��찡 ���� �����Ͽ� ���� ó���� �Ű��� ���� ��� �Ѵ�.)

## 2. Machine & Assembly & High level Languages.
* Machine language is computer language consists of 0and 1 when **CPU deals with instructions.**
<br>(����� ��ǻ���� CPU�� ����� ó���� �� ����ϴ� ���� 0��1�� �̷���� �ִ�.)

* Assembly language is easier language to understand **by changing machine language to meaningful words.**
<br>(�������� ����� ���ڸ� �ǹ� �ִ� �ܾ�� �ٲپ� ������� �����ϱ� ���� ���� ����̴�.)

* High level of lanugage is **able to return the result of people's instruction** such as Java, Python.
<br>(��޾��� ������� �����ϱ� ���ϵ��� ������� ����� ��ɾ ����� ������ �� �ִ� Java, Python�� ���� �� ���Ѵ�.)

## 3. Assebler & Compiler & Interpreter
* Assembler is translating program **from assebly language to machine language.**
<br>(������� ������ ����� �����ϴ� ���α׷��� ���Ѵ�.)

* Compiler is translating program **from high level of language to machine language.**
<br>(Compiler�� C���� ���� ��޾��� �ۼ��� ��ɾ ����� �����ϴ� ���α׷��� ���Ѵ�.)
**Additionally, C, C++ has each compiler depends on CPU or OS which has different machine language individually though, Compiler of Java translates to not machine language but byte code so it will be worked on JVM. That is why Java doesn't need each compiler with slow speed.**
<br>(�߰�������, C�� C++�� compiler�� CPU�� OS�� ������ ���� ���� ������ �ִ� ��� �ٸ��⿡ ������ compiler�� �ʿ��� �ݸ�, Java�� ���compiler�� ��� �ƴ� byte code�� ��ȯ�� ��Ű�� byte code�� JVM(Java Virtual Machine)���� ������ �Ǵ� ���̰� �����Ѵ�. �� ������ Java�� ������ compiler�� �ʿ�� ���� ������ �ӵ��� �����ٴ� Ư¡�� �ִ�.) 

* Interpreter **can translate instructions** of high level language **directly** without through compiler.
<br>(Interpreter�� programming language�� source code�� compile����(������ ����� �̸� ��ȯ�ϴ� ��) ���� �ٷ� ���� ���� �����ϴ� program �Ǵ� ȯ���� ���ϸ�, ��޾� ��� �����ų �� �ִٴ� ������ �ִ�.)

