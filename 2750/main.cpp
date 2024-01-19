#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;

int main(void)
{
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