#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t = 0;
    int in = 0; 
    for(int i = 0; i < 4; i++)
    {
        cin >> in;
        t += in;
    }
    
    cout << t / 60 << '\n';
    cout << t % 60 << '\n';

    return 0;
}