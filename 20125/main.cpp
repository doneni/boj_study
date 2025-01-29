#include <iostream>
#include <vector>
using namespace std;

int N = 0;

int countStars(const vector<vector<char>>& cookie, int x, int y, int dx, int dy) {
    int stars = 0;
    while(x >= 0 && y >= 0 && x < N && y < N && cookie[x][y] == '*') {
        stars++;
        x += dx;
        y += dy;
    }
    return stars;
}

int main()
{
    cin >> N;
    vector<vector<char>> cookie(N, vector<char>(N, ' '));
    pair<int,int> heart;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> cookie[i][j];
            if(heart.first == 0 && cookie[i][j] == '*') {
                heart.first = i+1;
                heart.second = j;
            }
        }
    }
    cout << heart.first+1 << ' ' << heart.second+1 << '\n';
    
    int lenLeftArm = countStars(cookie, heart.first, heart.second - 1, 0, -1);
    int lenRightArm = countStars(cookie, heart.first, heart.second + 1, 0, 1);
    int lenWaist = countStars(cookie, heart.first + 1, heart.second, 1, 0);
    
    pair<int,int> hip = {heart.first + lenWaist, heart.second};
    
    int lenLeftLeg = countStars(cookie, hip.first + 1, hip.second - 1, 1, 0);
    int lenRightLeg = countStars(cookie, hip.first + 1, hip.second + 1, 1, 0);
    
    cout << lenLeftArm << ' ' << lenRightArm << ' ' << lenWaist << ' ' << lenLeftLeg << ' ' << lenRightLeg;
    
    return 0;
}