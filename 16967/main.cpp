#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int H,W,X,Y;
	cin >> H >> W >> X >> Y;
	vector<vector<int>> A(H, vector<int>(W, 0));
	vector<vector<int>> B(H+X, vector<int>(W+Y, 0));

	for(int i = 0; i < H+X; i++) {
		for(int j = 0; j < W+Y; j++) {
			cin >> B[i][j];
		}
	}

	for(int i = 0; i < H; i++) {
		for(int j = 0; j < W; j++) {
			if(X <= i && Y <= j) {
				A[i][j] = B[i][j] - A[i-X][j-Y];
			}
			else {
				A[i][j] = B[i][j];
			}
		}
	}
	
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cout << A[i][j] << ' ';
        }
        cout << '\n';
    }

	return 0;
}