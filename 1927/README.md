# 우선순위 큐
    priority_queue<int> pq1;
    priority_queue<int, vector<int>, greater<int>> pq2;
    priority_queue<int, vector<int>, cmp> pq3;

<li> 기본은 내림차순!
<li> 위와 같이 선언하면, 오름차순으로 구현 가능
<li> 혹은 커스텀 비교함수를 선언 가능!