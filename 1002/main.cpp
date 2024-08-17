#include <iostream>
#include <cmath>
using namespace std;

double p2p_dist(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int T; cin >> T;
    int x1, y1, r1, x2, y2, r2;
    while(T--)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double dist = p2p_dist(x1, y1, x2, y2);
        if(x1 == x2 && y1 == y2)
        {
            if(r1 == r2)
                cout << -1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if(r1 + r2 < dist)
            cout << 0 << '\n';
        else if(r1 + r2 == dist)
            cout << 1 << '\n';
        else if(abs(r1-r2) == dist)
            cout << 1 << '\n';
        else if(abs(r1-r2) > dist)
            cout << 0 << '\n';
        else
            cout << 2 << '\n';
    }
    return 0;
}
