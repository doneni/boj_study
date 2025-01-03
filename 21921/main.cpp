#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, X; cin >> N >> X;
    vector<int> visitor(N+1);
    vector<int> visitorSum(N+1);
    for(int i = 1; i <= N; i++) {
        cin >> visitor[i];
        visitorSum[i] = visitorSum[i-1] + visitor[i];
    }
    
    int maxVisitorCnt = 0;
    int maxVisitorDays = 0;
    for(int i = 1; i <= N-X+1; i++) {
        int v = visitorSum[i+X-1] - visitorSum[i-1];
        if(v > maxVisitorCnt) {
            maxVisitorCnt = v;
            maxVisitorDays = 1;
        }
        else if(v == maxVisitorCnt) {
            maxVisitorDays++;
        }
    }
    if(maxVisitorCnt) {
        cout << maxVisitorCnt << '\n' << maxVisitorDays;
    }
    else {
        cout << "SAD";
    }
    
    return 0;
}