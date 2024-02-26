#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int ans = 0;
    char board[8][8] = { 0, };
    for(int i = 0; i < 8; i++)
    {
        int idx = (i % 2) ? 1 : 0;
        for(int j = 0; j < 8; j++)
        {
            cin >> board[i][j];
            if(j == idx)
            {
                if(board[i][j] == 'F')
                    ans++;
                idx += 2;
            }
        }
    }
    cout << ans << '\n';
    
    return 0;
}