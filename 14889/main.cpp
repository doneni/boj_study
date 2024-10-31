#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 21
#define INF (int)1e9
using namespace std;

int N = 0;
int a[MAX][MAX] = { 0, };
int min_diff = INF;

void check_diff(vector<int> s) {
    vector<int> l;
    int idx = 0;
    for(int i = 1; i <= N; i++) {
        if(idx > s.size()-1 || s[idx] > i) {
            l.push_back(i);
            continue;
        }
        idx++;
    }
    int ssum = 0, lsum = 0;
    for(int i : s)
        for(int j : s)
            ssum += a[i][j];
    for(int i : l)
        for(int j : l)
            lsum += a[i][j];
    min_diff = min(min_diff, abs(ssum - lsum));
}

void backtracking(int idx, vector<int> s) {
    if(s.size() == N/2) {
        check_diff(s);
    }
    if(idx == N)
        return;
    backtracking(idx+1, s);
    s.push_back(idx);
    backtracking(idx+1, s);
    return;
}

int main()
{
    cin >> N;
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++)
            cin >> a[i][j];
    backtracking(1, vector<int>());
    cout << min_diff;
    return 0;
}
