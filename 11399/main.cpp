#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0; 
    cin >> n;

    int arr[MAX] = { 0, };
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    long long sum = 0;
    for(int i = 0; i < n; i++)
        sum += (n - i) * arr[i];
    cout << sum << endl;

    return 0;
}