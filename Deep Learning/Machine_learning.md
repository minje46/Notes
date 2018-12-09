# Machine learning

 → Machine learning에 수 많은 종류가 존재하기 때문에, 적절한 algorithm을 선택해야 하는 필요성이 있다.

> * Standards
>   1. Data size, quality, feature. [Data정보를 기반으로 판단]
>   2. Computation time. [가용 연산 시간을 기준으로 판단]
>   3. Task emergency. [작업의 긴급성을 기준으로 판단]
>   4. What to do. [data를 기반으로 무엇을 하고 싶은지로 판단]

![image](https://user-images.githubusercontent.com/23169707/48902987-94e34a80-ee9d-11e8-8cfd-68b00b7a28bc.png)

>Reference : [Algorithm cheat sheet](http://blogsaskorea.com/49)

------

## Definition

* **Machine learning is "The method of learning computer with data."**

  <br>

  (머신 러닝이란, "데이터를 이용해서 컴퓨터를 학습시키는 방법론" 이다.)

* Machine learning은 문제를 해결하기 위해, custom code(맞춤 코드)를 작성하지 않고, 일련의 data를 input으로 자체 logic을 만들게 된다.

* **Three types of machine learning algorithm.**

![image](https://user-images.githubusercontent.com/23169707/48903286-6d40b200-ee9e-11e8-85f9-b70a918f582f.png)



------

## 1. Supervised (지도 학습)

- **Supervised learning is learning computer with labeled data.**

  <br>(지도 학습은 데이터에 대한 레이블(명시적인 정답)이 주어진 상태에서 컴퓨터를 학습시키는 방법이다.)

  → `supervised_learning(data, lable)` 의 형태로 학습을 진행.

- > Ex)
  >
  > Data : room, square(견적), neighborhood.
  >
  > lable : data를 기반으로 price.
  >
  > * Data
  >
  >   ![image](https://user-images.githubusercontent.com/23169707/48903760-c65d1580-ee9f-11e8-8943-178036e778da.png)
  >
  >   → 위와 같은 data를 기반으로 learning 시키는 것이다.
  >
  > * Question
  >
  >   ![image](https://user-images.githubusercontent.com/23169707/48903822-f1476980-ee9f-11e8-9c6e-383726535977.png)
  >
  >   → 위의 data를 input으로 solution을 구할 수 있다.



------

## 2. Unsupervised (비지도 학습)

- **Unsupervised learning is learning computer without labeled data.**

  <br>

  (비지도 학습은 데이터에 대한 레이블(명시적인 정답)이 주어지지 않은 상태에서 컴퓨터를 학습시키는 방법론이다.)

  → `unsupervised_learning(data)` 의 형태로 학습을 진행.

  > Ex)
  >
  > Data : room, square(견적), neighborhood.
  >
  > * Data
  >
  >   ![image](https://user-images.githubusercontent.com/23169707/48904184-f0fb9e00-eea0-11e8-8a69-5b532e2f45f0.png)
  >
  >   → Label을 예측하지 않고, 위의 data가 가지는 pattern이나 grouping 등의 또 다른 data를 찾아낼 수 있다.

- **Unsupervised learning은 data의 hidden feature 와 structure를 파악하는데 사용된다.**

- **Unsupervised learning의 종류로는 clustering이 있다.**



------

## 3. Reinforcement (강화 학습)

- **Reinforcement learning is learning data with getting rewards after agent gets specific action in state.**

  <br>(강화 학습은 에이전트(agent)가 주어진 환경(state)에 대해 어떤 행동(action)을 취하고 이로부터 어떤 보상을 얻으면서 학습을 진행한다.)

  > ![image](https://user-images.githubusercontent.com/23169707/48904492-e2fa4d00-eea1-11e8-9cf7-7ec5e55deba6.png)

- **Supervised 와 Unsupervised learning**은 **data가 주어진 static environment(정적 환경)**에서 학습을 진행한 반면, **Reinforcement learning**은 **dynamic environment**에서 **data를 수집하는 과정**까지 포함되어 있는 algorithm이다.

  >EX)
  >
  >Agent : 학습을 하는 system.
  >
  >Environment : 불이난 상황.
  >
  >Reward : Action을 통해 얻는 결과.
  >
  >Penalty : Reward에 대한 벌점.
  >
  >Policy : 가장 큰 reward를 얻기위한 최상의 전략.(스스로 학습)
  >
  >![image](https://user-images.githubusercontent.com/23169707/48926587-d06c2c00-ef12-11e8-9964-f548a0dfb08b.png)
  >
  >→ Agent가 action을 취하고 이를 통해 얻을 수 있는 reward를 기반으로 policy를 선택하는 것.

- **Reinforcement learning의 종류로는 Q-learning과 Deep-Q-Netwrok(DQN)이 있다.**