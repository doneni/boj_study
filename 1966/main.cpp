#include <iostream>
#include <vector>
using namespace std;

struct doc
{
    int idx;
    int prior;
};

vector<doc> pq;

bool operator<(doc d1, doc d2)
{
    return d1.prior < d2.prior;
}

int highPrior()
{
    int high = 0;
    for(int i = 0; i < pq.size(); i++)
    {
        if(pq[i].prior > high)
            high = pq[i].prior;
    }
    return high;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t = 0, n = 0, m = 0; 
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int turn = 1;
        pq.clear();
        cin >> n >> m;
        doc tmp;
        for (int j = 0; j < n; j++)
        {
            tmp.idx = j;
            cin >> tmp.prior;
            pq.push_back(tmp);
        }
        while(!pq.empty())
        {
            if(pq.front().prior < highPrior())
            {
                pq.push_back(pq.front());
                pq.erase(pq.begin());
                continue;
            }
            if(pq.front().idx == m)
                cout << turn << '\n';
            pq.erase(pq.begin());
            turn++;
        }
    }
    return 0;
}