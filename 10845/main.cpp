#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    queue<int> q;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        string cmd;
        cin >> cmd;
        if(cmd == "push")
        {
            int num = 0;
            cin >> num;
            q.push(num);
        }
        else if(cmd == "pop")
        {
            if(q.empty())
                cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(cmd == "size")
            cout << q.size() << '\n';
        else if(cmd == "empty")
            cout << q.empty() << '\n';
        else if(cmd == "front")
            cout << (q.empty() ? -1 : q.front()) << '\n';
        else
            cout << (q.empty() ? -1 : q.back()) << '\n';
    }

    return 0;
}