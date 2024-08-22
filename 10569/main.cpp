#include <iostream>
using namespace std;
int main()
{
    int t = 0; cin >> t;
    while(t--)
    {
        int v,e; cin >> v >> e;
        cout << e - v + 2 << '\n';
    }
    return 0;
}
