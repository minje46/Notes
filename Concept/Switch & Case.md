## `switch-case`

* **`switch-case`**

  >`swtich-case`는 **jump statement**를 기반으로, 특정 조건에 따라 algorithm을 분류할 때 사용한다.
  >
  >​	→  `switch-case`문은 입력된 input 값을 통해 `case`(특정위치)로 jump하는 구조.	
  >
  >​	→ `switch-case`문을 사용할 수 있는 경우, 모두 `if-else` 문법을 대체 가능.
  >
  >```c++
  >switch(idx)
  >{
  >	case 3:
  >		grantDelete();
  >		//break;
  >	case 2:
  >		grantWrite();
  >		//break;
  >	case 1:
  >		grantRead();
  >		//break;
  >	default:
  >		break;
  >}
  >```
  >
  >→ `break`를 고의적으로 사용하지 않음으로서, `case`등급에 따라 모든 권한을 줄 수 있도록 구현 가능.



* **assembly code**

  >![image](https://user-images.githubusercontent.com/23169707/71640628-e9780c80-2cd0-11ea-878c-f414eae8bce1.png)
  >
  >1. **ecx register 값을 1 감소한다.** 
  >
  >   > 이는 `switch`문에서 대상이 되는 값을 1 감소하는 것.
  >   >
  >   > 이 때, 항상 1을 감소하는 것이 아니라, `case`문에서 가장 작은 값을 ecx register에서 빼는 것.
  >   >
  >   > 이렇게 하면, `switch` 문에서 exc register의 값은 (`case`문의 개수 -1)이 된다.
  >   >
  >   > 이게 바로 `switch` 문에서 사용되는 **jump table**.
  >   >
  >   > 개수가 -1이 되는 이유는 `array`의 시작 index가 0이기 때문이다.
  >
  >2. **`switch` 문에 있는 변수 값과 compare**.
  >
  >   > `switch` 문에 있는 변수 값이 3보다 큰지 확인하는 것.
  >   >
  >   > 만약, 변수 값이 크다면, 충족되는 `case` 문이 없기 때문에 `default`로 **move**.
  >   >
  >   > 이 때, 3과 비교하는 것은 `case` 문에서 가장 큰 값 -1이 3이기 때문이다.
  >
  >3. **`case` 문으로 jump**.
  >
  >   > 충족되는 `case` 문이 있다면, **jump**.
  >   >
  >   > 이 코드에 진입한 후, **jump table**을 확인하고, mapping되어 있는 값으로 **jump**.
  >
  >4. **jump table**
  >
  >   > **jump table**의 크기는 `case` 문의 가장 큰 값 - `case` 문의 가장 작은 값 + 1.
  >   >
  >   > 이러한 **jump table**의 각 원소 값이 **jump label**.
  >   >
  >   > → 이 과정에서, `case` 문이 순차적인 값을 가지지 않는다면 **jump table**을 만들기 위해 memory 낭비가 발생.



* **features**

  > * **pros**
  >
  >   > 1. `switch-case`문은 `if-else`에 비해 성능이 高.
  >   >    → `switch` 문은 `case`의 변수 값을 확인하는 instruction만 필요.
  >   > 2.  확인해야 하는 조건이 많은 경우, `switch` 문이 적합.
  >
  > 
  >
  > - **cons**
  >
  >   > 1. **jump table**을 만드는 overhead.
  >   >    → `case` 문의 개수가 4개 미만이면, **jump table**을 생성하지 않는다.
  >   > 2. `case` 문이 순차적인 값을 가지지 않는다면 **jump table**을 만들기 위해 memory 낭비가 발생.



> [Ref]: blog.naver.com/PostView.nhn?blogId=kki2406&logNo=80041410085