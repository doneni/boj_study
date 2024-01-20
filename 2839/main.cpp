#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    int n_5 = n - n % 5, n_3 = n - n_5;
    while(1)
    {
        if((n_3 % 3) == 0)
            break;
        else
        {
            n_5 -= 5;
            n_3 += 5;
        }
        if(n_5 < 0)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << (n_5 / 5) + (n_3 / 3) << endl;

    return 0;
}