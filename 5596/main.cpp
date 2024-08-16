#include <iostream>
using namespace std;

int main()
{
    int s = 0, t = 0;
    int in = 0;
    for(int i = 0; i < 4; i++)
    {
        cin >> in;
        s += in;
    }
    for(int i = 0; i < 4; i++)
    {
        cin >> in;
        t += in;
    }
    cout << (t > s ? t : s);
    return 0;
}
