#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_set>
#define MAX 9
using namespace std;

int N = 0, M = 0;
int in[MAX] = { 0, };
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };
unordered_set<string> dup;
void dfs(int idx)
{
    if(idx == M)
    {
        string str = "";
        for(int i = 0; i < M; i++)
        {
            str += to_string(arr[i]);
            str.push_back(' ');
        }
        if(dup.find(str) != dup.end())
            return;
        dup.insert(str);
        cout << str << '\n';
        return;
    }
    for(int i = 1; i <= N; i++)
    {
        if(visited[i] || (idx && in[i] < arr[idx - 1]))
            continue;
        visited[i] = true;
        arr[idx] = in[i];
        dfs(idx + 1);
        visited[i] = false;
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