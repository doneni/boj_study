#include <iostream>
using namespace std;

int main()
{
    int p = 0; cin >> p;
    int c = 1000 - p;
    int y[6] = {500, 100, 50, 10, 5, 1};
    int cnt = 0;
    for(int i = 0; i < 6; i++)
    {
        while(c >= y[i])
        {
            cnt++;
            c -= y[i];
        }
    }
    cout << cnt;
    return 0;
}
