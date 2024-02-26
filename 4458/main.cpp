#include <iostream>
#include <cctype>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i++)
    {
        string str = "";
        getline(cin, str);
        str[0] = toupper(str[0]);
        cout << str << '\n';
    }
    return 0;
}