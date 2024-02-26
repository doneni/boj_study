#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T = 0;
    cin >> T;
    string num;
    for(int i = 0; i < T; i++)
    {
        cin >> num;
        if(int(num.back() - 49) % 2)
            cout << "even" << '\n';
        else
            cout << "odd" << '\n';
    }

    return 0;
}