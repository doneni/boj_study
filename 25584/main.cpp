#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <limits.h>
using namespace std;

int main()
{
    int N; cin >> N;
    unordered_map<string,int> workHour;
    
    int h[4] = { 4, 6, 4, 10 };
    while(N--) {
        for(int i = 0; i < 4; i++) {
            string worker;
            for(int j = 0; j < 7; j++) {
                cin >> worker;
                if(worker == "-")   { continue; }
                workHour[worker] += h[i];
            }
        }
    }
    int maxWorkHour = 0;
    int minWorkHour = INT_MAX;
    if(!workHour.empty()) {
        for(auto wh : workHour) {
            maxWorkHour = max(maxWorkHour, wh.second);
            minWorkHour = min(minWorkHour, wh.second);
        }
    }
    else {
        minWorkHour = 0;
    }
    cout << (maxWorkHour - minWorkHour <= 12 ? "Yes" : "No");
    return 0;
}