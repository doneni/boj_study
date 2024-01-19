#include <iostream>
#include <algorithm>
#define MAX 1000000
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    int arr[MAX] = { 0, };
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << '\n'; 

    return 0;
}