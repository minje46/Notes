------

## What is API?

- **API is the way how to transfer the data between applications.**
  <br>(API는 어떠한 응용프로그램에서 데이터를 주고 받기 위한 방법을 의미한다.)

- **API (Application Programming Interface**
  
> - Interface
  >   → 물건을 조작하기 위한 디자인을 뜻함.
  >
  >   > ex) Keyboard, Mouse, Remote control, Touch screen
  >
> - Programming Interface
  >
  >   → Program을 이용할 때 쓰는 Interface로서, 기계가 이해하기 쉽게 입출력이 data로 구성.
  >
  >   > Human interface와는 반대 개념. 
  >   > (위의 keyboard는 사람을 위한 interface.)
  >
  > - Application
  >   → 응용프로그램. (=Program.)
  >
  > `∴ Application의 programming을 위한 interface라고 할 수 있으며, program을 위한 interface로서 data를 입출력으로 사용한다는 것.`
  
- Example

  > * **날씨 API**
  >
  >   - Web site
  >
  >     > 1. Web browser 실행
  >     > 2. Web site 접속
  >     > 3. Location & Day 검색
  >     > 4. Weather 확인
  >
  >   - API (개발 중인 program에서 weather data 필요한 경우.)
  >
  >     > 1. Program에서 해당 API에 `Loaction & Day 전달`
  >     > 2. 해당 API에서 `Weather 응답`
  >     >
  >     > → 해당 Web site가 API를 제공해야 하는 전제조건.
  >
  > * **Smartphone game**
  >
  >   > 카카오톡에 게임 친구 추가 요청이 온 경우.
  >   >
  >   > → Game에서 카카오톡 API를 사용해 친구추가 msg 보낼 것을 requset.
  >
  > `∴ Program 사이에서 communication을 담당하는 기능.`

-  **API는 해당 program의 기능을 다른 program이 쓸 수 있게 하는 것이 목적.**

  > <img width="390" alt="API" src="https://user-images.githubusercontent.com/23169707/65437253-730c7880-de5e-11e9-878d-ff3f89e0fc8c.png">
  >
  > → 특정 데이터를 공유할 경우 **어떠한 방식**으로 정보를 **request**해야 하는지, 그리고 **어떠한 데이터**를 **response** 받을 수 있을지에 대한 규격들을 API라 한다.

- `API는 Application program에서 사용할 수 있도록, OS 와 programming language에게 제공하는 Interfase(규격)을 의미합니다.` 
