#include <iostream>
#define MAX 10001
using namespace std;

bool o[MAX] = { 0, };

void eratos()
{
    for(int i = 2; i < MAX; i++)
        o[i] = true;
    for(int i = 2; i < MAX; i++)
    {
        if(o[i])
        {
            for(int j = 2 * i; j < MAX; j += i)
                o[j] = false;
        }
    }
    return;
}

int main()
{
    eratos();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        for(int i = n/2; i > 0; i--)
        {
            if(o[i] && o[n - i])
            {
                cout << i << ' ' << n - i << '\n';
                break;
            }
        }
    }
    return 0;
}
