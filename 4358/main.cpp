#include <iostream>
#include <map>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    map<string, int> m;
    int N = 0;
    string t; 
    while(getline(cin, t))
    {
        N++;
        if(m.find(t) != m.end())    
            m[t]++;
        else
            m[t] = 1;
    }
    cout << fixed; cout.precision(4);
    for(auto const& e: m)
        cout << e.first << ' ' << 100.0 * e.second / N << '\n';
    return 0;
}
