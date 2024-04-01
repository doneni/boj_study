#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    
    string str1, str2;
    cin >> str1 >> str2;
    str1.insert(0, " "); str2.insert(0, " ");
    int t[MAX][MAX] = { 0, };
    int lcs_len = 0;
    for(size_t j = 1; j < str2.size(); j++)
    {
        for(size_t i = 1; i < str1.size(); i++)
        {
            if(str1[i] == str2[j])
                t[i][j] = t[i - 1][j - 1] + 1;
            else
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            if(lcs_len < t[i][j])
                lcs_len = t[i][j];
        }
    }
    cout << lcs_len << '\n';
    return 0;
}