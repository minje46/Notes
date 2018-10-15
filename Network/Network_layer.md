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
  > ```
  >  → **It is based on 1 : 1 connection and it checks ACK. And it also has responsible for retransmission.**
  > ```
  >
  > > ACK : It means success of getting data. 
  >
  > UDP 
  > 	→ **It based on 1 : n , 1 : 1 connection. But it doesn't transmit ACK so it hasn't responsible for responsible.**
  >
  > ```
  > → **It is used as small amount of data transmission.**
  > 
  > → **It is also used for avoiding overhead of ACK.**
  > ```

- Network layer

  → Do check the destination of packet(data) and route the path.
  (Checking success of transmission is worked on transport layer.

  > > The packet is called as **Datagram** in application layer.
  >
  > IP(Internet Protocol) : It defines rule for making sure of message transmission on internet.
  >
  > ```
  > → It is able to read inside of packet for dealing with addressing and routing. 
  > ```
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

