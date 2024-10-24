#include <iostream>
using namespace std;

int main()
{
    int ans = 0;
    int a[3] = { 0, };
    int r[3] = { 0, };
    for(int i = 0; i < 3; i++)
        cin >> a[i];
    for(int i = 0; i < 3; i++)
        cin >> r[i];
    for(int i = 0; i < 3; i++)
        if(a[i] < r[i])
            ans += r[i] - a[i];
    cout << ans;
    return 0;
}
