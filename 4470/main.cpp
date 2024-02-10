#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N = 0;
    cin >> N;
    cin.ignore();
    string str;
    for(int i = 1; i <= N; i++)
    {
        getline(cin, str);
        cin.clear();
        cout << i << ". " << str << '\n';
    }
    return 0;
}