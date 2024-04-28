#include <iostream>
using namespace std;

int main()
{
    int X = 0; cin >> X;
    
    int n = 1;
    while(X > n)
        X -= n++;

    if(n % 2)
        cout << n - X + 1 << '/' << X << '\n';
    else
        cout << X << '/' << n - X + 1 << '\n';
        
    return 0;
}
