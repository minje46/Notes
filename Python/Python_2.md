### Python notions_2
***
## 1. Access modifiers (���� ������)
* There is no access modifiers in python though, **__ is treated as private**, **_ is treated as protected** for developers universally. 
<br>(Python���� ���������ڰ� ���� �������� ������, __ �� private����, _ �� protected�� �����ڵ鳢�� ��������� ����Ѵ�. ) 

* **@property** is used to solve the class encapsulation problem in python because there is no access modifier and it **makes method as field** to use instead of get, set method which plays role of access to objects. 
<br>(@property�� ���������ڰ� ���� ������ Ŭ������ ĸ��ȭ�� ����ٴ� �������� �ذ��ϱ� ���� ����ϸ�, get, set �Լ��� ���������� ������ִ� �ͺ��� ���� ������� ����ڰ� method�� fieldó�� ����ϰ� ������ش�. )

ex 1)
```
@property
def color(self):
   return self._color

@color.setter
def color(self, value):
   self._color = value
```

* When **@property** is used, it is possible **to access field of object.**
<br>(@property�� ����ϸ�, ```.color = "red"``` �� ���� ��ü�� �Ӽ� ���� �����ϵ��� protected ������ ������ �� ������, �����δ� method ȣ���� ���� ��ü�� �Ӽ��� �����ϴ� ������ ĸ��ȭ�� ������ �ذ����ش�.)

## 2. Module
* Module **stores global variables and methods** on python for saving all of data on text file.
<br>(Module�� Python���� �ۼ��� ���α׷��� �����ϱ� ���� text file�� �����ϴ� ������� ��������, �Լ� ���� �����ϰ� �ִ� file�̶� �� �� �ִ�.)

ex1) First.py
```
name = "kwak"

def introduce():
   print(name);
```

* When importing this way ```import module```, it should be used ```module.method``` like ```import First``` and ```First.introduce()```. 

* When importing this way ```from module import *``` or ```from module import method```, it is possible to use every thing except _method(It is treated as private on Python even though there is no private concept in.) without using module name. like ```from First import *``` and ```introduce()```.

## 3. Package
* Package is **structing directory with modules.**
<br>(Package�� module�� directory�������� ����ȭ �� ���� ���ϸ�, �� directory ���ο��� ```_init_.py``` ������ �ݵ�� �����ؾ� �Ѵ�.)

* When importing ```import package```, all modules of packages are imported though, all modules of low level's packages are not imported so it should be imported directly when it is needed like ```package.module```.



