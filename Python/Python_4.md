### Python notions_4
***

## 1. Iterator 
* It is possible **to deal with each data** such as **collection** what is list, set, dictionary or **seqence** what is string. <br>**Iterable objet** is called which **is dealed with every each data** in for loop. 
<br>(List, set, dictionary와 같은 collection 또는 string과 같은 문자 sequence 등은 for을 통해 data를 한개씩 처리할 수 있는데, <br>이렇게 하나 하나 처리할 수 있는 collection, sequence들을 iterabe 객체라고 부른다.)

Ex 1)
```
# List Iterable
for num in [1,2,3]:
   print(num)

# String Iterable
for char in "Hello Python":
   pirnt(char)
```
* Inner method iter() is used as ```iter(iterable object)``` so it **returns iterator of iterable object.** <br>**Iterator is real executable thing of Iterable object** and iterator **gets element using next method.** <br>If there is no more next element, it raises StopIteration Exception.
<br>(내장 함수 iter()는 ```iter(iterable object)```처럼 사용되어, Iterable 객체의 iterator를 return한다. <br>Iterable 객체에서 실제 Iteration을 실행하는 것은 iterator로서, iterator는 next 메서드를 통해 다음 element를 가져온다. <br>더 이상 next element가 없으면 StopIteration Exception을 발생시킨다.)
> In python2, ```iterator object.next()``` <br>In python3, ```iterator object.__next__()```

* If **class makes iterable itself**, ```__iter__()``` method **must be implemented.** <br>```__iter__()``` method **returns** iterator which is able to be **class itself** or other **new customed thing.** <br>Additionally, ```__next__()```  method also **must be implemented.** That's because **iterable oject uses ```__iter__()``` method** for **getting iterator** that it calls next() method.
<br>(Class를 iterable로 이용하기 위해서는 해당 class의 iterator를 return하는 ```__iter__()``` 메서드를 작성해야 한다.<br>```__iter__()``` 메서드가 return하는 iterator는 해당 class 객체가 될 수도 있고, 새롭게 작성된 iterator class의 객체가 될 수도 있다. <br>또한, Iterator가 되는 class는 ```__next__()``` 메서드를 구현해야 한다.<br>실제 for 루프에 iterable 객체를 사용하면, 해당 iterable의 ```__iter__()``` 메서드를 호출하여 iterator를 가져와 그 iterator의 next() 메서드를 호출하여 루프가 돌게 되기 때문이다.)

Ex 2)
```
class example_collection:
   def __init__(self):
       self.size = 5
       self.data = list(range(self.size))
   
   def __iter__(self):
       self.index = 0
       return self

   def __next__(self):
       if self.index >= self.size:
           raise StopIteration

       n = self.data[self.index]
       self.index += 1
       return n

   col = example_collection()
   for x in col:
       print(x)
```

## 2. Generator & Yield
* **Generator function has yield** in it for dealing with every each data. <br>If **generator function is called**, it will be **moved to yield conditions** which is **next from previous yield.** <br> Additionally, when you **allocate generator function** to variable, this **variable is generator class object.**
<br>(Generator 함수는 함수 내부에 yield를 사용하여 data를 하나씩 return하는 함수이다. <br>Generator 함수가 호출되면, 직전에 실행되었던 yield문 다음부터 그 다음 yield 문을 만날 때까지 실행되는 구조이다. <br>Generator 함수를 변수에 할당하게될 경우에는, 변수는 generator class 객체가 된다.)

Ex 1)
```
# Generator function
def gen():
   yield 1
   yield 2
   yield 3

# Generator object
gen = gen()
print(type(gen))
# <class 'generator'>

# Using next() method
n = next(gen)
print (n)          # 1
n = next(gen)
print (n)          # 2
n = next(gen)
print (n)          # 3

# Using for loop
for x in gen():
   print (x)
```
> When **iterator is used for collection** such as list and set, **collection has all of data** though **Generator is able to be used** that's becaues **yield can get every each data without having all of data set.** 
> <br>(List, set 과 같은 collection에 대한 iterator는 해당 collection이 이미 모든 값을 가지고 있는 경우 사용이 가능하지만, <br>Generator는 모든 data를 갖지 않은 상태에서 yield에 의해 하나씩 data를 만들어 가져온다는 차이점이 존재한다)

* **Generator can use simply with using ```yield``` inside**, otherwise Iterator must implement ```__iter__()```, ```__next__()``` inside class.
<br>(Generator는 class 내부에 ```__iter__()```, ```__next__()```를 구현해야 하는 Iterator와 다르게 함수 내부에 ```yield```라는 키워드만 사용하여 간단하게 이용할 수 있다.)

* When ```yield``` is used, it **yields execution of code to outside** generator class.
<br>(```yield```를 사용하면 값을 함수 바깥으로 전달하면서 코드 실행을 함수 바깥에 양보한다는 개념이다.)


## 3. Generator expression
* .
<br>()

<br></br><br></br><br></br>

