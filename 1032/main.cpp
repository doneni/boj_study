#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;
    
    string in;
    string p;
    cin >> p;
    for(int i = 1; i < N; i++)
    {
        cin >> in;
        for(int j = 0; j < in.size(); j++)
        {
            if(in[j] == p[j] || p[j] == '?')
                continue;
            else
                p[j] = '?';
        }
    }
    cout << p << '\n';
    
    return 0;
}