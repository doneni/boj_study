# 대칭차집합
합집합에서 교집합을 제한 부분! (A - B)와 (B - A)의 합이다.

vector를 이용해서 다양한 집합 연산을 할 수 있다.

그중 하나인 `set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), res.begin())`가 있다.

iterator를 리턴하며 여기서 `res.begin()`를 빼면 대칭차집합에 총 몇 개의 원소가 있는지 알 수 있다.

# reference
https://1coding.tistory.com/124