#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int>&p1, pair<int,int>&p2)
{
    if(p1.first < p2.first && p1.second < p2.second)
        return true;
    else
        return false;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    int t1 = 0, t2 = 0;
    vector<pair<int, int>> vec;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> t1 >> t2;
        vec.push_back(make_pair(t1, t2));
    }
    
    for(int i = 0; i < n; i++)
    {
        int rank = 1;
        for(int j = 0; j < n; j++)
        {
            if(i == j)
                continue;
            if(cmp(vec[i], vec[j]))
                rank++;
        }
        if(i == n - 1)
            cout << rank << endl;
        else
            cout << rank << " ";    
    }

    return 0;
}