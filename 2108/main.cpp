#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#define MAX 50000
using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n = 0;
    int tmp = 0;
    int sum = 0, freq = 0, min = 4000, max = -4000;
    vector<int> in;
    vector<int> mod;
    map<int, int> freqMap;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum += tmp;
        if (tmp < min)
            min = tmp;
        if (max < tmp)
            max = tmp;
        freqMap[tmp]++;
        in.push_back(tmp);
    }
    
    double avg = 1.0 * sum / n;
    cout << floor(avg + 0.5) << '\n';

    sort(in.begin(), in.end());
    cout << in[n / 2] << '\n';

    vector<pair<int,int>> vec( freqMap.begin(), freqMap.end() );
    sort(vec.begin(), vec.end(), cmp);
    freq = vec.back().second;

    for(auto it = vec.begin(); it != vec.end(); it++)
    {
        if(it->second == freq)
            mod.push_back(it->first);
    }
    cout << ((mod.size() == 1) ? mod[0] : mod[1]) << '\n';


    int range = max - min;
    cout << range << '\n';

    return 0;
}