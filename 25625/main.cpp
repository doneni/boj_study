#include <iostream>
using namespace std;

int main(void) {
    int x,y;
    cin >> x >> y;
    cout << (x > y ? x + y : y - x);
}