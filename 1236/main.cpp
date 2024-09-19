#include <iostream>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    bool n[N] = { 0, };
    bool m[M] = { 0, };
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
        {
            char c; cin >> c;
            if(c == 'X')
            {
                n[i] = true;
                m[j] = true;
            }
        }
    int x = 0, y = 0;
    for(int i = 0; i < N; i++)
        if(n[i] == 0)   
            x++;
    for(int j = 0; j < M; j++)
        if(m[j] == 0)
            y++;
    cout << x + y - min(x, y);
    return 0;
}
