#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Name {
    string first;
    string last;
} name;

bool cmp(Name &n1, Name &n2)
{
    if(n1.last != n2.last)
        return n1.last < n2.last;
    return n1.first < n2.first;
}

int main(void)
{
    int N; cin >> N;
    vector<Name> v;
    while(N--)
    {
       cin >> name.first >> name.last; 
       v.push_back(name);
    }
    sort(v.begin(), v.end(), cmp);
    for(const auto& e : v)
        cout << e.first << ' ' << e.last << '\n';
}
