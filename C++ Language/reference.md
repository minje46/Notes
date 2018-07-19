### C++ notions
***
#  1. reference
- reference defines nickname of existed value's name.
<br>(Reference�� ������ ������ �������ִ� ��������, ���۷����� ������ �����Ǵ� ����� �־�� ���̸� ���� ��, �ϴ� ��������� ���� ������ ���� ������ �� �� �ִ�.)

- Example 1)
```
int main(void)
{
   int val = 1;

   int *pVal = &val;   // val ������ �ּҰ��� ��� ���� & ������ ���.
   int &rVal = val;   // Reference ������ �ϱ� ���� & ������ ���.
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
<br>(�������� ������� ���� �޸� ������ �Ҵ�� �̸��� �ǹ��Ѵٰ� �����߰�, C������ �ϳ��� �޸� ������ �ϳ��� �̸��� �ο��� �� �־���.)</br>
<br>(�׷���, C++ ������ reference(�ܼ��� �޸��� �ּҰ��� �����ϴ°��� �ƴ�)��� ������ �����ϸ鼭, �ϳ��� �޸� ������ �������� �̸��� �ο��� �� �ֵ��� �ߴ�. )</br>

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
<br>(�����͸� �̿��ϸ�, �����Ͱ� ����Ű�� �ִ� �޸� ������ ���� ������ �����ϴ�. �׷��� �����ʹ� ������ ������ �����ϱ� ������ �߸��� �޸� ������ �� ���ɼ��� ���ٴ� ������ �����Ѵ�.)</br>

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
<br>(���۷����� ����ϸ� main �Լ����� �����ߴ� memory space�� �ٸ� �̸��� �����Ͽ� �����ϴ� ���̱⿡ pointer�� �����ϰ� memory space�� �������� ������ �� �� �ְ� pointer ������ �Ұ����ϱ⿡ ���� pointer�� ������ �ذ��� �� �ִ�.<br>�׷��� call by reference�� ����ϸ� �ڵ�󿡼��� call by value�� ���°� �����Ͽ� �����ϱ� ����ٴ� ������ �����Ѵ�.)</br>
<br><br></br></br>

**- The biggest merit of reference is saving memory space. When using call by value, all of data are copied though, 
using call by reference, all of data can be accessed directly.
<br>(���۷����� ����ϸ� ������ ������ memory space�� ���� �����ϴ� ���̱� ������, ������ data�� �������� �ʰ� ���� ������ �����ϴٴ� ������ �����Ѵ�.)</br>**
<br></br><br></br><br></br>
