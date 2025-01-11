#include <iostream>
#include <map>
using namespace std;

int main()
{
    int N; cin >> N;
    map<string,int> cookies;
    int warnings = 0;
    for(int i = 1; i <= N; i++) {
        string name; cin >> name;
        cookies[name]++;
        if(cookies[name]-1 > i-cookies[name]) {
            warnings++;
        }
    }
    cout << warnings;
    return 0;
}