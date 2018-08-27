### C++ notions
***
#  Vector
* Vector container is array can **allocate memory automatically** with having stack's concept which has FIFO.
<br>(Vector container는 자동으로 메모리가 할당되는 배열이라 볼 수 있으며, Stack과 유사한 개념을 가지고 있다.) 

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



<br></br><br></br><br></br>
