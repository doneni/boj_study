#include <iostream>
using namespace std;

int N = 0; 
int min_move = (int)1e9;
string balls = ""; 

void try_move(char ball, bool left) {
    char another_ball = (ball == 'B' ? 'R' : 'B');
    bool start = false;
    int move = 0;
    int idx = 0;
    for(int i = 0; i < N; i++) {
        idx = (left ? i : N-1-i);
        if(balls[idx] == another_ball) { start = true; }
        if(start && balls[idx] == ball) {  move++; }
        if(move > min_move) { return; }
    }       
    min_move = min(min_move, move);
    
    return;
}

int main()
{
    cin >> N >> balls;
    
    try_move('B', true);
    try_move('B', false);
    try_move('R', true);
    try_move('R', false);

    cout << min_move << endl;

    return 0;
}