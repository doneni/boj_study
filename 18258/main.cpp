#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N = 0; cin >> N;
    string cmd;
    queue<int> q;
    while(N--)
    {
        cin >> cmd;
        if(cmd == "push")
        {
            int n = 0; cin >> n;
            q.push(n);
        }
        else if(cmd == "pop")
            if(q.empty())
                cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        else if(cmd == "size")
            cout << q.size() << '\n';
        else if(cmd == "empty")
            cout << (q.empty() ? 1 : 0) << '\n';
        else if(cmd == "front")
            cout << (q.empty() ? -1 : q.front()) << '\n';
        else if(cmd == "back")
            cout << (q.empty() ? -1 : q.back()) << '\n';
    }
    return 0;
}
