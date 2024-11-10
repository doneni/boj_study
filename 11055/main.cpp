#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N = 0;
vector<int> A;
vector<int> memo;

void dp(int idx)
{
    if(memo[idx] == 0) {
        memo[idx] = A[idx];
    }

    for(int i = idx+1; i < N; i++) {
        if(A[idx] < A[i] && memo[idx] + A[i] >= memo[i]) {
            memo[i] = memo[idx] + A[i];
        }
    }
    
    return;
}

int main()
{
    cin >> N;
    A.reserve(N);
    memo.resize(N, 0);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
        dp(i);
    }
    
    cout << *max_element(memo.begin(), memo.end());
    return 0;
}
