## JVM (Java Virtual Machine)

- **JVM's role** is **reading java application through class loader** and **executing it with java API.** And JVM is a **role of interacting between java and OS to reuse resource without interference by OS.**
  <br>(JVM은 자바 어플리케이션을 클래스 로더를 통해 읽어 들여 자바 API와 함께 실행하는 역할을 한다. 그리고 JVM은 자바와 OS 사이에서 중개자로서 자바가 OS에 구애받지 않고 재사용을 가능하도록 해준다.) 

- **JVM is a virtual machine based on stack and it provides memory controlling service and garbage collection.**

  <br>

  (JVM은 스택기반의 가상머신으로 가장 중요한 역할은 메모리 관리와 garbage collection을 수행하는 것이라 할 수 있다. )



  <img width="557" alt="jvm" src="https://user-images.githubusercontent.com/23169707/47278909-85a37f80-d607-11e8-8230-956de71d0065.png">

> * Step of JVM
>
>   > 1. Program이 실행되면 JVM은 OS로부터 memory를 할당받는다.
>   >    (JVM은 할당받은 memory를 용도에 맞게 여러 영역으로 나누어 관리한다.)
>   > 2. Java compiler(javac)가 java source(.java)를 read하여 java bytecode(.class)로 convert한다.
>   > 3. Class loader를 통해 class file들을 JVM으로 loading 한다.
>   > 4. Loading된 class file들은 execution engine을 통해 해석된다.
>   > 5. 해석된 byte code는 runtime data areas에 배치되어 실질적인 수행이 이루어지게 된다.