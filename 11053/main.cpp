#include <iostream>
#include <vector>
#define MAX 1000
using namespace std;

int N = 0;
vector<int> v;

int memo[MAX] = { 0, };
void dp(int idx)
{
    if(!memo[idx])
        memo[idx] = 1;
    for(int i = idx; i < N; i++)
        if(v[idx] < v[i] && memo[i] < memo[idx] + 1)
        {
            memo[i] = memo[idx] + 1;
            dp(i);
        }
}

int foo(int idx)
{

    int cnt = 1;
    int past = v[idx];
    for(int i = idx + 1; i < N; i ++)
        if(past < v[i])
        {
            cnt++;
            past = v[i];
        }
    return cnt;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    cin >> N;
    int tmp = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }

    for(int i = 0; i < N; i++)
        dp(i);

    int max = 0;
    for(int i = 0; i < N; i++)
    {
        if(max < memo[i])
            max = memo[i];
    }
    cout << max << '\n';

    return 0;
}