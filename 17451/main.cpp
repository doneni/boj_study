#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N = 0; cin >> N;
    int v[N+1] = { 0, };
    for(int i = 1; i <= N; i++)
        cin >> v[i];
    long long mv = v[N];
    for(int i = N-1; i > 0; i--)
    {
        if(v[i] > mv)
            mv = v[i];
        else if(mv % v[i])
            mv = (mv / v[i] + 1) * v[i];
    }
    cout << mv << endl;
    return 0;
}
