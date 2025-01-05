#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        vector<char> v(N);
        int longest = 0;
        int streak = 0;
        for(int i = 0; i < N; i++) {
            cin >> v[i];
            if(i == 0) {
                if(v[i] == 'X') {
                    streak++;
                }
            }
            else {
                if(v[i] == 'X') {
                    if(v[i-1] == 'X') {
                        streak++;
                    }
                    else {
                        streak = 1;
                    }
                }
                else {
                    longest = max(longest, streak);
                    streak = 0;
                }
            }
        }
        longest = max(longest, streak);
        cout << "The longest contiguous subsequence of X's is of length " << longest << '\n';
    }
    return 0;
}