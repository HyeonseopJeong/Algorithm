# Sorting Algorithm

## Bubble Sort

- Outer for문의 i는 fix 될 index를 의미한다. 

- Inner for문에서는 가장 큰 값을 i까지 위로 올리는 과정이다.
(거품이 올라가듯이 큰 값이 계속 위로 (i까지) 올라간다.)

- Stable하다.


## Quick Sort

### partition

- 가장 왼쪽 index를 pivot으로 잡는다. (clever pivot selecting을 하려면 l, mid, r 중 중앙값을 l과 swap하면 된다.)

- pivot을 제외하고 가장 왼쪽 index를 i, 가장 오른쪽 index를 j로 잡는다.

- pivot을 기준으로 왼쪽은 pivot보다 작은 데이터, 오른쪽은 pivot 보다 큰 데이터가 오도록 만든다.

- j의 inner while문에서 j >= i 조건문을 쓴 이유는 j번째 index를 pivot의 자리로 쓰기 위함이다.


#### <tip>


> 이 때, 각 i, j의 inner while문에서

> i보다 작은 index는 무조건 pivot보다 작은 data이고

>  j보다 큰 index는 무조건 pivot보다 큰 data임을 생각하면 편하게 짤 수 있다.
