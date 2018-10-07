### C++ notions
***
#  Vector
* Vector container is array can **allocate memory automatically** with having stack's concept which has FIFO.
  <br>(Vector container는 자동으로 메모리가 할당되는 배열이라 볼 수 있으며, Stack과 유사한 개념을 가지고 있다.) 
* **Vector is dynamic array** so it is **set with variable** and **allocated in a sequence.** It is also possible to **access with index.**
  <br>(Vector는 동적배열이라 볼 수 있으며, memory를 변수로 설정할 수 있고 연속된 공간에 저장된다. 이 때문에서 index를 통한 접근이 가능하다.)
* Vector header file을 추가해서 사용해야 하며, 선언은 **-vector<[data type]>[변수이름]** 으로 한다.
  <br>Ex) ```vector<int> value```
* The difference between vector and array is **adding new element dynamically** and **size is changeable.**
  <br>(Vector와 Array의 차이는 동적으로 원소를 추가할 수 있으며, 크기가 자동으로 늘어난다는 것이다.)
* Constructor.
  <br>```vector<int> value ``` is constructing empty vector.
  <br>```vector<int> value(5)``` is counstructing vector with default value(0) which can store 5 values.
  <br>```vector<int> value(5,2)``` is constructing vector with default value(2) which cans store 5 values.
  <br>```vector<int> value2(value1)``` is constructing vector with copying vectore which name is value1.
* Methods.
  <br>```begin()``` returns beginning iterator.
  <br>```end()``` returns end iterator.
  <br>```push_back(element)``` pushes the value rear of value in vector.
  <br>```pop_back()``` pops the last value in vector.
  <br>```front()``` returns first value in vector.
  <br>```back()``` returns last value in vector.
  <br>```empty()``` returns boolean value whether it is empty or not.
  <br>```size()``` returns the number of values in vector.



### 

------

# Vector_STL

- The **STL** means **standard C++ library** and it **provides data structure and algorithm as template** to use easily in program. 

  <br>(STL이란, 표준 C++ 라이브러리를 뜻하며, 프로그램에 필요한 자료구조와 알고리즘을 템플릿으로 제공하는 라이브러리다.)

  > Elements of STL (STL의 구성요소)
  >
  > * Container : Object(객체)를 저장하는 object 또는 data structure(자료구조)라고 하며, class template으로 구현되어 있다. 
  >
  >   > → Container 는 collection이라고 부르기도 하며, **동일한 것들을 모아 놓는 장소**라 생각하면 된다. type이 같은 object의 집합을 저장하고 관리하는 역할.
  >
  >   > * Sequence container : 자료의 **선형적인 집합**이며, 자료를 **저장하는 것을 main**으로 하는 것.
  >   >
  >   > ex) `array`, `vector`, `list`, `deque`
  >   >
  >   > * Associative container : 자료를 **일정한 규칙에 따라 조직화**하여 관리하는 방법.
  >   >
  >   > ex)  `set`, `multiset`, `map`, `multimap`
  >   >
  >   > * Adapter container : Sequence의 변형된 형태로서, **자료를 미리 정해진 일정한 방식에 따라 관리**한다.
  >   >
  >   > ex) `stack`, `queue`, `priority_queue`
  >   >
  >   > **→ Insertion & Deletion의 규칙에 차이가 존재.**
  >
  > * Iterator : Pointer와 유사한 개념으로 container의 element(원소)를 가리키며, 가리키는 element에 접근하여 다음 element를 가리키는 기능.
  >
  >   > **→ Generalization이 되어 있어, container에 따라 일반화시켜 사용하기 편하다.**
  >
  > * Algorithm : Sorting, Delete, Search, Computing 등을 해결하는 일반화된 방법을 제공하는 function template.
  >
  > * Function object : Function처럼 동작하는 object로서, operator() 연산자를 overloading 한 object이다. 주로 container 와 algorithm 등에 클라이언트 정책을 반영하게 한다.
  >
  > * Container adaptor : 구성요소의 interface를 변경하여 새로운 interface를 갖는 구성요소로 변경한다.
  >
  >   > Container adpator : `stack`, `queue`, `priority_queue`
  >
  > * Allocator : Container의 memory 할당 정책을 캡슐화한 class object로 모든 container는 자신만의 allocator를 가지고 있다.



  ------

  > Strength of STL (STL의 장점)
  >
  > 1. Generalization(일반화)를 지원 : 하나의 algorithm을 통해 여러 개의 container에 동일한 작업을 동일한 방법으로 수행할 수 있다.
  > 2. Compile time mechanism을 사용하기 때문에 효율 저하가 거의 없다.
  > 3. Not OOP(객체지향) : Object를 사용하지만, STL 자체가 object를 반드시 요구하는 것은 아니다.
  > 4. Scalability(확장성) 가능



  ------

  > Weakness of STL (STL의 단점)
  >
  > 1. Template 기반이라 type에 따라 function과 class가 매번 구체화되어 code가 비대해지는 고질적인 문제. (약간의 속도 향상을 위해 크기를 완전히 포기한 형태)
  > 2. STL로 작성한 code는 가독성이 떨어진다. (Source가 난해해서 team project에 불리)
  > 3. Hard to learn and use.
  > 4. Template을 사용하기 때문에, (try-catch)와 같이 사용이 힘들다.