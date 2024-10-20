#include <iostream>
#include <vector>
using namespace std;

int N = 0;
int answer = 1;
vector<int> v;
vector<int> m;

void dp(int x) {
    if(m[x] == 0)
        m[x] = 1;
    for(int i = x; i < N; i++) {
        if(v[x] > v[i] && m[x] + 1 > m[i]) {
            m[i] = m[x] + 1;
            answer = max(answer, m[i]);
            dp(i);
        }
    }
}

int main()
{
    cin >> N;
    v.reserve(N);
    m.reserve(N);
    for(int i = 0; i < N; i++)
        cin >> v[i];
    for(int i = 0; i < N; i++)
        dp(i);
    cout << answer;
    return 0;
}
