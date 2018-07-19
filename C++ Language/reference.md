### C++ notions
***
#  1. reference
- reference defines nickname of existed value's name.
<br>(Reference는 변수의 별명을 정의해주는 개념으로, 레퍼런스와 변수는 생성되는 방법에 있어서만 차이를 보일 뿐, 일단 만들어지고 나면 완전히 같은 것으로 볼 수 있다.)

- Example 1)
```
int main(void)
{
   int val = 1;

   int *pVal = &val;   // val 변수의 주소값을 얻기 위해 & 연산자 사용.
   int &rVal = val;   // Reference 선언을 하기 위해 & 연산자 사용.
}
```

- Example 2)
```
int main(void)
{
   int val = 1;
   int &ref = val;
   
   val++;
   std::cout << val << ref << std::endl;

   ref++;
   std::cout << val << ref << std::endl;
}
```
- Results are ```2, 2``` and ```3, 3```.
- After reference is created, reference and variable can be handled totally samely.
- Originally, It is only possible to make a name of variable in C language.
<br> Otherwise, It is possible to make couple of names including nicknames of variable in C++ language. 
<br>(기존에는 변수라는 것은 메모리 공간에 할당된 이름을 의미한다고 이해했고, C언어에서는 하나의 메모리 공간에 하나의 이름을 부여할 수 있었다.)</br>
<br>(그러나, C++ 에서는 reference(단순히 메모리의 주소값을 저장하는것이 아닌)라는 개념을 도입하면서, 하나의 메모리 공간에 여러개의 이름을 부여할 수 있도록 했다. )</br>

- Difference between variable and reference is making progress.
<br>Variable makes name of new memory space though, refrence makes nickname of existed memory space. </br>

***
# 2. call by reference
- Pointer(*)
```
#include<iostram>

void swap(int *a, int *b)
{
   int temp = *a;
   int *a = *b;
   int *b = temp;
}

int main(void)
{
   int num1 = 10;
   int num2 = 20;

   std::cout << num1 << std::endl;
   std::cout << num2 << std::endl;

   swap(num1, num2);
   std::cout << num1 << std::endl;
   std::cout << num2 << std::endl;
}
```
- The results are ```10, 20``` and ```20 and 10```.
- When we use pointer, we can access memory space directly where pointer has reference of variable. But using pointer,
wrong memory access problem will be arised easily
<br>(포인터를 이용하면, 포인터가 가리키고 있는 메모리 공간에 직접 접근이 가능하다. 그러나 포인터는 포인터 연산이 가능하기 때문에 잘못된 메모리 접근을 할 가능성이 높다는 단점이 존재한다.)</br>

<br><br>
- Reference(&)
```
#include<iostram>

void swap(int &a, int &b)
{
   int temp = a;
   int a = b;
   int b = temp;
}

int main(void)
{
   int num1 = 10;
   int num2 = 20;

   std::cout << num1 << std::endl;
   std::cout << num2 << std::endl;

   swap(num1, num2);
   std::cout << num1 << std::endl;
   std::cout << num2 << std::endl;
}
```
- The results are ```10, 20``` and ```20 and 10```.
- When we use refernce, we can access memory space directly with different name of existed variable(memory space). But the problem of using call by reference is that it is hard to distinguish between call by value and call by variable on code.
<br>(레퍼런스를 사용하면 main 함수에서 지정했던 memory space에 다른 이름을 설정하여 접근하는 것이기에 pointer와 유사하게 memory space에 직접적인 접근을 할 수 있고 pointer 연산은 불가능하기에 기존 pointer의 단점을 해결할 수 있다.<br>그러나 call by reference를 사용하면 코드상에서는 call by value와 형태가 동일하여 구분하기 힘들다는 단점이 존재한다.)</br>
<br><br></br></br>

**- The biggest merit of reference is saving memory space. When using call by value, all of data are copied though, 
using call by reference, all of data can be accessed directly.
<br>(레퍼런스를 사용하면 기존에 설정한 memory space에 직접 접근하는 것이기 때문에, 별도로 data를 복사하지 않고 직접 접근이 가능하다는 장점이 존재한다.)</br>**
<br></br><br></br><br></br>
