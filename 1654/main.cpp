#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    int k = 0, n = 0;
    vector<long long> lan;
    cin >> k >> n;
    for(int i = 0; i < k; i++)
    {
        long long each_lan = 0;
        cin >> each_lan;
        lan.push_back(each_lan);
    }
    sort(lan.begin(), lan.end());

    // binary search
    long long result = 0;
    long long start = 1;
    long long end = lan.back();
    long long mid = (start + end) / 2;
    while(start <= end)
    {
        long long lan_cnt = 0;
        mid = (start + end) / 2;
        for(int i = 0; i < lan.size(); i++)
            lan_cnt += lan[i] / mid;
        if(lan_cnt >= n)
        {
            result = mid;
            start++;
        }
        else
            end--;
    }
    cout << result << endl;

    return 0;
}