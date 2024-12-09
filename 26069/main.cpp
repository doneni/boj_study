#include <iostream>
#include <unordered_set>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    FASTIO;
    unordered_set<string> dancing;
    dancing.insert("ChongChong");
    int N; cin >> N;
    while(N--) {
        string name1, name2; cin >> name1 >> name2;
        if(dancing.find(name1) != dancing.end() || dancing.find(name2) != dancing.end()) {
            dancing.insert(name1);
            dancing.insert(name2);
        }
    }
    cout << dancing.size();
    
    return 0;
}
