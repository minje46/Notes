### C++ notions
***
#  Vector
* Vector container is array can **allocate memory automatically** with having stack's concept which has FIFO.
<br>(Vector container�� �ڵ����� �޸𸮰� �Ҵ�Ǵ� �迭�̶� �� �� ������, Stack�� ������ ������ ������ �ִ�.) 

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



<br></br><br></br><br></br>
