#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> a;

int main(void)
{  
    cin.tie(NULL);
    int n = 0, m = 0;
    int input = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        a.push_back(input);
    }
    sort(a.begin(), a.end());

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> input;
        cout << binary_search(a.begin(), a.end(), input) << '\n';
    }

    return 0;
}