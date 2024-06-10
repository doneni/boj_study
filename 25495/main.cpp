#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    int n;
    int battery = 0, loss = 2, now = 0;
    while (N--)
    {
        cin >> n;
        if(now == n)
        {
            loss *= 2;
            battery += loss;
        }
        else
        {
            now = n;
            loss = 2;
            battery += loss;
        }
        if(battery >= 100)
        {
            now = 0;
            loss = 2;
            battery = 0;
        }
    }
    cout << battery << endl;
    return 0;
}
