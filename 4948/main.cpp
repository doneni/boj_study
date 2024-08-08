#include <iostream>
#define MAX 246913
using namespace std;

bool o[MAX] = { 0, };
int a[MAX] = { 0, };

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
    for(int i = 2; i < MAX; i++)
        a[i] = (o[i] ? a[i - 1] + 1 : a[i - 1]);
    int n = 0;
    while(true)
    {
        cin >> n;
        if(n == 0)
            break;
        cout << a[2 * n] - a[n] << '\n';
    }
    return 0;
}
