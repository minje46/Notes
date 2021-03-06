# Bit field

- **Bit field is one of structure's special usage to control data memory.**
  <br>(비트 필드는 비트 별로 데이터를 다룰 수 있도록 해주는 구조체의 문법에서 특별한 사용법이다.)

  >  → Bits를 member로 하는 struct라고 할 수 있다. 

- Example

  > ```c++
  > struct Flags {
  >     unsigned int a : 1;     // a는 1비트 크기
  >     unsigned int b : 3;     // b는 3비트 크기
  >     unsigned int c : 7;     // c는 7비트 크기
  > };
  > 
  > int main()
  > {
  >     struct Flags f1;    // 구조체 변수 선언
  > 
  >     f1.a = 1;      //   1: 0000 0001, 비트 1개
  >     f1.b = 15;     //  15: 0000 1111, 비트 4개
  >     f1.c = 255;    // 255: 1111 1111, 비트 8개
  > 
  >     printf("%u\n", f1.a);    // 1:1, 비트 1개만 저장됨
  >     printf("%u\n", f1.b);    // 7:111, 비트 3개만 저장됨
  >     printf("%u\n", f1.c);    // 127: 111 1111, 비트 7개만 저장됨
  > }
  > ```
  >
  > → Struct 내의 variable의 memory를 bit로 direct하게 선언해준 것.
  >
  > * Result
  >
  > ```c++
  > 1
  > 7
  > 127
  > ```
  >
  > → Byte가 아닌 bit로 memory가 설정되는 것이 point.
  >
  > ![image](https://user-images.githubusercontent.com/23169707/51810889-52ecd100-225f-11e9-864e-a1e5aeee3153.png)


