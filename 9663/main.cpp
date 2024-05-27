#include <iostream>
#define MAX 16
using namespace std;

int col[MAX] = { 0, };
int N = 0, cnt = 0; 

bool promising(int depth)
{
    for(int i = 1; i < depth; i++)
        if(col[i] == col[depth] || abs(col[i] - col[depth]) == abs(i - depth))
            return false;
    return true;
}

void dfs(int depth)
{
    if(depth > N)
    {
        cnt++;
        return;
    }
    for(int i = 1; i <= N; i++)
    {
        col[depth] = i;
        if(promising(depth))
            dfs(depth + 1);
    }
}

int main()
{
    cin >> N;
    dfs(1);
    cout << cnt << endl;
    return 0;
}
