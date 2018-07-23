### C++ notions
***
#  Class
1. Making user's own data type with data and function is **class.** And Making object based on class means **instance.** 
<br>(Data�� function�� ����� ���� �ڷ������� �����ϴ� ���� Class�� ��� �ϸ�, Class�� �̿��� ��ü ������ ��ü��, Instance����� �Ѵ�.) 

2. Universally, **class** is defined on **header file**(.h)
<br>- **External defining** of class which was defined on header file it on **cpp file**(.cpp)
<br>- **Reference header file** which user needs on main.cpp file
<br>(header file (.h)�� class �� ����.
<br>cpp file(.cpp)�� header file ���� ������ class�� method �ܺ�����.
<br>main.cpp file ���� �ʿ��� class�� header file�� ����(����)�Ͽ� �ʿ信 �°� ���.)

3. The only difference between struct and class is default type. The default type of class is **private** otherwise struct is **public.**
<br>(class�� struct�� ������ �������� default�� ����� ������ class�� private, struct�� public���� ���´�.)

4. If constructor uses dynamic allocation in class, it will be allocated in **heap memory.** Otherwise, other class members will be allocated in **stack memory.**
<br>It is going to increase the utility of memory space. But the important thing is **destructor** should be used after finishing usage of dynamic memory for **avoiding memory leaking.**
<br>(class������ �����ڸ� ���� �����Ҵ��� ���� ���, class�� ���� �����Ǵ� ��ü�� memory�� stack������ �Ҵ�Ǵ� �ݸ�, 
�����Ҵ��� �޸𸮰����� heap ������ ����Ǿ� �޸� ������ ȿ�������� Ȱ���� �� �ִ�.
�׷���, ������ ������ �����Ҵ��� �޸� ������ ���������� ������ �޸� ����(����)������ �߻��ϰ� �ǰ� 
�̸� ����, ������ �������ִ� �Ҹ��ڰ� �ʿ��ϰ� �ȴ�.)

- Example 1)
```
class Person
{
   char *name;
   int age;

public:
   Person(char *name, int age);
   ~Person();
};

Person::Person(char *_name, int _age)
{
   strcpy(name, _name);
   age = _age;
}

Person::~Person()
{
   delete []name;
}

int main()
{
   Person("KWAK", 25);
   return 0;
}
```

5. If all of data are defined with public type, it is easy to access from anywhere though, It also has high possibilities of error because compiler can't distinguish whether public data is error or not. That's why **information hiding** needs.
<br>(public type�� data�� �������� ���� �� �̿��� ����������, �� ������ ��ǻ�Ͱ� �������� �ڵ�� �ν��ϰ� �̴� ���Ŀ� ������ ��ġ�µ� �ſ� ū ������� ���� �� �ִ� ��Ұ� �ȴ�. �̶����� private, protectedó�� data�� ���� ������ �ΰԵȴ�.)

6. **Encapsulation** means classify related data and functions altogether.
<br>(ĸ��ȭ�� �ٷ��� ��Ӻ��� �� �߽õǴ� ��������, Y2K ������ ���� �巯�� �������� ����� ���輺�� ������ high cost�� ��ٴ� ������ ĸ��ȭ�� ���뼺�� �߿伺�� ��ν��״�.)

7. **friend** makes private's member access from outside of class. But friend is rarely used thesedays.
<br>(friend ������ ���� private���� ����� ��� ������ ������ ����� �� �ִ�. frined������ ��ü���⿡�� �߿���ϴ� "Information hiding�� ����Ǵ� ����� �ʷ��ϱ� ������ �ַ� ������ �ʴ´�.)

- Example 2)
```
class Person
{
   char *name;
   int age;

   friend void setAge(Person &p, int age);
};

void setAge(Person &p, int age)
{
   p.age = age;
}

int main()
{
   Person p;
   setAge(p, 20);
   return 0;
}
```
