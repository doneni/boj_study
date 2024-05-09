#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int n1, int n2)
{
    return n1 > n2;
}

int main()
{
    int N = 0; cin >> N;
    int sum = 0;
    vector<int> A(N);
    vector<int> B(N);
    for(int i = 0; i < N; i++)
        cin >> A[i];
    for(int i = 0; i < N; i++)
        cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), cmp);
    for(int i = 0; i < N; i++)
        sum += A[i] * B[i];
    cout << sum << '\n';
    return 0;
}
