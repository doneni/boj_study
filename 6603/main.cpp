#include <iostream>
#include <cstring>
#define MAX 14
using namespace std;

int n = 6;
int k = 0;
int arr[MAX] = { 0, };
int seq[MAX] = { 0, };
bool visited[MAX] = { 0, };

void dfs(int depth)
{
    if(depth == n)
    {
        for(int i = 0; i < n; i++)
            cout << seq[i] << " ";
        cout << '\n';
        return;
    }

    for(int i = 0; i < k; i++)
    {
        if(!visited[i])
        {
            if(depth && arr[i] < seq[depth - 1])
                continue;
            visited[i] = true;
            seq[depth] = arr[i];
            dfs(depth + 1);
            visited[i] = false;
        }
    }
    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    while(1)
    {
        memset(arr, 0, MAX);
        memset(visited, false, MAX);
        cin >> k;
        if(!k)
            break;
        for(int i = 0; i < k; i++)
            cin >> arr[i];
        
        dfs(0);
        cout << '\n';
    }

    return 0;
}