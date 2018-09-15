### Basic follow of network_1.

------

## Basic concepts

- **When data is transmitting,** data i s transmitted by byte stream. And this data is not transmitted at once, **it is handled by packet.**

  > * Packet : Usually **packet** has 1500byte and it **includes data which is separated by size.** So it should have **header which includes essential data such as IP, destination ip, TCP** and so on.
  >
  >   	→ Data is separated by packet and **it causes overhead** though, the reason **why using packet is it is easy to handle with failure of data transmission.**

- **Protocol is rule of communication on network.** The reason **why using protocol** is there are **a lot of different type things** on network and it should transmit each other. That's why the **rule and system is needed. **

  >Protocol defines structure, meaning and communication rule though, it is independant with method of compile.



* **FTP(File Transfer Protocol) is rule of data transmission on network.**

  >  → FTP makes two connections between server and client based on TCP connection.
  >
  > >  FTP has two ports
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

## Network layer

- Application layer

  → Do support network application.

  > > The packet is called as **Message** in application layer.
  >
  > HTTP(Hyper Text Transfer Protocol) : It is protocol of WWW website.
  >
  > DNS : Change host name to IP address.

- Transport layer

  → Checking data is transmitted well or not. 
  (If not, it is gonna be transmitted again.)

  > > The packet is called as **Segment** in application layer.
  >
  > TCP (Transmission Control Protocol) : It **defines rule of  message** for data packet transmission between devices.
  >
  > 	 → **It is based on 1 : 1 connection and it checks ACK. And it also has responsible for retransmission.**
  >
  > > ACK : It means success of getting data. 
  >
  > UDP 
  > 	→ **It based on 1 : n , 1 : 1 connection. But it doesn't transmit ACK so it hasn't responsible for responsible.**
  >
  > 	→ **It is used as small amount of data transmission.**
  >	
  > 	→ **It is also used for avoiding overhead of ACK.**

- Network layer

  → Do check the destination of packet(data) and route the path.
  (Checking success of transmission is worked on transport layer.

  > > The packet is called as **Datagram** in application layer.
  >
  > IP(Internet Protocol) : It defines rule for making sure of message transmission on internet.
  >
  > 	→ It is able to read inside of packet for dealing with addressing and routing. 
  >
  > > - Processing delay : The routing time of packet's destination in router.
  > > - Queuing delay : The waiting time of packet because there are bunch of packets in router buffer.
  > > - Transmission delay : The total time of packet transmission because packet is transmitted by bit through the link.
  > > - Propagation delay : The transmission time of packet through the link because the length of link is different.

- Link layer

  → Do transmit data in real.

  > > The packet is called as **Frame** in application layer.

- Physical layer

  → Do convert data (digital & analogue) and transmit in physical way.





------

## HTTP & Socket

- **HTTP connection** has structure that **client requests** something to server and **server response** requested things.

  > HTTP uses TCP and HTTP is stateless. 
  >
  > > Server just reponses requested things without recording anything.

  → At first, client initiates TCP connection to HTTP server.

  → *If TCP connection came to correctly at port 80, HTTP server accepts connection and notifying client.*

  → And then, client sends HTTP request message(containing URL) into TCP connection socket.

  → *If HTTP server receives request message, response message containing requested object into its socket.*

  → In transport layer of client, check the message and sends ACK.

  → *When server gets ACK, HTTP server closes TCP connection.*

  → Finally, client receives response message containing html file and is possible to see on client's application.

  > * Non-persistent HTTP : After server responses message, **closing the TCP connection.**
  > * Persistent HTTP : After server responses message, **keep the TCP connection** for considering that client requests message again. 

- **Web socket**  is developed for handling with problem of HTTP communication. So it **maintains connection** befroe quit and **assure duplex.**

  >Socket plays a role of **interface between application layer and transport layer.**

  → At first, client and server **do handshake** with HTTP communication.

  → And then, it **upgrades web socket communication** after getting success of handshaking.

  → It is used in high traffic envirionment with short delay.

-  **HTTP** connection vs. **Socket** connection

  → **HTTP doesn't keep connection** between client and server after data transmission.

  → **The reason why disconnection is avoiding overhead of server.**

  → **Socket do keep connection** between client and server before quick intentionally.

  → **It is used on real time system** because it is efficient keeping connection than doing reconnection.





------

## Cookie & Session

- **Cookie & Session is used for complementing HTTP's disadvantages.** 

  > * Connectionless : After server responses message, **server will close the connection.**
  > * Stateless : After closing the connection, **server won't remember any data of client.**

- **Cookie is small data file has key and data stored in client's local memory space.**

  > → Cookie stores name, value, path, expired date and so on. 
  >
  > → Cookie is able to store data for a while such as login data.
  >
  > > * Cookie Process
  > >   1. Client requests message to server.
  > >   2. *Server responses message with cookie.*
  > >   3. Client gets requested message and stores cookie data in local memory space.
  > >   4. Client requests message to server again with cookie file together.
  > >   5. *Server checks cookie file and is able to keep client's state.*
  >
  >  Ex) 
  >
  >  	1. When web site asks whether user will store id and password or not. 
  >      → It means saving login data as cookie or not.
  >  	2. When web site asks Don't you wanna see this pop up anymore?
  >      → It means saving the condition in cookie. 

