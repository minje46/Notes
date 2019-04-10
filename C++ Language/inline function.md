# inline function

------

- **`inline` function is inserted as function code inside program when it compiles.**
  <br>(`inline` 함수는 컴파일될 때, 함수 코드가 프로그램 코드 내부에 삽입되도록 하는 기술이다.)

  >  → Program performance를 향상시키기 위함이다.
  >
  > > * General function
  > >
  > >   → 일반적인 function이 프로그램 실행 중에 호출되면, 해당 함수의 주소로 jump하고 함수의 처리가 종료되면 다시 원래 자리로 돌아오는 방식이다. 
  > >   이 경우, 함수 호출 전의 주소와 호출한 함수의 주소를 기억해야하기 때문에 시간이 많이 소요된다.
  >
  > → inline function의 경우, 프로그램 내부에 function code가 삽입되기 때문에, compiler가 function call이 아닌, function code를 바로 실행할 수 있기에 High speed를 가진다.

- Example

  > ```c++
  > inline void function()
  > {
  >     return;
  > }
  > ```
  >
  > →  Programmar가 inline을 선언해도 compiler가 inline을 accept/refuse를 할 수 있다.
  >
  > → Function의 수행 시간이 짧고, 빈번하게 호출되는 경우가 아니라면 절대적인 시간 절약은 크지 않다.
  >
  > → Memory 사용 관점에서 general function 보다 불리하다.

------

### 