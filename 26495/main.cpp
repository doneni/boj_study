#include <iostream>
#include <vector>
using namespace std;

string v[10] = {
    "0000\n0  0\n0  0\n0  0\n0000\n\n",
    "   1\n   1\n   1\n   1\n   1\n\n",
    "2222\n   2\n2222\n2\n2222\n\n",
    "3333\n   3\n3333\n   3\n3333\n\n",
    "4  4\n4  4\n4444\n   4\n   4\n\n",
    "5555\n5\n5555\n   5\n5555\n\n",
    "6666\n6\n6666\n6  6\n6666\n\n",
    "7777\n   7\n   7\n   7\n   7\n\n",
    "8888\n8  8\n8888\n8  8\n8888\n\n",
    "9999\n9  9\n9999\n   9\n   9\n\n",
};

int main()
{
    string s; cin >> s;
    for(size_t i = 0; i < s.size(); i++)
    {
        cout << v[s[i] - '0'];
    }
    return 0;
}
