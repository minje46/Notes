------

## Basic follow

- **IP address** consists 4byte(32bit) and it is used **to identify internet hosts.**

  > → IP address = Subnet id + Host id
  >
  > → Router prefers IP address to identify.
  >
  > → People prefer host name to identify. That's why DNS is used in normal.

- **DNS**(Domain Name System) is distributed database implemented in hierarchy of many name servers.

  <img width="638" alt="dns" src="https://user-images.githubusercontent.com/23169707/45585015-51f27d00-b918-11e8-9c37-ffca0ffea3bc.png">

- > → DNS가 한 개의 server로 구현되어 있다면, 과부하가 걸리기 쉽기 때문에 hirearchical 하게 존재한다.
  >
  > > * Root DNS Server
  > >
  > >   → Root DNS Server는 TLD server의 정보를 가지고 있으며, host name을 찾는 request가 들어오면 해당하는 TLD 정보를 response 해준다.
  >
  > > * TLD(Top-Level-Domain)
  > >
  > >   → Host name의 실제 address 정보를 가지고 있으며, request에 맞는 하위 계층의 DNS server 주소의 정보를 response 해준다.
  >
  > > * Authoritative DNS Server
  > >
  > >   → Response받은 data를 기반으로 host name의 실제 ip address를 return 해준다. 
  >
  > → Authoritative DNS Server에서 return하는 address를 통해 client가 접속하고자 했던 host name에 접속이 가능해진다.

- **Local DNS** manages client's request. It contacts server and gets replies from each server.

  <img width="358" alt="dns_2" src="https://user-images.githubusercontent.com/23169707/45585137-8a935600-b91a-11e8-8a8e-f798585b805b.png">

  > 1. User put url(cis.poly.edu).
  > 2. It is managed in local DNS server at first.
  > 3. And local DNS gets each address from each DNS server.
  > 4. Finally, local DNS returns the ip address to user.
  >
  > → These iterated query decreases overhead of asking all of things to root DNS server.
  >
  > → Also local DNS server has cache memory. So it is able to handle with other similar url easily.



