#include <iostream>
using namespace std;

void euclidean(int n1, int n2, int* lcm, int* gcd)
{
    int tmp;
    *gcd = n1 * n2;
    while(n1 % n2)
    {
        tmp = n1;
        n1 = n2;
        n2 = tmp % n2;
    }

    *lcm = n2;
    *gcd /= n2;

    return;
}

int main(void)
{
    int n1 = 0, n2 = 0;
    int lcm = 0, gcd = 0;
    cin >> n1 >> n2;

    if(n1 < n2)
    {
        int tmp = n1;
        n1 = n2;
        n2 = tmp;
    }

    euclidean(n1, n2, &lcm, &gcd);

    cout << lcm << '\n' << gcd << '\n';

    return 0;
}