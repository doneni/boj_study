#include <iostream>
#include <vector>
#define MAX_K 100001
#define MAX_N 101
using namespace std;

vector<pair<int,int>> v(MAX_N);
int m[MAX_N][MAX_K] = { 0, };

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    int N = 0, K = 0;
    int weight = 0, value = 0;
    cin >> N >> K;
    for(int i = 1; i <= N; i++)
    {
        cin >> weight >> value;
        v[i] = {weight, value};
    }
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= K; j++)
        {
            weight = v[i].first;
            value = v[i].second;
            if(weight > j)
                m[i][j] = m[i - 1][j];
            else
                m[i][j] = max(m[i - 1][j], m[i - 1][j - weight] + value);
        }
    }
    cout << m[N][K] << '\n';

    return 0;
}