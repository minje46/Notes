# Terminoloy

### Basic concepts

------

- **When data is transmitting,** data i s transmitted by byte stream. And this data is not transmitted at once, **it is handled by packet.**

  > - Packet : Usually **packet** has 1500byte and it **includes data which is separated by size.** So it should have **header which includes essential data such as IP, destination ip, TCP** and so on.
  >
  >   → Data is separated by packet and **it causes overhead** though, the reason **why using packet is it is easy to handle with failure of data transmission.**

- **Protocol is rule of communication on network.** The reason **why using protocol** is there are **a lot of different type things** on network and it should transmit each other. That's why the **rule and system is needed. **

  > Protocol defines structure, meaning and communication rule though, it is independant with method of compile.



- **FTP(File Transfer Protocol) is rule of data transmission on network.**

  > → FTP makes two connections between server and client based on TCP connection.
  >
  > > FTP has two ports
  > >
  > > → prot 20 : For data transfer / port 21 : For control
  >
  > → Client and Server communicate messages through control connection port. 
  >
  > → When file transfer is needed, trasferring data file through data transfer port. (out of band)
  >
  > > Out of band : Separate control port and data transfer port.
  > >
  > > In band : Requesting and responsing are managed through one port.



------

## About network & link layer

- **Ethernet은** 원칙적으로 하나의 인터넷 회선에 유/무선 통신장비 공유기, 허브 등을 통해 **다수의 시스템이 랜선 및 통신포트에 연결되어 통신이 가능한 네트워크 구조**를 말한다. 일반적으로 LAN(Local Arean Network) 근거리 통신망이라는 표현을 하며, 가장 많이 사용하는 ethernet 표준이라고 볼 수 있다.

  > Ethernet은 data가 인터넷 회선에서 충돌하지 않고 여러대의 PC가 통신 회선을 공유하여 안정적이고 효율적으로 통신할 수 있게 하는 기능을 한다.
  >
  > > - CSMA / CD (Carrier Sense Multiple Access / Collision Detection)
  > >
  > > → Sender는 케이블의 신호와 이력을 확인하고 다른 host에게 신호가 흐르고 있지 않음을 확인 후 전송을 시작한다.
  > >
  > > → 전송 중에도 파형에 의해 다른 host의 송신과 충돌하지 않는지를 감시하며, 만약 충돌이 발생하는 경우에는 일정량의 전송 후 중단하고 각 보낸 host 마다 일정 시간의 delay를 가지고 재전송을 시작한다.
  > >
  > > Ex) 하나의 회선을 다수가 공유하거나, 많은 data를 다운로드 하게 되면 속도가 느려지는 이유가 자체적으로 CSMA/CD 방식으로 control이 이루어지기 때문에 delay가 발생하는 것이다.

- ![switch route](https://user-images.githubusercontent.com/23169707/46937197-8aae7f00-d09b-11e8-821d-dd96c7f4d967.gif)

- **Switch는 Link layer에 위치하며 MAC address를 control하고 self learning을 통해 store and forward를 한다.**

  > - Self learning - Link 가운데에 transparent하게 위치하며 link를 통해 지나가는 packet을 확인하며 source address와 input link의 data를 추출하고 스스로 table을 store 해주는 것을 말한다.

- **Router는 Network layer에 위치하며 IP address를 control하고 routing protocol 및 algorithm을 통해 packet을 store and forward 한다.**

  > - Routing 
  >
  >   → Routing이란, routing algorithm을 이용하여 forwarding table을 만드는 작업이다. 
  >
  >   → Routing table은 network 전반적으로 A→B로 가는 route를 작성한 table이라고 이해한다.
  >
  >   > Routing table은 network state에 따라 갱신되어야 한다.
  >
  > - Forwarding
  >
  >   → Forwarding이란, forwarding table을 참조하여 destination에 mapping된 출력 port로 packet을 이동시키는 작업이다.
  >
  >   → Forwarding table은 destination 주소(Ethernet에서는 IP address)와 출력 port number가 저장되어 있다.
  >
  >   > Forwarding은 packet의 A→B 이동 중에 path를 찾아가는 단편적인 작업이라고 이해한다. 

- **ARP는 IP address와 MAC address 사이에서 translation 역할을 하는데 ARP table을 control 하며 IP address와 MAC address를 mapping하여 IP address를 통해 destination을 찾을 경우 MAC address는 알 수 없기 때문에 ARP table을 참조하여 mapping 된 값을 알아낼 수 있다.** ARP table에 mapping이 되어 있지 않거나 IP address가 변경된 경우에는 broadcast를 통해 subnet의 전체 host에게 MAC address를 request하고 reply를 통해 table을 update해준다.