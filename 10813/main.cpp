#include <iostream>
#define MAX 101
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    int N = 0, M = 0;
    cin >> N >> M;
    int arr[MAX] = { 0, };
    for(int i = 1; i <= N; i++)
        arr[i] = i;

    int i, j;
    for(int m = 0; m < M; m++)
    {
        cin >> i >> j;
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    for(int i = 1; i <= N; i++)
        cout << arr[i] << ' ';
    return 0;
}