### Network notions
***
##  1. Byte & Bit & Endian
* Bit - **The smallest data** unit in computer for operation, transportation, storage and it has binary data only 1 and 0.
<br>(��ǻ�Ϳ��� ����ϴ� ���� ���� ������ ����, �ϳ��� ��Ʈ�� 2���� 1 �Ǵ� 0���� ǥ���Ǿ���͸� ó��, ����, ���� �� �� ���ȴ�.)

* Byte - It is **quantity of data** and measurement unit for size of data, disk or other storages.
<br>(Byte�� ��Ʈ��ũ�� ���� ���۵Ǵ� �������� ���� ǥ���ϸ�, ������ ������ ũ��, ��ũ �Ǵ� �� �� ���� ��ü�� ���� ���� ǥ���ϴ� ���� ������ 1Byte = 8bit�̴�.)

* Endian - Endian is **arranging method of sequence data** in 1-dimension space such as computer memory. If the big data will be located at first, it is called Big-endian. And if the small data will be located at first, it is called Little-endian.
<br>(Endian�� computer memory�� ���� 1������ ������ �������� ���ӵ� ����� �迭�ϴ� ����� ���ϸ�, byte�� �迭�ϴ� ���(byte order) ���� Endian�̶� �� �� �ִ�. ū ������ �տ� ������ ��츦 Big-endian, ���� ������ �տ� ������ Littel-endian���� ������ �� �ִ�.)

* Bitmask - Bitmask is constant which is specific array of bits of variables or operation. It is usually used as standard of calling method.
<br>(Bitmask��, ���� Ȥ�� ���Ŀ��� ���ϴ� ���� bit�� �����ϱ� ���� ����� ���ϸ�, �ַ� Ư�� �Լ�ȣ��� ��ӵ� ��Ģ�� �ѱ�� ���� ���ȴ�.)

##  2. LSB & MSB
* LSB(Least Significant Bit) - It is **the smallest value of bit** and it is located the least position of data. It is used for checksum, hash function and so on that is because if LSB will be change, the whole of data might be changed.
<br>(LSB�� ���� ���� ���� bit�� data�� ���� ���� ��ġ�� bit�� ���Ѵ�. LSB�� ���� ���ؼ� data�� Ȧ,¦���� ������ �� ������ LSB���� ����Ǹ� ��ü data�� ����Ǳ� ������ checksum, hash �Լ� � ���ȴ�.)
> There is no difference between signed char type and unsigned char type.

* MSB(Most Significant Bit) - If data type is unsigned char type, MSB has **the highest position bit.** 
<br>If data type is signed char type, MSB has **sign data** such as '+' or '-'.
<br>(Data type�� unsigned char type�� ���, MSB�� ���� �ֻ��� bit�� ���Ѵ�. 
<br>Data type�� signed char type�� ���, MSB�� ��ȣ�� ��Ÿ���� �̸� ���� ���, ������ ������ �� �ִ�.)
> MSB has different data value depends on data type.

**LSB & MSB are used as Serial communication to send and get bit of data orderly.**

##  3. Serial & Parallel communication (���� ���)
* Parallel communication - Parallel communication has **bunch of lines** to communicate each other so it is possible to send and get far more data per time though, it has high cost.
<br>(���� ����� �������� ��ȣ���� �̿��Ͽ� ����� �ϰ�, ���� ���� ���������� ����Ͽ� ���� �ð��� ���۵Ǵ� ������ bit�� ���� ������, ���� ���� ���� �� ������ ��� ����� ũ��.)

* Serial communication - Serial communication usually has **one line to communicate** each other so it takes time to send and get data equally though, it needs only a few lines. 
<br>(���� ����� �ַ� �ϳ��� ��ȣ���� �̿��Ͽ� data�� �ְ�޴� �������, data ������ ������ �ð� �������� ������ �ϰ� �ȴ�. �� ������ ���ۿ��� ���� �ð��� �ҿ������ ���� ���� ��ȣ���� �̿��Ѵٴ� ������ �����Ѵ�.)

* Synchronize serial communication - In synchronize serial communication, it uses **sync clock** during communicating data each other. So it decrease error during exchanging data though, it causes line complications.
<br>(���� ���� ����� data ������ �Ҷ�, ���� Ŭ���� ����ϱ� ������ data �ۼ��Ű��� ������ Ŭ�� ��ȣ���� �ʿ��ϴ�. �̸� ���� ����� ������ ���� �� ������, ȸ�ΰ� ���������� ������ �����Ѵ�.)

* Asynchronize serial communication - In ASYNC serial communication, it only **consists of communication line and control line without any clock lines** so it has simple structure compared to others. But it causes possibilites of data error and it should include extra data for distinguishing other data. With this reason, it makes speed slow.
<br>(�񵿱� ���� ����� data�� �ְ�޴� ��ż��� control�����θ� �����Ǿ� ������, ������ Ŭ�ϼ��� �������� �ʾ� ������ ȸ���� ������ �����ϴ�. �׷��� ��� ȸ���� ���ؼ� data �̵� �� data �ս��� ����� data�� �����ϱ� ���� ó���� ���� ���� ��� ������� ������ �Բ� �Ǿ� ������ �Ѵٴ� ������ �����Ѵ�. �� ������ �ӵ� ���� ������.) 

##  4. CAN & LIN protocol
* CAN - Controller Area Network is **standard protocol** between micro controller or devices each other without host computer.
<br>(Controller Area Network�� ���� ������ host ��ǻ�� ���� ����ũ�� ��Ʈ�ѷ� or ��ġ���� ���� ����ϱ� ���� ����� ǥ�� ��� �԰��̴�.)

* LIN - Local Interconnect Network is used for sending data **between ECU and actuators.** It has simple structure and slow speed though, it is regulated as standard protocol so it is possible to be used in many types such as systems and units.
<br>(Local Interconnect Network�� �ַ� ECU�� �ɵ����� �� �ɵ� Actuator���� data ���ۿ� ���Ǹ�, ������ ������ ���� �ӵ��� �������� Ư¡�̴�. ����, LIN�� ��ȣ���� �� protocol�� ǥ��ȭ�Ǿ� �־� �ټ��� �ý��� ���� �� ��ǰ���� ������ �� �ִٴ� ������ �ִ�. )

* ECU - Electronic Control Unit is able to **control car engine, ABS and so on by computer.** 
<br>(Electronic Control Unit�� �ڵ����� ����, �ڵ����ӱ�, ABS���� ���¸� ��ǻ�ͷ� �����ϴ� ���� ���� ��ġ�� ���Ѵ�.)

<br></br><br></br><br></br>
