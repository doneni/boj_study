#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<string> board(5);
    int maxLen = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> board[i];
        if(maxLen < board[i].length())
            maxLen = board[i].length();
    }
    
    for(int i = 0; i < maxLen; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(board[j].length() <= i)
                continue;
            cout << board[j][i];
        }
    }
    cout << '\n';
    
    return 0;
}