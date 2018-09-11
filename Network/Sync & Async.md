### Basic theories

------

## What is Synchronous?

- **Synchronization** is that it **makes same each other** and **Synchronous transmission** is **transmitter and receiver should have same time moment of bit operation.**

  <br>(동기란, 자신과 상대의 정보를 서로 일치시킨다는 것으로, 송신측과 수신측의 각 비트가 동일한 타이밍이 취해져야 하고 이렇게 일치시키는 것을 동기식 전송이라 한다.)

  > Synchrnonus transimission에서 **미리 정해진 수만큼의 문자열**을 한 묶음으로 만들어 한번에 전송하는데, 이렇게 전송단위로 취급되는 data를 **Frame**이라 한다.
  >
  > * Frame은 **Control part**(frame의 시작을 알리는 부분, length of frame, receiver의 주소), **Data part**(user's data), **End part**(data of frame's end)로 구성되어 있다.

- **Synchronous transmission sends data which is set before** and **it works in every clock** between transmit and receive for synchronous transmission.

  <br>(동기식 전송은 한 문자 단위가 아니라 미리 정해진 수 만큼의 문자열을 한 묶음으로 만들어서 한번에 전송하는 방법이다. <br>동기식 전송을 위해서는 데이터와는 별도로 송신측과 수신측이 하나의 기준 클록으로 동기신호를 맞추어 동작하도록 한다.)

- When receiver gets data, **it distinguishes bit of data in clock.** So reciever and transmitter **needs two channels(data, clock).**
  <br>(수신측에서는 클록에 의해 비트를 구별하게 되므로, 동기식 전송을 위해서는 데이터와 클록을 위한 2개의 회선이 필요하며, 송신측에서 2진 데이터들을 정상적인 속도로 전송하면, 수신측에서는 클록의 한 사이클 간경으로 데이터를 인식한다.)

- **The advantage of synchrnous is having high utility of transmission and having same interval between data** though, it also has **disadvantage about expensive price** because it should have bit operation and extra memory.
  <br>(동기식 전송은 전송 효율이 높고 각 문자의 간격이 규칙적이라는 장점이 존재하지만, 수신측에서 비트 계산을 해야하며 문자를 조립하는 별도의 기억장치가 필요하므로 가격이 비싸다는 단점이 존재한다.)

  > Frame 단위로 data를 전송하기 때문에 start bit - stop bit 등의 data를 전송하지 않아도 되기에 overhead가 적은 것이다.

- Blocking I/O Model

  ![sync_blocking](https://user-images.githubusercontent.com/23169707/45291423-1711d300-b52d-11e8-96d5-97e265fec5ae.jpg)

  * Blocking I/O Model 이란, System call이 끝날때까지 프로그램은 대기해야 하고, System call이 완료되면 return 한다는 구조이다.

  * System call이후 대기하는 동안, Waiting queue에 들어가게 된다.

  * Ex) C Language 에서 user의 입력 전에는 대기하고 있는`scanf()`가 간단한 예시이다.

- Synchronous I/O Model
  ![sync](https://user-images.githubusercontent.com/23169707/45291622-a4edbe00-b52d-11e8-9363-b23127b4cacd.jpg)

  *Synchronous transmission should wait for getting results with end of system call.*

  <br>(동기화 전송에서는 System call이 끝날때까지 기다리고 결과물을 가져온다.)

  ###### Blcoking과 Synchronous의 차이점은 waiting queue의 유무 이다.

  > - Synchronous는 system call의 return을 기다리는 동안 waiting queue에 머무를 수 있고 아닐 수 도 있다.
  > - Blocking은 system call의 return을 기다리는 동안 필수적으로 waiting queue에 머무른다.





  ## What is Asynchronous?

- **ASynchronous transmission is sending data by each character** without synchronization.

  <br>(비동기화 전송이란, 송신측과 수신측 사이에 동기를 맞추지 않고 문자 단위로 구분하여 전송하는 것을 말한다.)

- If **asynchronous transmission occurs,** it **sends data with `start bit - data - stop bit` structure.** So it is also able to be synchronization by character though, **the time of sending each data has every different clock.**
  <br>(비동기화 전송을 할 때는 `시작비트 - 문자 데이터 - 정지비트` 구조로 데이터를 전송하고, 한 문자 단위로 동기를 취하는 통식 방식이지만, 각 문자를 송출하는 타이밍은 임의로 주기를 가지기 때문에 비동기라고 한다.)

  > Asynchronous transmission할 때, 문자는 7~8bit로 구성된다.
  >
  > * 1bit : start bit /2~6 bit : data bit / 7~8 bit : stop bit

- **The advantages of asynchronous transmission** has variable data between start bit and stop bit so it is **fit for irregular data** and the **structure between devices is simple** so **price is cheap.** 
  Although it has **disadvantages of high overhead.**

  <br>(비동기화 전송은 시작 비트와 정지 비트 사이의 간격이 가변적이므로 불규칙한 데이터 전송에 적합하고, 필요한 접속장치와 기기들이 간단하여 값이 싸다는 장점이 존재하지만, 시작 비트와 정지 비트의 전송으로 발생하는 오버헤드를 갖는다는 단점이 존재한다.)

- Non-blocking I/O Model.
  ![async_nonblocking](https://user-images.githubusercontent.com/23169707/45293399-0ebc9680-b533-11e8-8f96-583673660d29.jpg)

  * Non-blocking I/O Model에서는 System call이 완료되지 않아도 대기하지 않고 return을 한다.

  * System call 이후 대기하는 과정이 없기 때문에 waiting queue에 들어가지 않는다.

  * 프로그램이 바로 실행될 수 있다는 특징이 존재한다.

- Asynchronous I/O Model

![async](https://user-images.githubusercontent.com/23169707/45293526-64913e80-b533-11e8-8f2b-25f645ec654d.jpg)

*Asynchronous transmission isn't waiting for end of system call and it gets result the system call is finished later.*
<br>(비동기화 전송에서는 System call이 완료되지 않아도 대기하지 않고, 나중에 완료가 될 때 결과물을 가져온다.)

> 주로 Call back 함수를 통해 결과물을 가져온다.
>
> > * What is Call back function?
> >
> >   → **Call back function** is a function which **is passed as an argument to another function(다른 함수의 인자로써 이용되는 함수)** or **is invoked after some kind of event(어떤 이벤트에 의해 호출되어지는 함수).** <br>→ 콜백이 뭔지 잘 모르겠어염..
> >

###### Non blocking 과 Asynchronous의 차이점은 System call이 즉시 return 될 때 data 포함의 유무이다.

> * Asynchronous transmission은 요청이 처리 가능한지 아닌지에 관계없이 응답한다. 이후 OS에서 응답할 준비가 되면 응답한다.
>
> * Non-blocking은 요청을 처리할 수 있으면 바로 응답하고 아닐 경우에는 Error를 반환한다.

 