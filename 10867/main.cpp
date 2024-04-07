#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(const auto& e : v)
        cout << e << ' ';
    cout << endl;
    
    return 0;
}
