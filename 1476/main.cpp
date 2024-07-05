#include <iostream>
using namespace std;

int main()
{
    int E, S, M; cin >> E >> S >> M;
    int y = 1;
    for(y = 1; ; y++)
    {
        if((y-E) % 15 == 0 && (y-S) % 28 == 0 && (y-M) % 19 == 0)
            break;
    }
    cout << y << '\n';
    return 0;
}
