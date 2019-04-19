# Compare

## 1. Build compare function

- **Building custom compare organizes it's own comparator.**
  <br>(원하는 비교 연산자를 수행하기 위해, 비교 구문을 만드는 것이다.)

  > ```c++
  > struct Compare
  > {
  >    bool operator()(pair<double, int> const &a, pair<double, int> const &b) 
  > 	{
  > 		return a.first < b.first || (a.first == b.first && a.second > b.second);
  > 	}
  > };
  > ```
  >
  > → `priority_queue<pair<double, int>, vector<pair<double, int>>, Compare>que;`
  >
  > → `pair<double,int>`에서 `double`은 내림 차순, `int`는 오름 차순을 위한 custom comparator.


------

## 2. Operator overloading

- **Compare overloading is overloads original compare operator to use custom way.**
  <br>(원하는 비교 연산자를 만들기 위해 기존의 compare operator를 overloading 하는 것이다.)

  > ```c++
  > const bool operator < (const Struct_name &s) const
  > {
  >     if(this->name == s.name)
  >         return this->age < s.age;
  >     else
  >         return this->name < s.name;
  > }
  > ```
  >
  > → `sort(v.begin(), v.end(), greater<Struct_name>());`
  >
  > → `Struct` 내부에 name과 age를 가지고 있는 경우, name은 사전식 order, age는 오름차순으로 정렬하는 custom operator overloading.

- **In C++ language, it is possible to define operator. Overloading operator is not original way but user's defined operator.**

  > → Operator는 built-in 함수이다. ex) '+', '-'..

  <br>(C++에서는 사용자 정의 연산자를 사용할 수 있다. 연산자를 오버로딩하여, 기존에 사용하던 방식이 아닌 사용자 정의에 맞춘 연산자가 수행된다.)

  > ```c++
  > bool operator < (const int a)
  > {
  >     return this < a;
  > }
  > ```
  >
  > → `(return type) operator (연산자) (연산자가 받는 parameter)` 의 format을 따라야 한다.