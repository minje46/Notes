### Basic theories

------

## What is Rsync?

- **Remote synchronization is tool and network protocol of data synchronous transmission** between two computers. And **Rsync compares different part(modified part)** between two computers and **trasmit those parts.**

  <br>(Rsync란, 서로 다른 두 컴퓨터에 들어 있는 정보를 서로 동기화 시킬때 사용하는 툴이며 동시에 네트워크 프로토콜이다. Rsync는 두 컴퓨터 사이에 서로 다른부분(수정된 부분)을 비교해서 옮겨주는 방식이다. )

- For synchronization **using change of file size and time,** it also **uses delta encoding algorithm** to have **high speed of transmission and data synchronization efficiently.**
  <br>(동기화를 하기 위해서 파일크기의 변화나 시간의 변화, 수정한 부분을 찾아내는 알고리즘등을 이용하며, 네트워크 대역폭을 최소화 하는 델타 인코딩 알고리즘을 이용해 전송을 하고 빠르고 효율적으로 데이터를 동기화 할 수 있다.)

  > Checking only modification of files is not perfect all the time even though it consumes only small amout of cpu resources.
  >
  > Using checksum can solve this problem though, it makes speed slow and needs lots of resources.
  >
  > > * Rolling hash​	
  > >
  > >   A **rolling hash** (also known as recursive hashing or rolling checksum) is a hash function where the input is hashed in a window that moves through the input. 
  > >
  > >   → Ex) 문자열 abcdefgh에서 문자열 bcd를 찾기 위해 character 하나씩 비교하는 것이 아닌, bcd의 hash value를 구하고 문자열을 abc부터 3개 단위로 hash value를 구해서 search하는 것.

- There are **client and server altogether in Rsync package** so **it should use ssh protocol.**
  <br>(Rsync 패키지에는 client와 server 프로그램이 모두 포함되어 있기 때문에 SSH 프로토콜을 기반으로 사용해야 한다.)

  > * SSH
  >
  >   SSH(Secure Shell Protocol)은 network protocol 중 하나로서 컴퓨터가 인터넷과 같은 public network를 통해 서로 통신을 할 때 보안적으로 안전하게 통신을 하기 위해 사용하는 protocol이다.
  >
  >   → SSH는 **data transmission(데이터 전송)**을 위해 사용하는데, git hub와 같은 원격 저장소로 data를 push할 때 ssh를 활용해 file을 전송하게 된다.
  >   → SSH는 **Remote control(원격 제어)**를 위해 사용되는데, AWS의 instance server에 접속하여 command 하기 위해 ssh를 통해 접속을 해야한다.
  >
  >   → Basically, SSH를 사용하는 이유는 network를 통해 통신을 하는 경우 data의 보안을 위해 훨씬 안전한 channel을 구성하고 data를 교환 한다.
  >
  >   > * Public key & Private key
  >   >
  >   >   → Public key는 공개되어도 비교적 안전한 key로 public key를 이용하여 msg를 전송하기 전 암호화를 한다. (public key는 암호화는 가능하지만, 복호화는 불가능하다.)
  >   >
  >   >   → Private key는 절대 외부에 노출이 되어서는 안되는 key로 본인의 컴퓨터 내부에 저장하게 되어있다. 이 private key를 이용하여 암호화된 msg를 복호화 할 수 있다.
  >   >
  >   >   → 컴퓨터가 서로 통신을 할 때, 먼저 public key를 통신하고 컴퓨터에 복사하여 저장을 한다. 그리고 client에서 request 할 때 response 하는 server에 복사되어,
  >   >
  >   >   client 와 server의 public key와 쌍을 이루는 private key와 비교를 하여 서로 한 쌍의 key인지 판단한다.
  >
  > * Telnet
  >
  >   Telnet이란, TCP/IP 기반의 protocol로 원격 시스템을 자신의 시스템처럼 사용할 수 있게 하는 원격 터미널 접속 서비스이다.
  >
  >   → Telnet은 NVT를 통해 terminal과 host와의 1:1 connection을 제공한다.
  >
  >   → Telnet은 모든 data를 terminal을 통해 transmission하기 때문에, ID/password와 같은 data가 노출된다.
  >
  >   > * NVT(Network Virtual Terminal)
  >   >
  >   >   → Telent protocol을 이용하여 local system과 remote system의 version과 data 형식이 다를 수 있기 때문에, 원활한 통신을 위해 data를 변환시켜주는 가상장치.
  >
  >   > * Process of telnet
  >   >
  >   > 1. Client가 remote control을 하기 위해 remote system에 TCP connection(port number : 23)을 request.
  >   > 2. Remote system은 connection된 client에게 NVT를 제공.
  >   > 3. Client는 local terminal처럼 사용. (실제로는 remote system의 terminal에 접근하는 것.)
  >   > 4. NVT를 통해 request받은 명령을 remote system에서 실행하고 결과를 resoponse 해준다.
  >
  > * Telnet & SSH
  >
  >   → Telnet은 data를 byte stream형식으로 transmission. 
  >
  >   > The security of telent is vulnerable.
  >
  >   → SSH는 DES, RSA등 고급 encryption을 통해 transmission.
  >
  >   > It provides encryption and compression together so it will be small overhead compared to telnet.

- **The advantages of Rsync** are that it is **able to copy and synchronize efficiently** and **get extra data** such as link and permission. <br>Furthermore, it **works quickly and efficiently** because it only transmits differences and **uses small bandwidth** because of using data compression during transmission and response.
  <br>(Rsync는 원격 시스템으로 부터 파일을 효율적으로 복사하거나 동기화 할 수 있으며, Link와 permission등 파일의 부가정보도 복사할 수 있다. <br>또한, 파일의 차이점만 전송하기 때문에 빠르고 효율적으로 작동하기 때문에 scp보다도 더 빠르며, 데이터를 압축해서 송/수신하기 때문에 더 적은 대역폭을 사용한다.)

  > > * SCP(Secure CoPy) & RCP(Remote CoPy)
  > >
  > >   → These are used for copying data in remote.
  > >
  > >   → SCP should use with ssh for security.
  > >
  > >   → RCP doesn't have restriction for using. It provides copying data in remote.
  >
  > > * Mirroring
  > >
  > >   → 원래 Mirroring은 H/D에 저장되어 있는 data를 copy해 놓는 것을 의미한다.
  > >
  > >   → Mirror는 computing에서 자료 모음의 복사본이며, mirroring은 file 동기화의 일종으로 볼 수 있다. 
  > >
  > >   → 최근에 종종 사용되고 있는 web site에서 mirroring 기술은 기존의 web site를 copy하여 mirror site를 제공한다. 이를 통해 Client가 web site에 빠르게 접근할 수 있도록 해준다. 
  > >
  > >   (Mirroring의 목적인 Back up과는 거리가 멀다.)


