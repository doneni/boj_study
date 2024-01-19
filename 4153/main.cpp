#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[3] = { 0, };
    while(1)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        if(!arr[0] && !arr[1] && !arr[2])
            return 0;
        sort(arr, arr + 3);

        if(pow((long long)arr[0], 2) + pow((long long)arr[1], 2) == pow((long long)arr[2], 2))
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }

    return 0;
}