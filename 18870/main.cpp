#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n = 0;
    cin >> n;

    vector<int> iv;
    vector<int> v;
    int in = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        iv.push_back(in);
        v.push_back(in);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < n; i++)
        cout << lower_bound(v.begin(), v.end(), iv[i]) - v.begin() << " ";
    return 0;
}