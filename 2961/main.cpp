#include <iostream>
#include <vector>
#define INF 1e10
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N; cin >> N;
    vector<pair<int, int>> v(N);
    int diff = INF;
    for(int i = 0; i < N; i++)
        cin >> v[i].first >> v[i].second;
    for(int i = 1; i < (1 << N); i++) // bit masking
    {
        int S = 1, B = 0;
        for(int j = 0; j < N; j++)
        {
            if(i & (1 << j))
            {
                S *= v[j].first;
                B += v[j].second;
            }
        }
        diff = min(diff, abs(S-B));
    }
    cout << diff << '\n';
    return 0;
}
