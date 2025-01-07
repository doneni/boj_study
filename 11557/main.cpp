#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        string maxSchool;
        int maxDrink = 0;
        while(N--) {
            string s; int d; cin >> s >> d;
            if(maxDrink < d) {
                maxDrink = d;
                maxSchool = s;
            }
        }
        cout << maxSchool << '\n';
    }
    return 0;
}
