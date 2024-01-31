#include <iostream>
#include <vector>
#define MAX 51
using namespace std;

int N = 0, M = 0, K = 0;
int parents[MAX] = { 0, };
vector<int> know;
vector<vector<int>> party;

int Find(int x)
{
    if(parents[x] == x)
        return x;
    else
        return Find(parents[x]);
}

void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);
    parents[y] = x;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    
    cin >> N >> M >> K;

    int in = 0;
    for(int i = 0; i < K; i++)
    {
        cin >> in;
        know.push_back(in);
    }

    for(int i = 1; i <= N; i++)
        parents[i] = i;

    int tmp = 0;
    for(int i = 0; i < M; i++)
    {
        cin >> in;
        vector<int> v;
        for(int j = 0; j < in; j++)
        {
            cin >> tmp;
            v.push_back(tmp);
            if(j)
                Union(v[j - 1], v[j]);
        }
        party.push_back(v);
    }
    
    for(int i = 0; i < party.size(); i++)
    {
        bool flag = false;
        for(int j = 0; j < party[i].size(); j++)
        {
            for(int k = 0; k < K; k++)
            {
                if(Find(party[i][j]) == Find(know[k]))
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            M--;
    }
    cout << M << '\n';

    return 0;
}