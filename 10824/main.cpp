#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<string> v(4);
    for(int i = 0; i < 4; i++)
        cin >> v[i];
    cout << stoll(v[0] + v[1]) + stoll(v[2] + v[3]) << '\n';

    return 0;
}