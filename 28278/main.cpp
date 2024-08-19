#include <iostream>
#include <stack>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N; cin >> N;
    stack<int> stck;
    int cmd = 0;
    while(N--)
    {
        cin >> cmd;
        switch(cmd)
        {
            case 1:
                int x; cin >> x;
                stck.push(x);
                break;
            case 2:
                if(stck.empty())
                    cout << -1 << '\n';
                else
                {
                    cout << stck.top() << '\n';
                    stck.pop();
                }
                break;
            case 3:
                cout << stck.size() << '\n';
                break;
            case 4:
                cout << stck.empty() << '\n';
                break;
            case 5:
                if(stck.empty())
                    cout << -1 << '\n';
                else
                    cout << stck.top() << '\n';
                break;
        }
    }
    return 0;
}
