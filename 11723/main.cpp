#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    string cmd;
    int x = 0;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        cin >> cmd;
        if(cmd == "add")
        {
            cin >> x;
            s.insert(x);
        }
        else if(cmd == "remove")
        {
            cin >> x;
            auto iter = s.find(x);
            if(iter != s.end())
                s.erase(iter);
        }
        else if(cmd == "check")
        {
            cin >> x;
            cout << ((s.find(x) == s.end()) ? 0 : 1) << '\n';
        }
        else if(cmd == "toggle")
        {
            cin >> x;
            auto iter = s.find(x);
            if(iter == s.end())
                s.insert(x);
            else
                s.erase(iter);
        }
        else if(cmd == "all")
        {
            for(int i = 1; i <= 20; i++)
                s.insert(i);
        }
        else
        {
            s.clear();
        }
    }

    return 0;
}