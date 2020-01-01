## `if-else`

* **`if-else`**

  >`if-else`는 **branch statement**를 기반으로, 특정 조건에 따라 algorithm을 분류할 때 사용한다.
  >
  >​	→  `if-else`문은 조건이 만족되면 **execute**, 만족하지 않는다면 **ignore** 하는 구조.
  >
  >​	→ `if-else`문을 `switch-case` 문법으로는 대체하는 것이 불가능 할 수 있다.
  >
  >```c++
  >if(idx == 3)
  >    grantDelete();
  >else if(idx == 2)
  >    grantWrite();
  >else if(idx == 1)
  >    grantRead();
  >else
  >    break;
  >```
  >
  >→ `if-else`를 일부 대체할 수 있는 **삼항연산자**가 존재.
  
  
  
* **ternary operator(삼항 연산자)**

  > `if-else` 구조와 유사한 형태로, `?-:`을 통해서 조건을 구분하는 문법.
  >
  > ![image](https://user-images.githubusercontent.com/23169707/71640865-a53b3b00-2cd5-11ea-93b3-445cabb08b3b.png)
  >
  > 
  >
  > ```c++
  > int res = (A > B) ? A : B;
  > // A가 B보다 크다면, A를 저장. 
  > // B가 크다면, B를 저장.
  > ```



* **assembly code**

  >![image](https://user-images.githubusercontent.com/23169707/71640893-17ac1b00-2cd6-11ea-9e68-e4e232f8af85.png)
  >
  >→ 1~4번의 모든 조건문에서 **cmp** 사용.
  >
  >> `if-else`에 충족하는 조건을 확인하기 위해, 매번 **compare** 과정 필요.
  >>
  >> → O(n)의 시간복잡도



* **features**

  > - **pros**
  >
  >   > 1. `if-else`문은 `switch-case`에 비해 memory 효율 高.
  >   >    → **jump table**을 만드는 overhead가 없다.
  >   > 2.  확인해야 하는 조건이 적은 경우, `if` 문이 적합.
  >
  > 
  >
  > - **cons**
  >
  >   > `if`와 `else`에서 조건 충족을 확인하기 위한 instruction이 추가적으로 필요.



> [Ref]: blog.naver.com/PostView.nhn?blogId=kki2406&logNo=80041410085