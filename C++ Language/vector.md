### C++ notions
***
#  Vector
* Vector container is array can **allocate memory automatically** with having stack's concept which has FIFO.
  <br>(Vector container�� �ڵ����� �޸𸮰� �Ҵ�Ǵ� �迭�̶� �� �� ������, Stack�� ������ ������ ������ �ִ�.) 
* **Vector is dynamic array** so it is **set with variable** and **allocated in a sequence.** It is also possible to **access with index.**
  <br>(Vector�� �����迭�̶� �� �� ������, memory�� ������ ������ �� �ְ� ���ӵ� ������ ����ȴ�. �� �������� index�� ���� ������ �����ϴ�.)
* Vector header file�� �߰��ؼ� ����ؾ� �ϸ�, ������ **-vector<[data type]>[�����̸�]** ���� �Ѵ�.
  <br>Ex) ```vector<int> value```
* The difference between vector and array is **adding new element dynamically** and **size is changeable.**
  <br>(Vector�� Array�� ���̴� �������� ���Ҹ� �߰��� �� ������, ũ�Ⱑ �ڵ����� �þ�ٴ� ���̴�.)
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

  <br>(STL�̶�, ǥ�� C++ ���̺귯���� ���ϸ�, ���α׷��� �ʿ��� �ڷᱸ���� �˰����� ���ø����� �����ϴ� ���̺귯����.)

  > Elements of STL (STL�� �������)
  >
  > * Container : Object(��ü)�� �����ϴ� object �Ǵ� data structure(�ڷᱸ��)��� �ϸ�, class template���� �����Ǿ� �ִ�. 
  >
  >   > �� Container �� collection�̶�� �θ��⵵ �ϸ�, **������ �͵��� ��� ���� ���**�� �����ϸ� �ȴ�. type�� ���� object�� ������ �����ϰ� �����ϴ� ����.
  >
  >   > * Sequence container : �ڷ��� **�������� ����**�̸�, �ڷḦ **�����ϴ� ���� main**���� �ϴ� ��.
  >   >
  >   > ex) `array`, `vector`, `list`, `deque`
  >   >
  >   > * Associative container : �ڷḦ **������ ��Ģ�� ���� ����ȭ**�Ͽ� �����ϴ� ���.
  >   >
  >   > ex)  `set`, `multiset`, `map`, `multimap`
  >   >
  >   > * Adapter container : Sequence�� ������ ���·μ�, **�ڷḦ �̸� ������ ������ ��Ŀ� ���� ����**�Ѵ�.
  >   >
  >   > ex) `stack`, `queue`, `priority_queue`
  >   >
  >   > **�� Insertion & Deletion�� ��Ģ�� ���̰� ����.**
  >
  > * Iterator : Pointer�� ������ �������� container�� element(����)�� ����Ű��, ����Ű�� element�� �����Ͽ� ���� element�� ����Ű�� ���.
  >
  >   > **�� Generalization�� �Ǿ� �־�, container�� ���� �Ϲ�ȭ���� ����ϱ� ���ϴ�.**
  >
  > * Algorithm : Sorting, Delete, Search, Computing ���� �ذ��ϴ� �Ϲ�ȭ�� ����� �����ϴ� function template.
  >
  > * Function object : Functionó�� �����ϴ� object�μ�, operator() �����ڸ� overloading �� object�̴�. �ַ� container �� algorithm � Ŭ���̾�Ʈ ��å�� �ݿ��ϰ� �Ѵ�.
  >
  > * Container adaptor : ��������� interface�� �����Ͽ� ���ο� interface�� ���� ������ҷ� �����Ѵ�.
  >
  >   > Container adpator : `stack`, `queue`, `priority_queue`
  >
  > * Allocator : Container�� memory �Ҵ� ��å�� ĸ��ȭ�� class object�� ��� container�� �ڽŸ��� allocator�� ������ �ִ�.



  ------

  > Strength of STL (STL�� ����)
  >
  > 1. Generalization(�Ϲ�ȭ)�� ���� : �ϳ��� algorithm�� ���� ���� ���� container�� ������ �۾��� ������ ������� ������ �� �ִ�.
  > 2. Compile time mechanism�� ����ϱ� ������ ȿ�� ���ϰ� ���� ����.
  > 3. Not OOP(��ü����) : Object�� ���������, STL ��ü�� object�� �ݵ�� �䱸�ϴ� ���� �ƴϴ�.
  > 4. Scalability(Ȯ�强) ����



  ------

  > Weakness of STL (STL�� ����)
  >
  > 1. Template ����̶� type�� ���� function�� class�� �Ź� ��üȭ�Ǿ� code�� ��������� �������� ����. (�ణ�� �ӵ� ����� ���� ũ�⸦ ������ ������ ����)
  > 2. STL�� �ۼ��� code�� �������� ��������. (Source�� �����ؼ� team project�� �Ҹ�)
  > 3. Hard to learn and use.
  > 4. Template�� ����ϱ� ������, (try-catch)�� ���� ����� �����.