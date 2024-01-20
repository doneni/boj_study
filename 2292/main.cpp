#include <iostream>
using namespace std;

int bee(int n)
{
    if(n == 1 || n == 2)
        return n;
    else
        return 3 * (n - 2) * (n - 1) + bee(2);
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0; 
    cin >> n;

    int idx = 1;
    while(1)
    {
        if(bee(idx++) > n)
        {
            cout << idx - 2 << endl;
            break;
        }       
    }

    return 0;
}