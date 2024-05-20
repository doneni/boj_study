#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(char c1, char c2)
{
    return c1 > c2;
}

int main()
{
    string n; cin >> n;
    int sum = 0;
    bool zeroExists = false;
    for(const auto & e : n) {
        sum = (sum + e - '0') % 3;
        if(e == '0')
            zeroExists = true;
    }
    sort(n.begin(), n.end(), cmp);
    cout << ((sum == 0 && zeroExists) ? n : "-1") << '\n';
    return 0;
}
