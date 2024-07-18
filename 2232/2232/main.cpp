#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N = 0;
int cnt = 0;
vector<int> m;
vector<int> e;
vector<bool> visited;

void boom(int idx)
{
    cnt++;
    visited[idx] = true;
    if(1 <= idx - 1 && !visited[idx - 1] && m[idx - 1] < m[idx])
        boom(idx - 1);
    if(idx + 1 <= N && !visited[idx + 1] && m[idx + 1] < m[idx])
        boom(idx + 1);
    return;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    cin >> N;
    m.reserve(N + 1);
    visited.reserve(N + 1);
    for(int i = 1; i <= N; i++)
        cin >> m[i];
    while(true)
    {
        if(cnt == N)
            break;
        int M = 0, idx = 0;
        for(int i = 1; i <= N; i++)
            if(M < m[i] && !visited[i])
            {
                M = m[i];
                idx = i;
            }
        e.push_back(idx);
        boom(idx);
    }
    sort(e.begin(), e.end());
    for(const auto& s : e)
        cout << s << '\n';
    return 0;
}
