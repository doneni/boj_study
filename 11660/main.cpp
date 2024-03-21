#include <iostream>
#define MAX 1025
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    int N = 0, M = 0;
    int b[MAX][MAX] = { 0, };
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    cin >> N >> M;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            cin >> b[i][j];
            b[i][j] += b[i][j - 1];
        }
    }

    for(int i = 0; i < M; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        int rst = 0; 
        for(int j = x1; j <= x2; j++)
        {
            rst += b[j][y2] - b[j][y1 - 1];
        }
        cout << rst << '\n';
    }

    return 0;
}