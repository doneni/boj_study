# Bellman-ford Algorithm
## 최단 경로 알고리즘 분류
- 1 to 1 최단 경로 (*BFS, DFS*)
- 1 to N 최단 경로 (*Dijkstra,* ***Bellman-ford***)
- N to N 최단 경로 (*Floyd-warshall*)

## Dijkstra vs. Bellman-ford
- 다익스트라는 <u>노드</u> 중심으로 거리를 업데이트하지만, 벨만 포드는 <u>간선</u> 중심으로 거리를 업데이트
- 다익스트라가 더 빠름
- 벨만 포드는 **음의 가중치**를 처리할 수 있고, 음의 사이클 존재 여부 확인 가능

## Bellman-ford Algorithm
1. dist 배열을 INF로 초기화
2. dist[start] = 0으로 설정
3. 간선을 하나씩 확인하며 dist를 업데이트 함 (이때 dist가 INF인 노드를 경유할 수 없음)
4. 3을 N-1번 반복

+) 알고리즘을 마친 이후에도 dist에 업데이트가 발생하면, 음의 사이클이 존재하는 것

## Reference
[[ 벨만포드 알고리즘 ] 개념과 구현방법 (C++)](https://yabmoons.tistory.com/365)   

