#include <iostream>
using namespace std;

int main()
{
    int x = 1,  y = 1;
    while(true) {
        cin >> x >> y; 
        if(x == 0 && y == 0) {
            break;
        }
        cout << x + y << '\n';
    }
    return 0;
}
