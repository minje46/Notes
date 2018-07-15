### Overloading vs Overriding. 
<u></u>
1. Overloading.
- Reconstruct method which has same name with different return type or different number of parameter. 
<br>(������ �̸��� �Լ��� ������ �Ѵ�. return type, parameter ���� ������ method�� �������´�.)
- Overloading exists in only object oriented language because compiler finds the method with name and parameter or type. <br>Otherwise, compiler of C language finds the method with only method's name.
<br>(��ü ���� ������ method�� name�� parameter �� �ΰ� ������ �Բ� search �ϴ� �ݸ�, C������ method name���θ� method�� search�ϱ� ������ overloading�� ������ �������� �ʴ´�.)
```
int addition(int a, int b){
   return a+b;
}
@Overloading
int addition(int a, int b, int c){
   return a+b+c;
}
```
<br></br>
2. Overriding.
- Reconstruct method differently which has implemented in parent's class or child's class.
<br>(����� ���迡�� ������ �̸��� method�� ���� �ٸ� ����� �����ϵ��� ������ �Ѵ�.) 
- Overriding should have same name with return type and number of parameter.
<br>(Overriding �� ���, method�� �̸��� type, parameter�� ������ �����ؾ� �Ѵ�.)
- In overriding, child's method should have broad access range.
<br>(Overriding �� ���, child class�� method�� parent class�� method ���� ���� �������� ������ ���ų� �� �о�� �Ѵ�.)</br>
```
void Parent :: Introduce(){
   cout<<"It's parent class"<<endl;
}
@Overriding
void Child :: Introduce(){
   cout<<"It's chidl class"<<endl;
}
```

<br></br>
<br></br>
<br></br>
