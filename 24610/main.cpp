#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int n, m; cin >> n >> m;
    int s[m] = { 0, };
    int a[m] = { 0, };
    int e = 0;
    for(int i = 0; i < m; i++)
    {
        cin >> s[i];
    }
    while(n)
    {
        if(e == m)
            break;
        for(int i = 0; i < m && n > 0; i++)
        {
            if(s[i] > 0)
            {   n--; a[i]++; s[i]--;    }
            else if(s[i] == 0)
            {   e++; s[i] = -1;     }
        }
    }
    for(int i = 0; i < m; i++)
        cout << a[i] << '\n';
    return 0;
}
