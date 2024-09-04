#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, w, h; cin >> n >> w >> h;
    while(n--)
    {
        double in; cin >> in;
        if(in <= w || in <= h || in <= sqrt(w*w + h*h))
            cout << "DA\n";
        else
            cout << "NE\n";
    }
    return 0;
}
