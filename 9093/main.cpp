#include <iostream>
using namespace std;

void rev(string word)
{
    for(size_t i = 0; i < word.size(); i++)
        cout << word[word.size() - i - 1];
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T = 0;
    cin >> T;
    cin.ignore();
    string str;
    for(int i = 0; i < T; i++)
    {
        getline(cin, str);
        string word;
        for(size_t i = 0; i < str.size(); i++)
        {
            if(i == str.size() - 1)
            {
                word.push_back(str[i]);
                rev(word);
                cout << '\n';
            }
            else if(str[i] == ' ')
            {
                rev(word);
                cout << str[i];
                word.clear();
            }
            else
                word.push_back(str[i]);
        }
    }
    return 0;
}