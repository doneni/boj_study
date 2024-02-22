#include <iostream>
#define MAX 9
using namespace std;

int N = 0, M = 0;
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
    int start = 1;
    if(idx)
        start = arr[idx - 1];
    for(int i = start; i <= N; i++)
    {
        arr[idx] = i;
        dfs(idx + 1);
    }
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;
    dfs(0);

    return 0;
}