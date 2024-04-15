#include <iostream>
#include <queue>
#define MAX 100001
using namespace std;

int N = 0, K = 0;
int t[MAX] = { 0, };

void bfs(int start)
{   
    queue<int> q;
    q.push(start);
    t[start] = 0;
    while(!q.empty())
    {
        int now = q.front();

        if(now == K)
            return;
        if(now * 2 < MAX && (t[now * 2] < 0 || t[now * 2] > t[now]))
        {
            t[now * 2] = t[now];
            q.push(now * 2);
        }
        if(now - 1 >= 0 && (t[now - 1] < 0 || t[now - 1] > t[now] + 1))
        {
            t[now - 1] = t[now] + 1;
            q.push(now - 1);
        }
        if(now + 1 < MAX && (t[now + 1] < 0 || t[now + 1] > t[now] + 1))
        {
            t[now + 1] = t[now] + 1;
            q.push(now + 1);
        }
        q.pop();
    }
    return;
}    

int main(void)
{
    cin >> N >> K;
    for(int i = 0; i < MAX; i++)
        t[i] = -1;
    bfs(N);
    cout << t[K] << '\n';

    return 0;
}