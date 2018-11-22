### Basic concept of Learning technologies

------

## AI (Artificial Intelligence)

- AI(Artificial Intelligence)는 기계 또는 시스템에 의해 만들어진 지능이라 말할 수 있다. 

  > Ex)음성 인식, 안면 인식, 사물 인식 


> **AI(인공지능) > Machine learning(머신러닝) > Deep learning(딥러닝)**
>
> ![learning](https://user-images.githubusercontent.com/23169707/48132194-0637d080-e2d6-11e8-813b-165ba0040ab6.png)
>
> → Machine learning과 Deep learning은 AI를 가능케 하는 두 가지 기술을 뜻하며, 미묘한 차이를 가지고 있다.



------

## Machine Learning

- Machine learning은 기계가 직접 data를 학습하여 data에 숨겨진 일련의 규칙성을 찾는 것이다.

  > → Data set을 기반으로 computer가 learning하여 new data를 평가 or 예측을 하는 것.
  >
  > Ex) 감기에 걸린 환자들의 체온과 건강한 사람들의 체온 data를 학습시켜, 특정 체온을 제시했을 때 사람이 감기에 걸렸는지의 여부를 판독할 수 있다.

- Machine learning은 특정 업무를 처리하는 programming이 아니라, learning에 초점이 맞춰져 있다. Machine learning은 많은 양의 data set을  복잡한 algorithm으로 analysize하여 pattern을 찾고, pattern을 기반으로 예측을 한다.

  > → Analyze 과정에서 pattern을 잘못 인식했을 경우, System은 스스로 error를 수정하면서 learning을 이어간다.
  >
  > (이러한 과정을 통해, 예측의 정확도를 점점 높일 수 있다.)

- Machine learning algorithm은 문제를 해결하기 위해 문제를 여러 개의 part로 분할하고 각 각에 대한 답을 구하고 그 결과를 합치는 방법을 사용한다.

  > → Deep learning algorithm의 경우 문제를 제시하고 답을 구하는 end-to-end 접근방법을 사용한다.



------

## Deep Learning

* Deep learning은 Artificial Neural Network(인공신경망), Deep Neural Network(심층신경망) 구조를 사용하여 data set 전체를 learning 하는 것이다.

  > - Artificial Neural Network
  >
  >   → Artificial Neural Network은 뇌에서 수 많은 뉴런들이 모여 signal을 전달하는 과정을 modeling.
  >
  > - Deep Neural Network
  >
  >   → Deep Neural Network은 뇌에서 connection을 모방한 것으로, data set을 분류하고 data의 relation(상관관계)을 찾아내는 것이다.

* Deep learning은 data set 전체를 학습시키는 것이므로, 방대한 양이 필요하다. Data set이 작다면, deep learning의 성능은 기대할 수 없다.

  > Ex) Computer에게 개와 고양이 사진을 학습시켜 특정사진의 동물이 개인지, 고양이인지 분류하도록 할 경우.
  >
  > → Machine learning을 사용하면, 개와 고양이의 구별되는 큰 특징을 data set으로 사용한다.
  >
  > ![learning_ex 1](https://user-images.githubusercontent.com/23169707/48133424-1487eb80-e2da-11e8-9e89-6447c93790ed.png)
  >
  > → Deep learning을 사용하면, 개와 고양이 사진 자체를 data set으로 사용하여 분류를 가능하도록 한다.
  >
  > ![learning_ex 2](https://user-images.githubusercontent.com/23169707/48133463-29647f00-e2da-11e8-995e-21be3f792b6d.png)

* Deep learning algorithm은 많은 양의 matrix mulitplication을 수행하기 때문에 GPU의 성능이 좋아야 한다.
