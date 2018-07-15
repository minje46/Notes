### C++ notions
<u></u>
1. namespace
- namespace is able to set specific name's space for distinguishing functions have same names.
<br>(������ �̸��� method�� �����ϱ� ���� name�� ������ ����� �������־�, methods�� ���� �����ϵ��� �Ͽ���.)
- C Language
```
#include <iostream>

void function(void)
{
   std::cout<<"A�� method"<<std::endl;
}

void function(void)
{
   std::cout<<"B�� method"<<std::endl;
}

int main(void)
{
   function();
}
```

- C++ Language
```
#include <iostream>

namespace A
{
   void function(void)
   {
      std::cout<<"A�� method"<<std::endl;
   }
}

namespace B
{
   void function(void)
   {
      std::cout<<"B�� method"<<std::endl;
   }
}

int main(void)
{
   A::function();
}
```
- The notion of namespace is that it names specific space
- Normally we use "std::cin"" is also kind of namespace. 
<br>(std��� �̸����� �ȿ� �����ϴ� cin�� �����ϰڴٴ� �ǹ̷� ���Ǵ� ��.)</br>
- ```::val``` can access gloabal variable.
<br>(```::```�� ��������ν�, C++ ������ ���������� call �Ѵٴ� �ǹ̸� ������.)</br>
<br></br><br></br><br></br>
2. using
- using defines namespace and makes utility of namespace higher.
<br>(using�� �̸��������� ����� ������ using �Ѵٴ� �ǹ̷�, namespace ������ ���� �̿��� ��, �Ź� namespace:: �� �����ؾ� �ߴ� �������� �ذ�����ش�.)</br> 
```
#include <iostream>

namespace A
{
   void function(void)
   {
      std::cout<<"A�� method"<<std::endl;
   }
}
using namespace A;
int main(void)
{
   function();
}
```
- With ```using namespace std;```, It is possible to use just ```cout<<"Hello world""<<endl```  
