#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(pair<int,double> &p1, pair<int,double> &p2)
{
    if(p1.second != p2.second)
        return p1.second < p2.second;
    return p1.first < p2.first;
}

int main()
{  
    int N; cin >> N;
    vector<pair<int,double>> vec;
    int idx = 1;
    while(N--)
    {
        int x, y, v; cin >> x >> y >> v;
        double s = sqrt(1.0 * x * x + y * y) / v;
        vec.push_back({idx++, s});
    }
    sort(vec.begin(), vec.end(), cmp);
    for(const auto& e : vec)
        cout << e.first << '\n';
    return 0;
}
