#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    string input;
    cin >> input;
    
    vector<int> v;
    for(const auto & i : input)
        v.push_back((int)i - 48);
        
    sort(v.begin(), v.end(), cmp);
    for(const auto & e : v)
        cout << e;
    cout << '\n';

    return 0;
}