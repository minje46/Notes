# Friend

- **`friend` function is not member function, and it could access private variables directly.**
  <br>(Friend는 멤버 함수가 아니며, 클래스의 private 멤버 변수에 직접 접근이 가능하다.)

  > → accessor 와 mutator function을 통하여 private variable에 접근하지 않아도 되기 때문에 **효율적**이다.

- **It is better to overload operator as friend function.**
  <br>(연산자의 오버로딩의 경우, friend function으로 구현하는 것이 좋다.)

  > ```c++
  > struct Compare
  > {
  >   friend bool operator()(pair<double, int> const &a, pair<double, int> const &b) 
  > 	{
  > 		return a.first < b.first || (a.first == b.first && a.second > b.second);
  > 	}
  > };
  > ```
  >
  > → `friend` function은 기본적인 OOP 규칙을 무시한다.
  >
  > → 자동 형 변환을 허용하며, 효율성 good.
  >
  > → `class` 를 `friend`로 만들 수 있으며, `friend function`과 유사한 성질을 갖는다.