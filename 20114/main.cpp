#include <iostream>
using namespace std;

int main()
{
    int N, H, W; cin >> N >> H >> W;
    string s = "";
    for(int i = 0; i < N; i++)
        s += '?';
    for(int h = 0; h < H; h++)
        for(int i = 0; i < N; i++)
            for(int w = 0; w < W; w++)
            {
                char c; cin >> c;
                if(c != '?')
                    s[i] = c;
            }
    cout << s;
    return 0;
}
