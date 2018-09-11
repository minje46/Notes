### Basic theories

------

## Types of Communication mode(통신방식)

- **Simplex(One-way)** is communication mode which **has only one channel** to transmit data **in one way.**

  <br>(단방향 회선은 하나의 회선을 가지고 한 방향으로만 데이터의 전송이 이루어지는 전송방식을 말한다.)

- **Half-duplex** is communication mode which **has two channels** to transmit data **in round way** though, it is **impossible** to trasmit and response **at the same time.**
  <br>(이중회선은 두개의 회선을 가지고 양방향으로 전송이 가능하지만, 송신과 수신이 동시에 불가능한 전송방식이다.)

- **Full-duplex** is communication mode which **has tow channels** to transmit data **in round way** though, it is **possible** to transmit and response **at the same time.**
  <br>(이중 회선을 가지고 양방향으로 전송이 가능한 전송방식이다.)



------

## Types of data Switching system(데이터 교환 방식)

- **Circuit Switching System** uses and **keeps one channel** to connect each other **during end of transmission and response.** <br>**The strength is high utility of fast transmission with high quality.**

  <br>(회선 교환방식은 송신과 수신의 과정에서 하나의 통신 경로를 미리 연결하여 통신이 종료될 때까지 회선을 유지시키는 방식이다. <br> 회선 교환방식의 장점은 고품질과 고속전송에 매우 효율적이라는 점이다.)

- **Message Swtiching System stores data in message and transmit message.** So it is **possible to use communication channels efficiently** though, **real time communication is impossible.**
  <br>(메시지 교환방식은 축적 및 교환 방식에 의해 메시지를 저장한 후 전송하므로 통신회선의 효율적 사용이 가능하지만 실시간 통신은 불가능하다.)

- **Packet Switching System** transmit and response packet which has fixed length between physical devices. <br>The Packet switching system is combination of message switching system and circuit switching system and it is **possible to transmit high speed and change of protocol.**

  <br>(패킷 교환방식은 각 교환기들이 물리적인 전송매체 상에 일정한 길이를 가지는 패킷을 전송하는 방식이다. <br>패킷 교환 방식은 회선 교환 방식과 메시지 교환 방식을 결합한 방식으로 패킷 단위의 고속 처리로 실시간 전송이 가능하며, 프로토콜 변환이나 전송 속도 변환 또한 용이하다.)