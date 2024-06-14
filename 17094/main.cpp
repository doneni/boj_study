#include <iostream>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    char c;
    int t = 0, e = 0;
    while(N--)
    {
        cin >> c;
        if (c == '2') { t++; }
        else { e++; }
    }
    if(t > e)
        cout << 2 << '\n';
    else if(t < e)
        cout << 'e' << '\n';
    else
        cout << "yee" << '\n';
    return 0;
}
