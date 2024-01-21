#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 10001
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    short in = 0;
    vector<int> arr(MAX);
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        arr[in]++;
    }

    for(short i = 1; i < MAX; i++)
        for(int j = 0; j < arr[i]; j++)
            cout << i << '\n';

    return 0;
}