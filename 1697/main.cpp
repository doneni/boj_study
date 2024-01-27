#include <iostream>
#include <deque>
#define MAX 100001
using namespace std;

void bfs(int s, int d)
{
    deque<int> q;
    int time[MAX] = { 0, };
    q.push_back(s);
    time[s] = 0;
    while(!q.empty())
    {
        if(q.front() < 0 || MAX <= q.front())
            continue;
        if(q.front() == d)
        {
            cout << time[q.front()] << '\n';
            break;
        }

        if(0 <= q.front() - 1 && !time[q.front() - 1])
        {
            q.push_back(q.front() - 1);
            time[q.front() - 1] = time[q.front()] + 1;
        }
        if(q.front() + 1  < MAX && !time[q.front() + 1])
        {
            q.push_back(q.front() + 1);
            time[q.front() + 1] = time[q.front()] + 1;        
        }
        if(q.front() * 2 < MAX && !time[q.front() * 2])
        {
            q.push_back(q.front() * 2);
            time[q.front() * 2] = time[q.front()] + 1;
        }
        q.pop_front();
    }
    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int s = 0, d = 0;
    cin >> s >> d;
    bfs(s, d);

    return 0;
}