#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--) {
        int y_score = 0, k_score = 0;
        for(int i = 0; i < 9; i++) {
            int y, k; cin >> y >> k;
            y_score += y;
            k_score += k;
        }
        if(y_score == k_score) {
            cout << "Draw\n";
        }
        else {
            cout << (y_score > k_score ? "Yonsei" : "Korea") << '\n';
        }
    }
    return 0;
}