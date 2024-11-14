#include <iostream>
#include <cmath>
#define INF 1e9
using namespace std;

struct Point
{
    int x;
    int y;
} p;

double calc_dist(Point &p1, Point &p2)
{
    return sqrt(pow(p1.x-p2.x,2) + pow(p1.y-p2.y,2));
}

int main()
{
    Point points[4] = { 0, };
    for(int i = 0; i < 4; i++) {
        cin >> points[i].x >> points[i].y;
    }   
    
    double min_dist = INF;
    for(int i = 1; i < 4; i++) {
        for(int j = 1; j < 4; j++) {
            if(i == j)  {   continue;   }
            double dist = calc_dist(points[0], points[i]) + calc_dist(points[i], points[j]) + calc_dist(points[j], points[6-i-j]);
            min_dist = min(min_dist, dist);
        }
    }
    cout << (int)min_dist;
    return 0;
}
