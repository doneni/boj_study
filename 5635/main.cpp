#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<pair<string,string>> student(N); // birth, name
    
    string y, m, d;
    for(int i = 0; i < N; i++) {
        cin >> student[i].second;
        string date = "";
        cin >> d >> m >> y;
        date += y;
        if(m.size() == 1) {
            date += '0';
        }
        date += m;
        if(d.size() == 1) {
            date += '0';
        }
        date += d;
        student[i].first = date;
    }
    sort(student.begin(), student.end());
    cout << student.back().second << '\n' << student.front().second;
    return 0;
}
