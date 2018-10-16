------

## Cookie & Session

- **Cookie & Session is used for complementing HTTP's disadvantages.** 

  > - Connectionless : After server responses message, **server will close the connection.**
  > - Stateless : After closing the connection, **server won't remember any data of client.**

- **Cookie is small data file has key and data stored in client's local memory space.**

  > → Cookie stores name, value, path, expired date and so on. 
  >
  > → Cookie is able to store data for a while such as login data.
  >
  > > - Cookie Process
  > >   1. Client requests message to server.
  > >   2. *Server responses message with cookie.*
  > >   3. Client gets requested message and stores cookie data in local memory space.
  > >   4. Client requests message to server again with cookie file together.
  > >   5. *Server checks cookie file and is able to keep client's state.*
  >
  >  Ex) 
  >
  > 1. When web site asks whether user will store id and password or not. 
  >
  > ```
  >  → It means saving login data as cookie or not.
  > ```
  >
  > 1. When web site asks Don't you wanna see this pop up anymore?
  >
  > ```
  >  → It means saving the condition in cookie. 
  > ```

- **Session is technology of keeping web browser's state.**

  > → Session has unique id which is sent to client.
  >
  > → Checking this seesion id when web browser requests sth to server, and keeping web browser's state before web browser finishes.
  >
  > > - Session Process
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

  > > - Memory space
  > >
  > >   → Cookie is stored in client's local memory space.
  > >
  > >   → *Session is stored in server's memory space.*
  >
  > > - Security
  > >
  > >   → Cookie can be changed easily because it is managed in client's memory space.
  > >
  > >   → *Session can be protected because it is managed in server's memory space.*
  >
  > > - Life cycle
  > >
  > >   → Cookie has expired date though, it is stored as file. So the data is still existed after web browser is finished.
  > >
  > >   → Cookie file can set expired data.
  > >
  > >   → *Although session also set expired data, it will be deleted after web browser is finished.*
  >
  > > - Speed
  > >
  > >   → Cookie has data and it is handled during reqeusting message. So it is fast.
  > >
  > >   → *Session is stored in server so it should be handled during responsing message. So it is slow relatively.* 
  >
  > > **The reason why using cookie mainly is that session is managed and stored in server.**
  > >
  > > → Server should deal with other client's reqeusts at the same time. 
  >
  > > - Cache
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