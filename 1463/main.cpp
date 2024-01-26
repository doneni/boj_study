#include <iostream>
#define MAX 1000001
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0; 
    cin >> n;

    int arr[MAX] = { 0, };
    for(int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + 1;
        if(!(i % 3))
            arr[i] = (arr[i / 3] + 1 < arr[i]) ? arr[i / 3] + 1 : arr[i];
        if(!(i % 2))
            arr[i] = (arr[i / 2] + 1 < arr[i]) ? arr[i / 2] + 1 : arr[i]; 
    }

    cout << arr[n] << '\n';

    return 0;
}