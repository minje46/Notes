### C++ notions
<u></u>
1. namespace
- namespace is able to set specific name's space for distinguishing functions have same names.
<br>(동일한 이름의 method를 구분하기 위해 name의 공간을 만들고 관리해주어, methods를 구별 가능하도록 하였다.)
- C Language
```
#include <iostream>

void function(void)
{
   std::cout<<"A의 method"<<std::endl;
}

void function(void)
{
   std::cout<<"B의 method"<<std::endl;
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
      std::cout<<"A의 method"<<std::endl;
   }
}

namespace B
{
   void function(void)
   {
      std::cout<<"B의 method"<<std::endl;
   }
}

int main(void)
{
   A::function();
}
```
- The notion of namespace is that it names specific space
- Normally we use "std::cin"" is also kind of namespace. 
<br>(std라는 이름공간 안에 존재하는 cin을 참조하겠다는 의미로 사용되는 것.)</br>
- ```::val``` can access gloabal variable.
<br>(```::```을 사용함으로써, C++ 에서는 전역변수를 call 한다는 의미를 가진다.)</br>
<br></br><br></br><br></br>
2. using
- using defines namespace and makes utility of namespace higher.
<br>(using은 이름공간에서 선언된 공간을 using 한다는 의미로, namespace 내부의 것을 이용할 때, 매번 namespace:: 로 참조해야 했던 문제점을 해결시켜준다.)</br> 
```
#include <iostream>

namespace A
{
   void function(void)
   {
      std::cout<<"A의 method"<<std::endl;
   }
}
using namespace A;
int main(void)
{
   function();
}
```
- With ```using namespace std;```, It is possible to use just ```cout<<"Hello world""<<endl```  
