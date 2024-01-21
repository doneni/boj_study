# Runtime Error: `segfault`

    bool cmp(pair<int, int>& p1, pair<int, int>& p2)
    {
        if(p1.second < p2.second)
            return true;
        else if(p1.first < p2.first)
            return true;
        else
            return false; 
    }

<li> 이렇게 짰더니 채점 시 `segfault`가 났다.
<li> <i>p1.second</i>와 <i>p2.second</i>가 같을 때 false를 return하지 않을 수 있기 때문!
<li> 모든 경우의 수를 다 커버하지 못하면 `segfault`가 날 수 있다!