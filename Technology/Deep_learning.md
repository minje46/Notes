# Deep learning

 → **Artificial neural network is prior learned to understand deep learning.**

> - Artificial neural network (인공 신경망)
>
>   → Artificial neural network은 artificial 뉴런을 수학적으로 modeling한 뒤에 simulation(시냅스의 결합 세기를 변화시키며)을 통해 인간의 뇌와 같은 학습 능력을 갖도록 한다.
>
> - Multiple layer (다층 레이어)
>
>   → Hidden layer가 2개 이상인 NN을 deep learning이라고 한다. 
>
>   > * Limitation.
>   >
>   >   1. Overfitting : Deep learning의 model is complicated and lots of parameters. 
>   >
>   >      ex) 풀어야 하는 문제는 simple, But model is complicated.
>   >
>   >      ex) 주어진 data는 적지만, model is complicated.
>   >
>   >      → `Random하게 뉴런을 끊음으로써, model은 simple 하게 만든다.`
>   >
>   >   2. Vanishing Gradient : Deep learning의 학습되는 양 = 미분 값 * 출력 값 과정에서 문제.
>   >
>   >      → `ReLU를 통해 미분값이 1, 출력 값 제한은 없다.`
>   >
>   >      → `Long Short Term Memory를 사용한다.`



------

## Definition

- **Deep learning is one of the machine learning algorithm that try to get high quality of abstraction with diverse non linear combination.**

  > → 사람의 사고방식을 컴퓨터에게 가르치는 machine learning의 한 분야이다.

  <br>(딥러닝은 여러 비선형 변환 기법의 조합을 통해 높은 수준의 추상화를 시도하는 기계학습 알고리즘의 집합으로 정의된다.)

  > * Abstraction (추상화)
  >
  >   → 대량의 data 또는 복잡한 data에서 핵심적인 내용 또는 기능을 요약하는 작업.

- Deep learning의 가장 큰 특징은 모델의 부피를 키우고, 방대한 data를 input으로 사용하면, 그 만큼의 performance가 향상된다는 점이다.



------

## 1. Pre-training (using unsupervised learning)

- Pre-training은 "가르침"없이 data를 입력하여 computer 입장에서 cluster를 찾을 수 있게 한다. 

  Algorithm은 clustering 과정 속에서 답을 모르는 data는 무시하면서, noise 감소의 효과에 초점을 맞춘다.

  > → Unsupervised learning을 통한 data clustering을 artificial neural network(인공신경망)에 넣으면, noise 감소의 효과를 높일 수 있다는 것이 point.



------

## 2. CNN (Convolutional Neural Network)

- Input을 filter로 feture map에 feature를 추출하고 layer에 연결하여 result를 learning 하는 것을 말한다.

  ![image](https://user-images.githubusercontent.com/23169707/48966206-03481a00-f010-11e8-9adb-3a8bca15a8d2.png)

  > → Key point는 얼마나 좋은 feature를 추출하는지의 여부이다.
  >
  > > Machine learning에서 `data→knowledge`로 바로 learning을 진행할 수도 있지만, 
  > >
  > > 일반적으로 중간 단계인 feature extraction(특징 추출)을 거쳐 `data→feature→knowledge`의 단계로 learning을 한다.
  >
  > → Feature map : feature extraction을 통해 생성한 feature data set.

- Deep learning algorithm이 feature extraction을 자체적으로 learning하고 만들 수 있기에 powerful.

  > 과거에는 사람이 data를 통해 예측되는 것을 algorithm으로 machine에 추가해서 performance를 향상 시켰으나, deep learning은 다르다.
  >
  > Ex) 과거에는 동물 사진을 통해 개와 고양이를 구분하기 위해, 선들의 특징을 추가하면 algorithm performance가 높아지겠다라고 사람이 판단하고 coding을 하였다.
  >
  > 그러나 현재에는 deep learning이 layer를 추가해가면서, feature extraction과 추가를 자체적으로 한다.



------

## 3. RNN (Recurrent Neural Network)

- RNN은 시간에 따른 순서를 기억해서 data에서 pattern을 인식하고, abstraction data를 추출할 수 있는 algorithm이다.

  > * Time-series data (시계열 데이터) : 시간의 흐름에 따라 변하는 data를 뜻한다.

  ![image](https://user-images.githubusercontent.com/23169707/48966489-d6970100-f015-11e8-9cf4-06e43df9636c.png)

- LSTM(Long Short Term Memory) : Gate unit을 각 node마다 배치하여 관리를 하는 기술.

  > → RNN은 순간마다의 artificial neural network layer를 추가하기 때문에 layer depth가 깊어져 과거의 data를 잃어버리는 (Vanishing gradient) 문제가 발생한다.
  >
  > 이를 LSTM을 통해 RNN의 Vanishing gradient 문제를 해결할 수 있다.



------

## 4. DBN (Deep Belief Network)

- DBN은 latent variable(잠재 변수)의 multiple layer로 이주어진 신경망으로, 사전 훈련된 RBM을 층층이 쌓아 올린 구조이다.

  ![image](https://user-images.githubusercontent.com/23169707/48966578-ac464300-f017-11e8-9e56-ec98194514d8.png)

  > * RBM (Restricted Boltzmann Machine)
  >
  >   → RBM은 undirected graph 구조로 node 출력값은 확률 값으로 DBM을 구성하는 기본 요소이다.
  >
  >   → RBM은 비지도 학습에 활용되며, 차원 축소, 분류, 선형 회귀 분석, 필터링, 특징값 학습 등에 사용할 수 있다.

- DBN은 label이 없은 data에 대한 비지도 학습이 가능하며, 부분적인 이미지에서 전체를 연상하는 일반화, 추상화 과정을 구현 할 수 있다.

  > * Autoencoder
  >
  >   → Autoencoder는 하나의 hidden layer가 있는 neural network로 input이 그대로 output이 된다.
  >
  >   ![image](https://user-images.githubusercontent.com/23169707/48966623-91c09980-f018-11e8-9f46-a1d45d4ed6b1.png)
  >
  >   → Hidden layer가 input을 압축하여 feature extraction을 할 수 있다.
  >
  >   → Hidden layer를 다시 input으로 연결하여 multiple layer의 autoencoder를 쌓은 다음 DBN과 마찬가지로 비지도 학습으로 pre-training을 한다.



------

## 5. Deep Q-Network

- Q table을 array로 설정하는 것을 deep learning CNN으로 변경한 것이 Deep Q-Netwrok이다. 

  ![image](https://user-images.githubusercontent.com/23169707/48966655-317e2780-f019-11e8-9936-041487511eb1.png)

  > → 강화 학습은 현재 상태 S에서 행동 a를 결정하고 이에 따른 reward를 받아 action을 수정한다.
  >
  > → Q table은 각 상태집합에서 action에 따른 우선순위가 있는 table이다.
  >
  > → `Q(S,a)`는 상태 S에서 a라는 행동을 했을 때의 이득 값으로, 현재 상태의 모든 행동 a에 대해서 Q값을 구해 가장 높은 우선순위의 행동을 수행한다.



