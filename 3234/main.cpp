#include <iostream>
using namespace std;

int X = 0, Y = 0, K = 0; 
bool heard = false;
int t = 0;
int x = 0, y = 0;

void check()
{
    if((x == X || x == X-1 || x == X+1) && (y == Y || y == Y-1 || y == Y+1))
    {
        heard = true;
        cout << t << '\n';
    }
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    cin >> X >> Y >> K;
    char c;
    t = 0;
    check();
    for(t = 1; t <= K; t++)
    {
        cin >> c;
        switch(c)
        {
            case 'I':
                x++;
                break;
            case 'S':
                y++;
                break;
            case 'Z':
                x--;
                break;
            case 'J':
                y--;
                break;
        }
        check();
    }
    if(!heard)
        cout << -1 << '\n';
    return 0;
}
