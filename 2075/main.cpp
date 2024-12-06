#include <iostream>
#include <queue>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    FASTIO;
    int N; cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    int x = 0; 
    for(int i = 0; i < N*N; i++) {
        cin >> x;
        pq.push(x);
        if(pq.size() > N)   { pq.pop(); }
    }
    cout << pq.top();
    return 0;
}
