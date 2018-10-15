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

  > - Non-persistent HTTP : After server responses message, **closing the TCP connection.**
  > - Persistent HTTP : After server responses message, **keep the TCP connection** for considering that client requests message again. 

- **Web socket**  is developed for handling with problem of HTTP communication. So it **maintains connection** befroe quit and **assure duplex.**

  > Socket plays a role of **interface between application layer and transport layer.**

  → At first, client and server **do handshake** with HTTP communication.

  → And then, it **upgrades web socket communication** after getting success of handshaking.

  → It is used in high traffic envirionment with short delay.

- **HTTP** connection vs. **Socket** connection

  → **HTTP doesn't keep connection** between client and server after data transmission.

  → **The reason why disconnection is avoiding overhead of server.**

  → **Socket do keep connection** between client and server before quick intentionally.

  → **It is used on real time system** because it is efficient keeping connection than doing reconnection.

