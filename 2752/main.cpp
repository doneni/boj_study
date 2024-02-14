#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[3] = { 0, };
    
    for(int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr + 3);
    
    for(int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    
    return 0;
}