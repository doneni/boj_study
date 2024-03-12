#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T = 0;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        string in;
        cin >> in;
        cout << in[0] - 48 + in[2] - 48 << '\n';
    }
    
    return 0;
}