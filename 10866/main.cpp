#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    deque<int> dq;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        string cmd;
        cin >> cmd;
        if(cmd == "push_front")
        {
            int num = 0;
            cin >> num;
            dq.push_front(num);
        }
        else if(cmd == "push_back")
        {
            int num = 0;
            cin >> num;
            dq.push_back(num);
        }
        else if(cmd == "pop_front")
        {
            if(dq.empty())
                cout << -1 << '\n';
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(cmd == "pop_back")
        {
            if(dq.empty())
                cout << -1 << '\n';
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if(cmd == "size")
            cout << dq.size() << '\n';
        else if(cmd == "empty")
            cout << dq.empty() << '\n';
        else if(cmd == "front")
            cout << (dq.empty() ? -1 : dq.front()) << '\n';
        else
            cout << (dq.empty() ? -1 : dq.back()) << '\n';
    }

    return 0;
}