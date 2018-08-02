### Python notions_2
***
## 1. Access modifiers (접근 지정자)
* There is no access modifiers in python though, **__ is treated as private**, **_ is treated as protected** for developers universally. 
<br>(Python에는 접근지정자가 원래 존재하지 않지만, __ 은 private으로, _ 은 protected로 개발자들끼리 통상적으로 사용한다. ) 

* **@property** is used to solve the class encapsulation problem in python because there is no access modifier and it **makes method as field** to use instead of get, set method which plays role of access to objects. 
<br>(@property는 접근지정자가 없기 때문에 클래스의 캡슐화가 힘들다는 문제점을 해결하기 위해 사용하며, get, set 함수를 개별적으로 만들어주는 것보다 편한 방법으로 사용자가 method를 field처럼 사용하게 만들어준다. )

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
<br>(@property를 사용하면, ```.color = "red"``` 를 통해 객체의 속성 값에 접근하듯이 protected 변수에 접근할 수 있지만, 실제로는 method 호출을 통해 객체의 속성에 접근하는 것으로 캡슐화의 문제를 해결해준다.)

## 2. Module
* Module **stores global variables and methods** on python for saving all of data on text file.
<br>(Module은 Python에서 작성된 프로그램을 보존하기 위해 text file로 저장하는 방법으로 전역변수, 함수 등을 저장하고 있는 file이라 볼 수 있다.)

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
<br>(Package는 module을 directory형식으로 구조화 한 것을 말하며, 각 directory 내부에는 ```_init_.py``` 파일이 반드시 존재해야 한다.)

* When importing ```import package```, all modules of packages are imported though, all modules of low level's packages are not imported so it should be imported directly when it is needed like ```package.module```.



