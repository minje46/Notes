### Deepen theories
***

## Regular Expression 
* Regular expression is in theoretical computer science and formal language theory, **a sequence of characters** that define a **search pattern.** <br>
Usually this pattern is then used by **string searching algorithms** for "find" or "find and replace" operations on strings or for input validation.
<br>(���� ǥ������ Ư���� ��Ģ�� ���� ���ڿ��� ������ ǥ���ϴ� �� ����ϴ� ���� ����̴�. <br>���� ǥ������ ���� �ؽ�Ʈ ������� ���α׷��� ���� ���ڿ��� �˻��� ġȯ�� ���� �����ϰ� �ִ�.) 

* Regular expression is often used to mean **the specific, standard textual syntax** for representing patterns for matching text.
<br>(���� ǥ������ �ؽ�Ʈ�� �ؼ��ؾ� �ϴ� "����"�� ǥ���ϱ� ���� Ư���� ǥ���� �ؽ�Ʈ ���ý��� �ǹ��ϱ� ���� ���ȴ�.)

* There are meta characters that it is used as **specific way without original meaning** of characters in regular expressions.
<br>(���� ǥ���Ŀ��� ��Ÿ ���ڰ� ���Ǹ�, ��Ÿ ���ڶ� ���� �� ���ڰ� ���� ���� �ƴ� Ư���� �뵵�� ���Ǵ� ���ڸ� ���Ѵ�.)
<br><br>
Ex1)
```a.``` �� ```a```�� ��ġ�ϴ� ���ͷ� �����̸�, ```.```�� ��� ���ڿ� ��ġ��Ű�� ��Ÿ ���ڷμ�  ```'a', 'ax', 'a0'```�� ��ġ��ų �� �ִ�. <br><br> Ex2)
```.```�� �ſ� �������� ��������, ```[a-z]```�� ����Ͽ� ```a~z```�� �������� ������ ����� �� �� �ִ�. <br><br>Ex3)
```0.013517 1  175   Rx   d 8 30 04 64 14 1D 00 00 00```�� ���� format�� ������ �ִ� input�� <br> ```(r" +([0-9.]+) +(\w+) +(\w+) +(\w+) +d (\d+)((?: [0-9a-fA-F]{2})*)")```�� ���� ǥ������ �̿��Ͽ� ���ϴ� type���� split�� �� �� �ְ� �ȴ�.
>  https://regex101.com �� ���� ���� ǥ������ �����غ� �� �ִ�.