#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    while(1)
    {
        int v = 0;
        string str;
        getline(cin, str);
        if(str[0] == '#' && str.size() == 1)
            return 0;

        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                v++;
        }
        cout << v << '\n';
    }
    
    return 0;
}