#include <iostream>
using namespace std;

long long sumDigit(string n) {
    long long sum = 0;
    while(n.size() > 0) {
        sum += n.back() - '0';
        n.pop_back();
    }
    return sum;
}

int main()
{
    string a, b; cin >> a >> b;
    cout << sumDigit(a) * sumDigit(b);
    return 0;
}
