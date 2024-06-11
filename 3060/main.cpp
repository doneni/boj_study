#include <iostream>
using namespace std;

long long food = 0;
long long pig[6];

bool check()
{
    long long res = 0;
    for(int i = 0; i < 6; i++)
    {
        res += pig[i];
        if(res > food)
            return false;
    }
    return true;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int T = 0; cin >> T;
    while(T--)
    {
        cin >> food;
        for(int i = 0; i < 6; i++)
            cin >> pig[i];
        int day = 1;
        while(check())
        {
            day++;
            long long tmp[6];
            for(int i = 0; i < 6; i++)
                tmp[i] = pig[i];
            for(int i = 0; i < 6; i++)
                pig[i] = tmp[i] + (i == 0 ? tmp[5] : tmp[i - 1]) + tmp[5 - i] + (i == 5 ? tmp[0] : tmp[i + 1]);
        }
        cout << day << '\n';
    }
    return 0;
}
