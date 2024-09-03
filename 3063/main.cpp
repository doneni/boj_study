#include <iostream>
#define PI 3.141592653589
using namespace std;

int main()
{
    int R; cin >> R; 
    double r = R * R * PI;
    double S = 2.0 * R * R;
    cout << fixed; cout.precision(6);
    cout << r << '\n' << S;
    return 0;
}
