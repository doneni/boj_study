#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        for(int j = 0; j < str.size(); j++)
        {
            str[j] = tolower(str[j]);
        }
        cout << str << '\n';
    }
    
    return 0;
}