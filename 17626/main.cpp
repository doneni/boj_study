#include <iostream>
#include <cmath>
#include <vector>
#define INF 50000
using namespace std;

int main(void)
{    
    int n = 0;
    cin >> n;

    vector<int> s;
    for(int i = 1; i <= int(sqrt(n) + 1); i++)
        s.push_back(i * i);
    vector<int> v(n + 1);
    v[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        int idx = -1, min = INF;
        while(s[++idx] <= i)
        {
            if(v[i - s[idx]] < min)
                min = v[i - s[idx]];
        }
        v[i] = min + 1;
    }
    cout << v[n] << '\n';
    
    return 0;
}