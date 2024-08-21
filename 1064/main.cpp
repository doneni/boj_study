#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double p2p_dist(pair<double,double> p1,pair<double,double> p2)
{
    return sqrt(pow(p1.first-p2.first, 2) + pow(p1.second-p2.second, 2));
}

int main()
{
    vector<pair<double,double>> p(3);
    for(int i = 0; i < 3; i++)
        cin >> p[i].first >> p[i].second;
    if((p[0].second-p[1].second)*(p[2].first-p[1].first) == (p[2].second-p[1].second)*(p[0].first-p[1].first))
    {
        cout << -1;
        return 0;
    }
    double d1 = p2p_dist(p[0], p[1]);
    double d2 = p2p_dist(p[1], p[2]);
    double d3 = p2p_dist(p[2], p[0]);
    cout << fixed; cout.precision(16);
    cout << 2 * (max(d1, max(d2, d3)) - min(d1, min(d2, d3)));
    return 0;
}
