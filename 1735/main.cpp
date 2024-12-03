#include <iostream>
using namespace std;

int calc_gcd(int a, int b)
{
    while( b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }    
    return a;
}

int main()
{
    int A1, B1; cin >> A1 >> B1;
    int A2, B2; cin >> A2 >> B2;
    
    int A = A1 * B2 + A2 * B1;
    int B = B1 * B2;
    
    int gcd = calc_gcd(A, B);
    cout << A/gcd << ' ' << B/gcd;
    
    return 0;
}
