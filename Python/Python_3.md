### Python notions_3
***

## 1. Asterisk
* In Python, the meaning of *(asterisk) is getting **parameter as tuple** data type.
<br>(Python���� *�� method�� �ԷµǴ� ���� ������ �� �� ���� �� ����ϸ�, *args ���·� �Ű������� �����Ѵ�. ��, *�� �ǹ̴� tuple���·� �Ű������� �ްڴٰ� �����Ѵٴ� �ǹ��̴�.) 
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
<br>(Python���� **�� *�� ����������, �Ű������� �ԷµǴ� ������ ������ dictionary�� �ްڴٰ� �����Ѵٴ� �ǹ��̴�.) 
<br><br>Ex2)
```
def print_args(**klist):
    print(klist)

print_args(p1="1", p2="2", p3="3")
```

## 2. Try / Except / Finally / Raise
* **try-except is used for handling with error** in program. <br> At first, program is compiling in try block and if there is any error, it will be changed to except block to deal with error in try block. 
<br>(Program���� error�� �߻����� ��, error�� ó���ϱ� ���� try-except���� ����� �� �ִ�. 
<br>try ���� �����ϴٰ� error�� �߻��ϸ� except ���� ����Ǵ� ������ ������.) 

* Additionally, **finally block is working at last** whether try block is working or except block is working.
<br>(�߰������� finally ���� �̿��� �� �ִµ�, finally ���� try ���� ���������� ����Ǿ, error�� �߻��Ͽ� except ���� ����Ǿ ������� �׻� �������� ����Ǵ� ������ ������.)

* When developer uses **raise block**, it is possible to **make his own error** though it is hard to read if it is used too much.
<br>(raise block�� �̿��Ͽ� �����ڰ� ������ error�� �߻���ų �� ������, ���� ����ϸ� �ڵ带 �м��ϱ� ������� �� �ִ�.)

<br></br><br></br><br></br>
