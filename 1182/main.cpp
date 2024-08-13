#include <iostream>
#define MAX 20
using namespace std;

int N = 0;
int S = 0;
int ans = 0;
int a[MAX] = { 0, };

void dfs(int idx, int sum)
{
    if(idx == N)
        return;
    if(sum + a[idx] == S)
        ans++;
    dfs(idx + 1, sum);
    dfs(idx + 1, sum + a[idx]);
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    cin >> N >> S; 
    for(int i = 0; i < N; i++)
        cin >> a[i];
    dfs(0, 0);
    cout << ans << '\n';
    return 0;
}
