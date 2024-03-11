#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int cnt = 1;
    string str;
    getline(cin, str);
    for(const auto& e : str)
        if(e == ',')
            cnt++;
    cout << cnt << '\n';

    return 0;
}