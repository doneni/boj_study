#include <iostream>
#include <vector>
using namespace std;

int calc_dist(string s1, string s2, string s3)
{
    int diff = 0;
    for(size_t i = 0; i < 4; i++)
    {
        if(s1[i] != s2[i])
            diff++;
        if(s2[i] != s3[i])
            diff++;
        if(s3[i] != s1[i])
            diff++;
    }
    return diff;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int T = 0; cin >> T;
    while(T--)
    {
        int N = 0; cin >> N;
        vector<string> v(N);
        for(int i = 0; i < N; i++)
            cin >> v[i];
        if(N > 32)
        {
            cout << 0 << endl;
            continue;
        }
        int min_dist = 12;
        for(int i = 0; i < N; i++)
            for(int j = i + 1; j < N; j++)
                for(int k = j + 1; k < N; k++)
                    min_dist = min(min_dist, calc_dist(v[i], v[j], v[k]));
        cout << min_dist << '\n';
    }
    return 0;
}
