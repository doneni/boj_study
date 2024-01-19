#include <iostream>
#include <stack>
using namespace std;

stack<int> stck;

void pop()
{
    if(stck.empty())
        cout << -1 << '\n';
    else
    {
        cout << stck.top() << '\n';
        stck.pop();
    }
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    string cmd;
    cin >> n;
    
    for(int i = 0; i < n ; i++)
    {
        cin >> cmd;
        if(cmd == "pop")
            pop();
        else if(cmd == "size")
            cout << stck.size() << '\n';
        else if(cmd == "empty")
            cout << stck.empty() << '\n';
        else if (cmd == "top")
            cout << (stck.empty() ? -1 : stck.top()) << '\n';
        else
        {
            int num = 0;
            cin >> num;
            stck.push(num);
        }
    }

    return 0;
}