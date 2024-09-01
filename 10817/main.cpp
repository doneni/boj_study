#include <iostream>
using namespace std;

int main(void) {
    int a, b, c; cin >> a >> b >> c;
    int mid = a + b + c - max(a,max(b,c)) - min(a,min(b,c));
    cout << mid;
    return 0;
}
