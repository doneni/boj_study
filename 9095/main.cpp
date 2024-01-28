#include <iostream>
#define MAX 11
using namespace std;

int arr[MAX] = { 0, };

void dp()
{
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for(int i = 4; i < MAX; i++)
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];

    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t = 0;
    cin >> t;

    dp();

    int in = 0;
    for(int i = 0; i < t; i++)
    {
        cin >> in;
        cout << arr[in] << '\n';
    }


    return 0;
}