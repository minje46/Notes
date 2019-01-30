# C++ [Grammar]

### ◆ RValue

------

- **`RValue` calls not copy but move instruction.**
  <br>(`RValue`는 우측값이라고도 불리며, 이동 생성자를 호출하도록 한다.)

  > * 우측값
  >
  >   → Temporarily 생성되는 value.

- Example

  > ```c++
  > void Ex1()
  > {
  >     std::vector<Test> vec;
  >     vec.push_back(Test(1, 2, "3"));
  > }
  > ```
  >
  > → `RValue`가 없을 경우, (1,2,"3")의 값을 vector에 저장하기 위해서 <Test>라는 object를 생성하고, 그 다음에 parameter로 전달하기 위해 copy 생성자를 호출한다. 
  > 그리고 vector에 `push_back` 함수 안에서 value가 insert될 때, Test object가 다시 한번 copy가 일어나고 push_back 함수가 끝날 때, object가 파괴되는 과정을 거친다.
  >
  > → <Test>라는 object를 vector에 insert하기 위해서 object를 두번이나 copy하고 delete하는 과정이 발생했다.
  >
  > → `RValue`를 사용할 경우, copy가 아닌 move를 호출하기 때문에, parameter로 사용하기 위한 <Test> object를 한 번만 생성해도 value를 insert할 수있다.



------

### ◆ emplace

------

- **Using `emplace`, it could skip the <object>.**
  <br>(`emplace`를 사용하면, <Object>의 선언을 skip할 수 있다.)

- Example

  > ```c++
  > void Ex2()
  > {
  >     std::vector<Test> vec;
  >     vec.push_back(Test(1, 2, "3"));
  >     vec.emplace_back(1, 2, "3");
  > }
  > ```
  >
  > → vector가 <Test>의 vector라는 것은 선언과 동시에 알 수 있기 때문에, emplace를 사용해서 이를 skip할 수 있다.
  >
  > → `emplace_back` 함수를 사용하면, compiler가 vector가 vector<Test>라는 것을 바탕으로 <Test>의 생성자 중에서 `1,2,"3"`을 parameter로 받을 수 있는 것을 찾아서 내부에서 생성시켜준다. 이는 가변인자 templete이라는 새로운 문법 때문에 가능해진 것이다.
  >
  > → `RValue`를 사용한 `push_back`을 호출할 경우, 생성자 호출 뒤에 move함수가 호출되지만, `emplace_back`을 사용할 경우, 아예 함수 내부에서 instance를 생성하므로 move 함수가 호출되지 않는다.



------

### ◆ auto

------

- **`auto` provides inferring variable's data type automatically.**
  <br>(`auto` 은 변수의 데이터 타입을 자동으로 추론해주는 기능을 한다.)

- Example

  > ```c++
  > void Ex3()
  > {
  >     std::vector<Test> vec;
  >     for(std::vector<Test>::iterator it = vec.begin(); it != end(); ++it)
  >         //sth code.
  > }
  > ```
  >
  > → `iterator`를 사용할 경우, `std::vector<Test>::iterator`를 typing 해야하는 불편함이 존재했다.
  >
  > ```c++
  > void Ex4()
  > {
  >     std::vector<Test> vec;
  >     for(auto it = vec.begin(); it != end(); ++it)
  >         //sth code.
  > }
  > ```
  >
  > → `auto`를 사용할 경우, 변수 초기화 값을 보면 data type을 알 수 있기 때문에 자동으로 data type을 선택해준다.
  >
  > → `auto`는 초기값을 지정하는 변수 선언에만 사용을 할 수 있다.



------

### ◆ range for loop

------

- **`for(auto it:vec)` can simplify the grammar of loop. But, it couldn't access the it's variable that's because it is copied.**
  <br>(`for(auto it : vec)` 을 사용해서 loop 문을 간단화 시킬 수 있다. 그러나, it의 값은 copy된 것으로 it 값을 바꿀 수 없다.)

- Example

  > ```c++
  > void Ex5()
  > {
  >     std::vector<Test> vec;
  >     for(auto it : vec)
  >         //sth code
  > }
  > ```











