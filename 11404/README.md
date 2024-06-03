# Floyd-Warshall Algorithm
- **모든 지점에서 다른 모든 지점까지의 최단 경로**를 모두 구해야 할 때 (*N to N*)
- 매 단계 ***거쳐갈 수 있는 노드***를 추가해주는 느낌
- 플로이드 워샬은 dp 알고리즘에 해당하고, 다익스트라는 그리디에 해당
---
>k번째 라운드에서의 업데이트 <br> dist[from][to] = min(dist[from][to], dist[from][k] + dist[k][to])

1. dist 인접 행렬을 초기화
2. k번째 노드를 거쳐서 가는 경우를 고려해 업데이트...를 N번 반복
## Reference
[[알고리즘] 플로이드 워셜 알고리즘 (Floyd-Warshall Algorithm)](https://velog.io/@kimdukbae/%ED%94%8C%EB%A1%9C%EC%9D%B4%EB%93%9C-%EC%9B%8C%EC%85%9C-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-Floyd-Warshall-Algorithm)
