#include <iostream>
#include <vector>
using namespace std;

vector<pair<int,int>> t(12);
    
void init()
{
    t[1].first = 12; t[1].second = 1600;
    t[2].first = 11; t[2].second = 894;
    t[3].first = 11; t[3].second = 1327;
    t[4].first = 10; t[4].second = 1311;
    t[5].first = 9; t[5].second = 1004;
    t[6].first = 9; t[6].second = 1178;
    t[7].first = 9; t[7].second = 1357;
    t[8].first = 8; t[8].second = 837;
    t[9].first = 7; t[9].second = 1055;
    t[10].first = 6; t[10].second = 556;
    t[11].first = 6; t[11].second = 773;
}

int main()
{
    int N = 0; cin >> N;
    init();
    cout << t[N].first << ' ' << t[N].second << endl;
    return 0;
}
