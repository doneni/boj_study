#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<pair<int,int>> people(N);
    queue<pair<int,int>> que;
    vector<int> ans(N);
    for(int i = 0; i < N; i++) {
        cin >> people[i].second;
        people[i].first = i;
        que.push(people[i]);
    }
    
    int waiting = 1;
    while(!que.empty()) {
        int idx = que.front().first;
        int need = que.front().second;
        if(need > 0) {
            ans[idx] = waiting;
            if(need != 1) { que.push({idx,need-1}); }
            que.pop();
        }
        waiting++;
    }
    
    for(int a : ans) {
        cout << a << ' ';
    }
    
    return 0;
}
