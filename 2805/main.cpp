#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    
    int N = 0, M = 0;
    cin >> N >> M;
    vector<int> tree(N);
    for(int i = 0; i < N; i++)
        cin >> tree[i];
    sort(tree.begin(), tree.end());
    
    long long ans = 0;
    long long len = 0;
    int start = 1, end = tree.back();
    int mid = 0;
    while(start <= end)
    {
        len = 0;
        mid = (start + end) / 2;
        for(const auto& e : tree)
            if(e > mid)
                len += e - mid;
        if(M <= len)
        {
            start = mid + 1;
            ans = mid;
        }
        else
            end = mid - 1;
    }
    cout << ans << '\n';

    return 0;
}