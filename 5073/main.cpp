#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    while(true)
    {
        cin >> a >> b >> c;
        if(!a && !b && !c)
            break;
        if(a == b && b == c && c == a)
            cout << "Equilateral\n";
        else if (max(a, max(b,c)) >= a + b + c - max(a, max(b,c)))
            cout << "Invalid\n";
        else if (a == b || b == c || c == a)
            cout << "Isosceles\n";
        else
            cout << "Scalene\n";
    }
    return 0;
}
