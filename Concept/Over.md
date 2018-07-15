### Overloading vs Overriding. 
<u></u>
1. Overloading.
- Reconstruct method which has same name with different return type or different number of parameter. 
<br>(동일한 이름의 함수를 재정의 한다. return type, parameter 개수 등으로 method를 구분짓는다.)
- Overloading exists in only object oriented language because compiler finds the method with name and parameter or type. <br>Otherwise, compiler of C language finds the method with only method's name.
<br>(객체 지향 언어에서는 method를 name과 parameter 등 부가 정보와 함께 search 하는 반면, C언어에서는 method name으로만 method를 search하기 때문에 overloading의 개념이 존재하지 않는다.)
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
<br>(상속의 관계에서 동일한 이름의 method를 각각 다른 기능을 수행하도록 재정의 한다.) 
- Overriding should have same name with return type and number of parameter.
<br>(Overriding 할 경우, method의 이름과 type, parameter의 개수는 동일해야 한다.)
- In overriding, child's method should have broad access range.
<br>(Overriding 할 경우, child class의 method는 parent class의 method 보다 접근 제한자의 범위가 같거나 더 넓어야 한다.)</br>
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
