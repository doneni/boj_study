#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    while(n--) {
        int p; cin >> p;
        int maxPrice = 0;
        string maxPlayer = "";
        while(p--) {
            int price;
            string player;
            cin >> price >> player;
            if(maxPrice < price) {
                maxPrice = price;
                maxPlayer = player;
            }
        }
        cout << maxPlayer << '\n';
    }
    return 0;
}
