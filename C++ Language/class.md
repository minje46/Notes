### C++ notions
***
#  Class
1. Making user's own data type with data and function is **class.** And Making object based on class means **instance.** 
<br>(Data와 function을 사용자 정의 자료형으로 정의하는 것을 Class化 라고 하며, Class를 이용한 객체 생성을 객체化, Instance化라고 한다.) 

2. Universally, **class** is defined on **header file**(.h)
<br>- **External defining** of class which was defined on header file it on **cpp file**(.cpp)
<br>- **Reference header file** which user needs on main.cpp file
<br>(header file (.h)에 class 를 정의.
<br>cpp file(.cpp)에 header file 에서 정의한 class의 method 외부정의.
<br>main.cpp file 에서 필요한 class의 header file을 참조(선언)하여 필요에 맞게 사용.)

3. The only difference between struct and class is default type. The default type of class is **private** otherwise struct is **public.**
<br>(class와 struct의 유일한 차이점은 default로 멤버의 변수를 class는 private, struct는 public으로 갖는다.)

4. If constructor uses dynamic allocation in class, it will be allocated in **heap memory.** Otherwise, other class members will be allocated in **stack memory.**
<br>It is going to increase the utility of memory space. But the important thing is **destructor** should be used after finishing usage of dynamic memory for **avoiding memory leaking.**
<br>(class내부의 생성자를 통해 동적할당을 받을 경우, class를 통해 생성되는 객체의 memory는 stack영역에 할당되는 반면, 
동적할당의 메모리공간은 heap 영역에 저장되어 메모리 공간을 효율적으로 활용할 수 있다.
그러나, 생성자 내부의 동적할당한 메모리 공간을 해제해주지 않으면 메모리 누수(유출)현상이 발생하게 되고 
이를 위해, 공간을 해제해주는 소멸자가 필요하게 된다.)

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
<br>(public type의 data는 모든곳에서 접근 및 이용이 가능하지만, 이 때문에 컴퓨터가 오류없는 코드로 인식하고 이는 추후에 에러를 고치는데 매우 큰 어려움을 가질 수 있는 요소가 된다. 이때문에 private, protected처럼 data의 접근 제한을 두게된다.)

6. **Encapsulation** means classify related data and functions altogether.
<br>(캡슐화는 근래에 상속보다 더 중시되는 개념으로, Y2K 문제를 통해 드러난 전역번수 사용의 위험성과 변경의 high cost가 든다는 이유가 캡슐화의 유용성과 중요성을 대두시켰다.)

7. **friend** makes private's member access from outside of class. But friend is rarely used thesedays.
<br>(friend 선언을 통해 private으로 선언된 멤버 변수의 접근을 허용할 수 있다. frined선언은 객체지향에서 중요시하는 "Information hiding에 위배되는 결과를 초래하기 때문에 주로 사용되지 않는다.)

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
