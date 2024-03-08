#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        int change = 0;
        cin >> change;

        cout << change / 25 << ' ';
        change = change % 25;

        cout << change / 10 << ' ';
        change = change % 10;

        cout << change / 5 << ' ';
        change = change % 5;

        cout << change << '\n';
    }
    return 0;
}