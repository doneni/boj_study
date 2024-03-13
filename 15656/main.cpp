#include <iostream>
#include <algorithm>
#define MAX 9
using namespace std;

int N = 0, M = 0;
int in[MAX] = { 0, };
int arr[MAX] = { 0, };
void dfs(int idx)
{
    if(idx == M)
    {
        for(int i = 0; i < M; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = 1; i <= N; i++)
    {
        arr[idx] = in[i];
        dfs(idx + 1);
    }
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;
    for(int i = 1; i <= N; i++)
        cin >> in[i];
    sort(in + 1, in + 1 + N);

    dfs(0);

    return 0;
}