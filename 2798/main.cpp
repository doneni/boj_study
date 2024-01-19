#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0, m = 0;
    int arr[MAX] = { 0, };

    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    int sum = 0, max = 0;
    for(int i = 0; i < n; i++)
    {
        if(m < arr[i])
            continue;
        for(int j = i + 1; j < n; j++)
        {
            if(m < arr[i] + arr[j])
                continue;
            for(int k = j + 1; k < n; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if(max < sum && sum <= m)
                    max = sum;
            }
        }
    }
    cout << max << endl;

    return 0;
}