- **Session is technology of keeping web browser's state.**

  > → Session has unique id which is sent to client.
  >
  > → Checking this seesion id when web browser requests sth to server, and keeping web browser's state before web browser finishes.
  >
  > > * Session Process
  > >   1. Client requests message to server.
  > >   2. *Server gives and stores unique Session ID with responsig message.*
  > >   3. Client stores this session ID in cookie.
  > >   4. Client requests message to server again with cookie file and session ID together.
  > >   5. *Server checks session ID in cookie and is able to identify who client is.*
  >
  > Ex) 
  >
  > 1. When web site keeps log-in state after user log-in at first.
  >    → It means that server can identify who client is using session ID.

- **Differences between cookie and session.**

  > > * Memory space
  > >
  > >   → Cookie is stored in client's local memory space.
  > >
  > >   → *Session is stored in server's memory space.*
  >
  > > * Security
  > >
  > >   → Cookie can be changed easily because it is managed in client's memory space.
  > >
  > >   → *Session can be protected because it is managed in server's memory space.*
  >
  > > * Life cycle
  > >
  > >   → Cookie has expired date though, it is stored as file. So the data is still existed after web browser is finished.
  > >
  > >   → Cookie file can set expired data.
  > >
  > >   → *Although session also set expired data, it will be deleted after web browser is finished.*
  >
  > > * Speed
  > >
  > >   → Cookie has data and it is handled during reqeusting message. So it is fast.
  > >
  > >   → *Session is stored in server so it should be handled during responsing message. So it is slow relatively.* 
  >
  > >  **The reason why using cookie mainly is that session is managed and stored in server.**
  > >
  > > → Server should deal with other client's reqeusts at the same time. 
  >
  > > * Cache
  > >
  > >   → Cache stores image, css, js file and so on.
  > >
  > >   → Cache is stored in user's web browser.
  >
  > **The main point is cache and cookie and session are totally different.**





------

## My Summay

1. User가 web browser(chrome, edge)를 이용해서 url(http://www.google.com)을 입력.

2. Socket을 통해 transport layer와 접근하고 TCP connection을 server에게 요청.
3. Server가 TCP connection에 대한 response.
4. TCP connection이 되었으니, client 가 url을 server에 request.
5. Server가 url 에 해당하는 html file, js 등의 data 와 Cookie, session ID를 response.
6. Client 가 message를 확인하고 ACK(data를 잘 받았다는)을 return.
7. Server가 connection을 끊는다.
8. User가 입력한 url을 web browser를 통해 이용.