### C++ notions

------

# Function Pointer

- **Function pointer** is that pointer **stores the memory of function.**
  <br>(함수 포인터란, 특정 포인터 변수가 함수에 대한 메모리 주소를 담는 것을 말한다.)

  >* Advantage of function pointer
  >
  >  1. Code is simple.
  >  2. Array is able to store and cortrol the function pointer. It decrease the code duplication.
  >  3. It is used as call back method.
  >
  >* Example
  >
  >  Function pointer : `int (*FunctPtr) (int, float)` 
  >
  >  Function : `int add(int a, float b)`
  >
  >  Using : `FunctPtr = add` or `FunctPtr = &add`