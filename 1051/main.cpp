#include <iostream>
#define MAX 50
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0, M = 0;
    int arr[MAX][MAX] = { 0, };
    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        string num;
        cin >> num;
        for(int j = 0; j < M; j++)
            arr[i][j] = (int)num[j] - 48;
    }

    int max = 1;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
        {
            int x = i + 1;
            int y = j + 1;
            while(1)
            {
                if(x > N - 1 || y > M - 1)
                    break;
                if(arr[i][j] == arr[x][j] && arr[x][j] == arr[i][y] && arr[i][y] == arr[x][y])
                {
                    if(max < (x - i + 1) * (y - j + 1))
                        max = (x - i + 1) * (y - j + 1);
                }
                x++; y++;
            }
        }

    cout << max << endl;
    
    return 0;
}
