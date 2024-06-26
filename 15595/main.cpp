#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL), cout.fixed, cout.precision(14); ios_base::sync_with_stdio(false);
    int N = 0; cin >> N;
    set<string> corr_id;
    unordered_map<string, int> um;
    int check_id, check_res, used_mem, run_time, lang, code_len;
    string user_id;
    while(N--)
    {
        cin >> check_id >> user_id >> check_res >> used_mem >> run_time >> lang >> code_len;
        if(check_res == 4)
        {
            if(user_id == "megalusion")
                continue;
            corr_id.insert(user_id);
        }
        else if(corr_id.find(user_id) == corr_id.end())
                um[user_id]++;
    }
    int incorr = 0;
    for(auto it = um.begin(); it != um.end(); it++)
    {
        if(corr_id.find((*it).first) != corr_id.end())
            incorr += (*it).second; 
    }
    cout << (corr_id.size() == 0 && incorr == 0 ? 0 : 100.0 * corr_id.size() / (corr_id.size() + incorr)) << endl;
    return 0;
}
