### Python notions_3
***

## 1. Asterisk
* In Python, the meaning of *(asterisk) is getting **parameter as tuple** data type.
<br>(Python에서 *는 method에 입력되는 변수 개수를 알 수 없을 때 사용하며, *args 형태로 매개변수를 설정한다. 즉, *의 의미는 tuple형태로 매개변수를 받겠다고 지정한다는 의미이다.) 
<br><br>Ex1)
```
def add(*args):
    total=0
    for i in args:
        total+=i
    return total

print(add(1, 2, 3, 4))
```

* In Python, the meaning of **(double asterisk) is getting **parameter as dictionary** data type.
<br>(Python에서 **는 *와 유사하지만, 매개변수에 입력되는 데이터 형식을 dictionary로 받겠다고 지정한다는 의미이다.) 
<br><br>Ex2)
```
def print_args(**klist):
    print(klist)

print_args(p1="1", p2="2", p3="3")
```

## 2. Try / Except / Finally / Raise
* **try-except is used for handling with error** in program. <br> At first, program is compiling in try block and if there is any error, it will be changed to except block to deal with error in try block. 
<br>(Program에서 error가 발생했을 때, error를 처리하기 위해 try-except문을 사용할 수 있다. 
<br>try 블럭을 실행하다가 error가 발생하면 except 블럭이 실행되는 구조를 가진다.) 

* Additionally, **finally block is working at last** whether try block is working or except block is working.
<br>(추가적으로 finally 블럭을 이용할 수 있는데, finally 블럭은 try 블럭이 정상적으로 실행되어도, error가 발생하여 except 블럭이 실행되어도 상관없이 항상 마지막에 실행되는 구조를 가진다.)

* When developer uses **raise block**, it is possible to **make his own error** though it is hard to read if it is used too much.
<br>(raise block을 이용하여 개발자가 정의한 error를 발생시킬 수 있지만, 많이 사용하면 코드를 분석하기 어려워질 수 있다.)

<br></br><br></br><br></br>
