#include <iostream>
#define PI 3.1415926535
using namespace std;

int main()
{
    int A1, P1, R1, P2; cin >> A1 >> P1 >> R1 >> P2;
    if(A1 * P2 > R1 * R1 * PI * P1) {
        cout << "Slice of pizza";
    } else {
        cout << "Whole pizza";
    }
    return 0;
}
