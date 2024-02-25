#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str = "";
    cin >> str;
    int freq[26] = { 0, };
    for(int i = 0; i < str.size(); i++)
        freq[(int)str[i] - 97]++;

    for(const auto& f : freq)
        cout << f << " ";

    return 0;
}