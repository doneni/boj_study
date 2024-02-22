#include <iostream>
#define MAX 9
using namespace std;

int N = 0, M = 0;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };
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
        if(!visited[i])
        {
            visited[i] = true;
            arr[idx] = i;
            dfs(idx + 1);
            visited[i] = false;
        }
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