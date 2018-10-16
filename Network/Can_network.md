### Network notions
***
##  1. Byte & Bit & Endian
* Bit - **The smallest data** unit in computer for operation, transportation, storage and it has binary data only 1 and 0.
  <br>(컴퓨터에서 사용하는 가장 작은 데이터 단위, 하나의 비트는 2진수 1 또는 0으로 표현되어데이터를 처리, 저장, 전송 할 때 사용된다.)

* Byte - It is **quantity of data** and measurement unit for size of data, disk or other storages.
  <br>(Byte는 네트워크를 통해 전송되는 데이터의 양을 표현하며, 데이터 파일의 크기, 디스크 또는 그 외 저장 매체의 공간 등을 표현하는 측정 단위로 1Byte = 8bit이다.)

* Endian - Endian is **arranging method of sequence data** in 1-dimension space such as computer memory. If the big data will be located at first, it is called Big-endian. And if the small data will be located at first, it is called Little-endian.
  <br>(Endian은 computer memory와 같은 1차원의 공간에 여러개의 연속된 대상을 배열하는 방법을 뜻하며, byte를 배열하는 방법(byte order) 또한 Endian이라 할 수 있다. 큰 단위가 앞에 나오는 경우를 Big-endian, 작은 단위가 앞에 나오면 Littel-endian으로 구분할 수 있다.)

* Bitmask - Bitmask is constant which is specific array of bits of variables or operation. It is usually used as standard of calling method.
  <br>(Bitmask란, 변수 혹은 수식에서 원하는 열의 bit만 변경하기 위한 상수를 뜻하며, 주로 특정 함수호출시 약속된 규칙을 넘기기 위해 사용된다.)


##  2. LSB & MSB
* LSB(Least Significant Bit) - It is **the smallest value of bit** and it is located the least position of data. It is used for checksum, hash function and so on that is because if LSB will be change, the whole of data might be changed.
<br>(LSB는 가장 작은 값의 bit로 data의 가장 낮은 위치의 bit를 뜻한다. LSB의 값을 통해서 data가 홀,짝수를 구분할 수 있으며 LSB값이 변경되면 전체 data가 변경되기 때문에 checksum, hash 함수 등에 사용된다.)
> There is no difference between signed char type and unsigned char type.

* MSB(Most Significant Bit) - If data type is unsigned char type, MSB has **the highest position bit.** 
<br>If data type is signed char type, MSB has **sign data** such as '+' or '-'.
<br>(Data type이 unsigned char type일 경우, MSB는 가장 최상위 bit를 뜻한다. 
<br>Data type이 signed char type일 경우, MSB는 부호를 나타내고 이를 통해 양수, 음수를 구분할 수 있다.)
> MSB has different data value depends on data type.

**LSB & MSB are used as Serial communication to send and get bit of data orderly.**



##  3. Serial & Parallel communication (직렬 통신)
* Parallel communication - Parallel communication has **bunch of lines** to communicate each other so it is possible to send and get far more data per time though, it has high cost.
  <br>(병렬 통신은 여러개의 신호선을 이용하여 통신을 하고, 많은 선을 병렬적으로 사용하여 단위 시간당 전송되는 데이터 bit의 양은 많지만, 선의 수가 많은 점 때문에 통신 비용이 크다.)

* Serial communication - Serial communication usually has **one line to communicate** each other so it takes time to send and get data equally though, it needs only a few lines. 
  <br>(직렬 통신은 주로 하나의 신호선을 이용하여 data를 주고받는 통신으로, data 전송은 일정한 시간 간격으로 전송을 하게 된다. 이 때문에 전송에는 많은 시간이 소요되지만 적은 수의 신호선을 이용한다는 장점이 존재한다.)

* Synchronize serial communication - In synchronize serial communication, it uses **sync clock** during communicating data each other. So it decrease error during exchanging data though, it causes line complications.
  <br>(동기 직렬 통신은 data 전송을 할때, 동기 클록을 사용하기 때문에 data 송수신과는 별도의 클록 신호선이 필요하다. 이를 통해 통신의 오류는 줄일 수 있으나, 회로가 복잡해지는 단점이 존재한다.)

* Asynchronize serial communication - In ASYNC serial communication, it only **consists of communication line and control line without any clock lines** so it has simple structure compared to others. But it causes possibilites of data error and it should include extra data for distinguishing other data. With this reason, it makes speed slow.
  <br>(비동기 직렬 통신은 data를 주고받는 통신선과 control선으로만 구성되어 있으며, 별도의 클록선을 배정하지 않아 간단한 회선을 구축이 가능하다. 그러나 통신 회선을 통해서 data 이동 중 data 손실의 위험과 data를 구분하기 위한 처음과 끝에 각종 통신 제어관련 정보를 함께 실어 보내야 한다는 단점이 존재한다. 이 때문에 속도 또한 느리다.) 


##  4. CAN & LIN protocol
* CAN - Controller Area Network is **standard protocol** between micro controller or devices each other without host computer.
<br>(Controller Area Network는 차량 내에서 host 컴퓨터 없이 마이크로 콘트롤러 or 장치들이 서로 통신하기 위해 설계된 표준 통신 규격이다.)

* LIN - Local Interconnect Network is used for sending data **between ECU and actuators.** It has simple structure and slow speed though, it is regulated as standard protocol so it is possible to be used in many types such as systems and units.
<br>(Local Interconnect Network는 주로 ECU와 능동센서 및 능동 Actuator간의 data 전송에 사용되며, 간단한 구조와 느린 속도를 가진것이 특징이다. 또한, LIN은 신호형태 및 protocol이 표준화되어 있어 다수의 시스템 생산 및 부품에서 공용할 수 있다는 장점이 있다. )

* ECU - Electronic Control Unit is able to **control car engine, ABS and so on by computer.** 
<br>(Electronic Control Unit은 자동차의 엔진, 자동변속기, ABS등의 상태를 컴퓨터로 제어하는 전자 제어 장치를 뜻한다.)

<br></br><br></br><br></br>
