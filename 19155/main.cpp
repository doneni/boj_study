#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N = 0; cin >> N;
    vector<int> v(N);
    for(int i = 0; i < N; i++)
        cin >> v[i];
    for(auto& e : v)
    {
        e = N+1 - e;
        cout << e << ' ';
    }
    cout << '\n';
    return 0;
}
