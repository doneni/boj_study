#include <iostream>
#include <set>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    FASTIO;
    int T; cin >> T;
    while(T--)
    {
        int cmd; cin >> cmd;
        multiset<int> ms; 
        while(cmd--)
        {
            string c; int n; cin >> c >> n;
            if(c == "I")
                ms.insert(n);
            else if(ms.empty())
                continue;
            else
            {
                if(n == 1)
                    ms.erase(--ms.end());
                else
                    ms.erase(ms.begin());
            }
        }
        if(ms.empty())
            cout << "EMPTY\n";
        else
            cout << *(--ms.end()) << ' ' << *ms.begin() << '\n';
    }
    return 0;
}
