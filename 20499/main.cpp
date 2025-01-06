#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s_kda; cin >> s_kda;
    int len = s_kda.size();
    int i_kda[3] = { 0, };
    
    int idx = 0;
    for(int i = 0; i < 3; i++) {
        string s = "";
        while(true) { 
            if(idx >= len || s_kda[idx] == '/')  { 
                i_kda[i] = stoi(s);
                idx++;
                break; 
            }
            else {
                s += s_kda[idx++];
            }
        }
    }
    cout << (i_kda[0] + i_kda[2] < i_kda[1] || i_kda[1] == 0 ? "hasu" : "gosu");
    return 0;
}