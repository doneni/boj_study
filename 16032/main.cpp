#include <iostream>
#include <vector>
using namespace std;

double calcMean(vector<int> &v) {
    double sum = 0;
    for(int e : v) {
        sum += e;
    }
    return sum/v.size();
}

int main()
{
    while(true) {
        int n; cin >> n;
        if(n == 0)  { break; }
        vector<int> v;
        while(n--) {
            int x; cin >> x; v.push_back(x);
        }
        double mean = calcMean(v);
        int ans = 0;
        for(int e : v) {
            if(e <= mean) { ans++; }
        }
        cout << ans << '\n';
    }
    return 0;
}
