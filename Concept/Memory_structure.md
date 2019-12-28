## Memory Structure

Program이 실행되면, `main memory(RAM)`으로 process가 `load`되며,

load된 `code(Instruction)`가 `CPU register`에 옮겨져서 실행되는 구조.

![image](https://user-images.githubusercontent.com/23169707/71542474-5d9d7200-29aa-11ea-8a80-b9200bb8b67e.png)

* **`stack`**

  >`stack`은 특정 구문 내에서 임시로 할당하는 메모리 영역으로 **`{ }`**와 같은 **브레이스(braces : 중괄호)**내에서 유효한 데이터가 저장된다. 
  >
  >> `{` : stack 영역 시작.
  >>
  >> `}` : 생성된 data 해제.
  >
  >Program의 함수에서 다른 **함수를 콜(Call)**한 경우 해당 함수의 `{ }` 에 대응해서 스택 영역이 생성되고 해제된다. 
  >
  >이 때 함수를 호출할 때 사용된 **parameter(매개변수)**도 마찬가지로 스택에 저장되기 때문에 함수가 종료되면 해제된다. 
  >
  >> →  call by reference로 memory를 유지 가능.
  >
  >`stack` 영역은 그림처럼 상위에서부터 아래로 증가하면서 할당이 되는데요 중요한 것은 **컴파일 시에 크기가 결정된다는 것입니다.** 
  >
  >> → Generally, Compiler의 default는 **1M Byte**.
  >
  >* **Example**
  >
  >  ```c++
  >  int arr[10000000];
  >  ```
  >
  >  > → `array`를 `1000000(백만)` 이상 할당하면 **`stack overflow`**.

  

* **`heap`**

  >`heap`은 program에서 **자유롭게 할당하고 해제할 수 있는 영역**입니다.
  >
  >>  `heap`에서는 `memory allocation` 과 `deallocation`을 명시적으로 선언해야 한다.
  >>
  >> → **`deallocation`** 를 skip한다면, **Memory Leak(메모리 누수)** 발생. 
  >
  >**32bit OS**에서는 일반적으로 약 **2GByte** 의 힙 영역을 할당 가능.
  >
  >> `heap`은 `stack`에 비해 memory 영역이 크기 때문에, 
  >>
  >> `heap`에는 대량의 data를 저장.
  >>
  >> `stack`에는 data를 가리키는 `pointer` 변수를 저장하여 사용.

  

* **`data`**

  > `data`에는  `global variable`, `static variable`, `array`, `struct` 등이 저장되고, program이 실행될 때 **allocation** 되고 종료될 때 **deallocation**됩니다.
  >
  > `data`는 `bss`와 `data` 영역 두 개로 나뉘어서 존재한다.
  >
  > > `bss` : Not initialized data.
  > >
  > > `data` : Initialized data.



* **`code`**

  > `code`에는 실제 program 동작을 수행하는 `Instruction(명령어)`와 `global constant(전역 상수)`가 저장됩니다. 
  >
  > > `Instruction` : CPU에서 순차적으로 실행되는 함수와 연산 구문.
  > >
  > > `global constant` :  `“ “` 로 선언된 문자열 상수나 `const` 접두어가 붙은 변수
  >
  > 이 영역은 Read only로 변경되지 않습니다.

> Ref :  https://gracefulprograming.tistory.com/22 