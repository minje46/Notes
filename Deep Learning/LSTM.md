# Deep learning

## ※ RNN (Recurrent Neural Network)

→ **RNN은 sequence data를 modeling 하기 위한 neural network로써, data를 기억(=hidden state)하고 있다는 특징이 있다.**

→ **Data를 기억한다는 것은, 지금까지의 input data를 요약한 정보라고 볼 수 있으며, 새로운 input data가 들어올때마다 network는 자신의 기억을 조금씩 수정한다.**

→ 결국 input data를 모두 처리하고 난 뒤, network에 남겨진 기억은 sequence 전체를 요약하는 정보가 된다. 이는 사람이 sequence data를 처리하는 방식과 유사하다.

> Ex) 사람이 글을 읽을 때, 이전까지의 단어에 대한 기억을 바탕으로 새로운 단어를 이해하는 과정. 



* **Basic structure.**

![image](https://user-images.githubusercontent.com/23169707/49693348-6ced2a00-fbb3-11e8-8175-f444af9d8e94.png)

> 1. 1. 고정크기 입력 & 고정크기 출력. 순환적인 부분이 없기 때문에 RNN이 아닙니다.
>
>    2. 고정크기 입력 & 시퀀스 출력. 
>
>       Ex) 이미지를 입력해서 이미지에 대한 설명을 문장으로 출력하는 이미지 캡션 생성
>
>    3. 시퀀스 입력 & 고정크기 출력. 
>
>       Ex) 문장을 입력해서 긍부정 정도를 출력하는 감성 분석기
>
>    4. 시퀀스 입력 & 시퀀스 출력. 
>
>       Ex) 영어를 한국으로 번역하는 자동 번역기
>
>    5. 동기화된 시퀀스 입력 & 시퀀스 출력. 
>
>       Ex) 문장에서 다음에 나올 단어를 예측하는 언어 모델



* **RNN structure.**

![image](https://user-images.githubusercontent.com/23169707/49693367-df5e0a00-fbb3-11e8-9f90-fa6d149e4b9b.png)

> → A는 RNN의 한 덩어리로, A는 input x를 받아서 h를 output으로 내보낸다.
>
> → RNN의 chain처럼 이어지는 성질은 곧장 sequence or list로 이어지는 것을 알려주며, 이런 data를 다루기에 최적화된 구조의 neural network이다.
>
> → RNN은 long-term dependencies를 다룰 경우, 이전의 data를 잊어버려 문제가 발생하게된다. [Vanishing gradient]



## ※ LSTM (Long Short Term Memory)

* **LSTM structure.**

![image](https://user-images.githubusercontent.com/23169707/49693397-c86be780-fbb4-11e8-816c-5d45e4bf654e.png)

> → **LSTM은 RNN의 한 졸류로, 긴 의존 기간을 필요로하는 학습을 수행하기 위한 model이다.**



* **LSTM Cell state.**

![image](https://user-images.githubusercontent.com/23169707/49693405-1a147200-fbb5-11e8-9a15-d55e0adb40c4.png)

> → LSTM의 핵심은 cell state인데, module 그림에서 수평으로 그어진 윗 선에 해당한다.
>
> → LSTM은 cell state에 뭔가를 더하거나 없앨 수 있는 model인데, 이는 gate에 의해 control된다. 
>
> > → Gate는 data가 전달될 수 있는 추가적인 방법으로, sigmoid layer와 pointwise의 곱셈으로 이루어져있다.
> >
> > → Sigmoid layer는 0과 1을 통해, 각 component의 data 전달 여부를 나타내준다. [0 = 아무것도 넘기지 않는다 / 1 = 모든 것을 넘긴다.]



* **LSTM forget gate layer.**

![image](https://user-images.githubusercontent.com/23169707/49693430-d9692880-fbb5-11e8-8ea7-b92216bde0a8.png)

> → LSTM의 첫 단계로 cell state로부터 어떤 data를 버릴 것인지 정하는 것으로, sigmoid layer에 의해 결정된다.
>
> → Forget gate layer에서는 h(t-1)과 x(t)를 input으로 받아서 0과1의 값을 C(t-1)에 전달함으로써, data를 기억할지, 버릴것인지 판단한다.
> $$
> f(t) = δ(W(f)*[h(t-1), x(t)] + b(f))
> $$
>



* **LSTM input gate layer.**

![image](https://user-images.githubusercontent.com/23169707/49693455-a6736480-fbb6-11e8-8292-c45925c6179c.png)

> → 다음 단계로는, input으로 들어오는 새로운 data 중 어떤 것을 cell state에 저장할 것인지를 정한다. 
>
> → Input gate layer라고 불리는 sigmoid layer가 어떤 data를 update할지 정하고, 그 다음에 tanh layer가 새로운 후보 값들인 C(t)라는 vector를 만들고 cell state에 더할 준비를 한다.
>
> → 이렇게 두 단계에서 나온 data를 합쳐서 state를 update할 재료를 만들게 된다.
> $$
> i(t) = δ(W(i)*[h(t-1), x(t)] + b(i))
> $$
>
> $$
> C(t) = tanh(W(C)*[h(t-1), x(t)] + b(C))
> $$
>



* **LSTM cell state update.**

![image](https://user-images.githubusercontent.com/23169707/49693472-44ffc580-fbb7-11e8-9817-7e1e51a3df52.png)

> → 이제 과거 state인 C(t-1)를 update해서 새로운 cell state인 C(t)를 만들어야 한다.
>
> → 이미 이전 단계에서 어떤 data를 얼마나 update할 것인지 정했기 때문에, 이전 state에 f(t)를 곱해서 가장 첫 단계에서 forget 할 data를 잊어버린다.
> 그리고 i(t)*C(t)를 더해서 update하기로 한 data를 얼마나 update할 것인지 정한 scale 값이 된다.
> $$
> C(t) = f(t)*C(t-1) + i(t)*C(t)
> $$
>



* **LSTM output gate layer.**

![image](https://user-images.githubusercontent.com/23169707/49693488-b5a6e200-fbb7-11e8-89c7-6a1b4c72f6cd.png)

> → 마지막으로 무엇을 output으로 내보낼 것인지 정해야한다.
>
> → output data는 cell state를 기반으로 filtering된 data일 것이며, sigmoid layer에 input data를 얹혀서 cell state의 어느 부분을 output으로 내보낼 것인지 정한다. 그리고나서 cell state를 tanh layer를 통해서 -1과 의 값을 받은 뒤 방금 전에 계산한 sigmoid gate의 output과 곱해준다.
> 이를 통해 우리가 원하는 output 부분만 얻을 수 있게 된다.
> $$
> o(t) = δ(W(o)*[h(t-1), x(t)] + b(o))
> $$
>
> $$
> h(t) = o(t) * tanh(C(t))
> $$
>





