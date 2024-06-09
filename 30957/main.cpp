#include <iostream>
using namespace std;

int main()
{
    int b = 0, s = 0, a = 0;
    int N = 0; cin >> N;
    char c;
    while(N--)
    {
        cin >> c;
        switch(c)
        {
            case 'B':
                b++;
                break;
            case 'S':
                s++;
                break;
            case 'A':
                a++;
                break;
        }
    }
    int m = max(max(b, s), a);
    if(m == b && b == s && s == a)
        cout << "SCU";
    else
    {
        if(m == b)
            cout << 'B';
        if(m == s)
            cout << 'S';
        if(m == a)
            cout << 'A';
    }
    return 0;
}
