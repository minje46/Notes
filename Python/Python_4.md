### Python notions_4
***

## 1. Iterator 
* It is possible **to deal with each data** such as **collection** what is list, set, dictionary or **seqence** what is string. <br>**Iterable objet** is called which **is dealed with every each data** in for loop. 
<br>(List, set, dictionary�� ���� collection �Ǵ� string�� ���� ���� sequence ���� for�� ���� data�� �Ѱ��� ó���� �� �ִµ�, <br>�̷��� �ϳ� �ϳ� ó���� �� �ִ� collection, sequence���� iterabe ��ü��� �θ���.)

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
<br>(���� �Լ� iter()�� ```iter(iterable object)```ó�� ���Ǿ�, Iterable ��ü�� iterator�� return�Ѵ�. <br>Iterable ��ü���� ���� Iteration�� �����ϴ� ���� iterator�μ�, iterator�� next �޼��带 ���� ���� element�� �����´�. <br>�� �̻� next element�� ������ StopIteration Exception�� �߻���Ų��.)
> In python2, ```iterator object.next()``` <br>In python3, ```iterator object.__next__()```

* If **class makes iterable itself**, ```__iter__()``` method **must be implemented.** <br>```__iter__()``` method **returns** iterator which is able to be **class itself** or other **new customed thing.** <br>Additionally, ```__next__()```  method also **must be implemented.** That's because **iterable oject uses ```__iter__()``` method** for **getting iterator** that it calls next() method.
<br>(Class�� iterable�� �̿��ϱ� ���ؼ��� �ش� class�� iterator�� return�ϴ� ```__iter__()``` �޼��带 �ۼ��ؾ� �Ѵ�.<br>```__iter__()``` �޼��尡 return�ϴ� iterator�� �ش� class ��ü�� �� ���� �ְ�, ���Ӱ� �ۼ��� iterator class�� ��ü�� �� ���� �ִ�. <br>����, Iterator�� �Ǵ� class�� ```__next__()``` �޼��带 �����ؾ� �Ѵ�.<br>���� for ������ iterable ��ü�� ����ϸ�, �ش� iterable�� ```__iter__()``` �޼��带 ȣ���Ͽ� iterator�� ������ �� iterator�� next() �޼��带 ȣ���Ͽ� ������ ���� �Ǳ� �����̴�.)

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
<br>(Generator �Լ��� �Լ� ���ο� yield�� ����Ͽ� data�� �ϳ��� return�ϴ� �Լ��̴�. <br>Generator �Լ��� ȣ��Ǹ�, ������ ����Ǿ��� yield�� �������� �� ���� yield ���� ���� ������ ����Ǵ� �����̴�. <br>Generator �Լ��� ������ �Ҵ��ϰԵ� ��쿡��, ������ generator class ��ü�� �ȴ�.)

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
> <br>(List, set �� ���� collection�� ���� iterator�� �ش� collection�� �̹� ��� ���� ������ �ִ� ��� ����� ����������, <br>Generator�� ��� data�� ���� ���� ���¿��� yield�� ���� �ϳ��� data�� ����� �����´ٴ� �������� �����Ѵ�)

* **Generator can use simply with using ```yield``` inside**, otherwise Iterator must implement ```__iter__()```, ```__next__()``` inside class.
<br>(Generator�� class ���ο� ```__iter__()```, ```__next__()```�� �����ؾ� �ϴ� Iterator�� �ٸ��� �Լ� ���ο� ```yield```��� Ű���常 ����Ͽ� �����ϰ� �̿��� �� �ִ�.)

* When ```yield``` is used, it **yields execution of code to outside** generator class.
<br>(```yield```�� ����ϸ� ���� �Լ� �ٱ����� �����ϸ鼭 �ڵ� ������ �Լ� �ٱ��� �纸�Ѵٴ� �����̴�.)


## 3. Generator expression
* .
<br>()

<br></br><br></br><br></br>

