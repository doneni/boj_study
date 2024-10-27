#include <iostream>
#include <vector>
#define INF (int)1e9
using namespace std;

int N = 0; 
int Max = -INF, Min = INF;
vector<int> num;

void backtracking(int idx, int sum, int plus, int minus, int multiply, int divide) {
    if(idx == N) {
        Max = max(sum, Max);
        Min = min(sum, Min);
        return;
    }
    
    if(plus)
        backtracking(idx+1, sum+num[idx], plus-1, minus, multiply, divide);
    if(minus)
        backtracking(idx+1, sum-num[idx], plus, minus-1, multiply, divide);
    if(multiply)
        backtracking(idx+1, sum*num[idx], plus, minus, multiply-1, divide);
    if(divide)
        backtracking(idx+1, sum/num[idx], plus, minus, multiply, divide-1);
    
    return;   
}


int main()
{
    cin >> N;
    num.reserve(N);
    for(int i = 0; i < N; i++)
        cin >> num[i];
    int op[4] = { 0, };
    for(int i = 0; i < 4; i++)
        cin >> op[i];
    backtracking(1, num[0], op[0], op[1], op[2], op[3]);
    cout << Max << '\n' << Min; 
    return 0;
}
