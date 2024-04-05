#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N = 0;
    cin >> N;
    vector<long long> v(N + 1);
    v[1] = 1; v[2] = 1;
    for(int i = 3; i <= N; i++)
        v[i] = v[i - 1] + v[i - 2];
    cout << v[N] << '\n';
    
    return 0;
}