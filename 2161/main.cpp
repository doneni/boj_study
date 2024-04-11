#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
    int N = 0; cin >> N;
    deque<int> q;
    for(int i = 1; i <= N; i++)
        q.push_back(i);
       
    while(!q.empty())
    {
        cout << q.front() << ' ';
        q.pop_front();
        if(!q.empty())
        {
            q.push_back(q.front());
            q.pop_front();
        }
    }
    return 0;
}
