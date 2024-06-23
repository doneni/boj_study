#include <iostream>
using namespace std;

int sum_proper_divisor(int n)
{
    int sum = 1;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }
    return sum;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int S; cin >> S;
    for(int i = S; ; i++)
    {
        int sum1 = sum_proper_divisor(i);
        if(i == sum1) continue;
        int sum2 = sum_proper_divisor(sum1);
        if(sum2 == i)
        {
            cout << i << ' ' << sum1 << '\n';
            break;
        }
    }
}
