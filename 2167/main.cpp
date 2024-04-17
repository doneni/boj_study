#include <iostream>
#define MAX 301
using namespace std;

int main()
{
    int N = 0, M = 0;
    cin >> N >> M;
    int arr[MAX][MAX] = { 0, };
    int input;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            cin >> input;
            arr[i][j] = arr[i - 1][j] + input;
        }
    }
    int K = 0;
    cin >> K;
    int i, j, x, y;
    while(K--)
    {
        cin >> i >> j >> x >> y;
        int sum = 0;
        for(int m = j; m <= y; m++)
        {
            sum += (arr[x][m] - arr[i - 1][m]);
        }
        cout << sum << '\n';
    }   
    return 0;
}
