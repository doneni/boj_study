#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    int cnt = 0;
    string in;
    while(N--)
    {
        cin >> in;
        stack<char> stck;
        for(const auto e : in)
        {
            if(!stck.empty() && stck.top() == e)
                stck.pop();
            else
                stck.push(e);
        }
        if(stck.empty())
            cnt++;
    }
    cout << cnt << '\n';

    return 0;
}
