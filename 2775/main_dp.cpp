#include <iostream>
#define ROW 15
#define COL 15
using namespace std;

int arr[ROW][COL] = { 0, };

void init()
{
    for(int i = 1; i < COL; i++)
        arr[0][i] = i;
    for(int i = 1; i < ROW; i++)
        for(int j = 1; j < COL; j++)
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t = 0;
    int k = 0, n = 0; 
    cin >> t;

    init();

    for(int i = 0; i < t; i++)
    {
        cin >> k >> n;
        cout << arr[k][n] << endl;
    }

    return 0;
}