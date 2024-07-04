#include <iostream>
#include <vector>
using namespace std;

char b[7][7] = { 0, };
int dx[4] = { 0, 1, 0, -1};
int dy[4] = { 1, 0, -1, 0};

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    vector<pair<int,int>> v;
    int ans = 0;
    for(int i = 0; i < 7; i++)
    {
        string s; cin >> s;
        int j = 2;
        if(i == 2 || i == 3 || i == 4)
            j = 0;
        for(const auto& c : s) {
            b[i][j++] = c;
            if(c == '.')
                v.push_back({i, j-1});
        }
    }
    for(const auto& e : v)
    {
        for(int i = 0; i < 4; i++)
        {
            int x = e.first + dx[i];
            int y = e.second + dy[i];
            if(0 <= x && x < 7 && 0 <= y && y < 7 && b[x][y] == 'o')
            {
                x += dx[i]; y += dy[i];
                if(0 <= x && x < 7 && 0 <= y && y < 7 && b[x][y] == 'o')
                    ans++;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
