#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, int> um;
void init()
{
    um.insert(make_pair("black", 0));
    um.insert(make_pair("brown", 1));
    um.insert(make_pair("red", 2));
    um.insert(make_pair("orange", 3));
    um.insert(make_pair("yellow", 4));
    um.insert(make_pair("green", 5));
    um.insert(make_pair("blue", 6));
    um.insert(make_pair("violet", 7));
    um.insert(make_pair("grey", 8));
    um.insert(make_pair("white", 9));
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    init();
    string ans = "";
    string color = "";
    for(int i = 0; i < 2; i++)
    {
        cin >> color;
        ans += to_string(um[color]);
    }

    cin >> color;
    for(int i = 0; i < um[color]; i++)
        ans += "0";

    cout << stoll(ans) << '\n';

    return 0;
}