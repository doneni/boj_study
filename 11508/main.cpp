#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int n, int m)
{
    return n > m;
}

int main()
{
    int n; cin >> n;
    int a[n] = { 0, };
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n, cmp);
    if(n >= 3) {
        for(int i = 0; i < n; i++)
        {
            if((i+1) % 3 == 0)
                sum -= a[i];
        }
    }
    cout << sum;
    return 0;
}
