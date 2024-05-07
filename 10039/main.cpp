#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int in = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> in;
        sum += (in < 40) ? 40 : in;
    }
    cout << sum / 5 << '\n';
    return 0;
}
