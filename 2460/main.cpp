#include <iostream>
using namespace std;

int main()
{
    int stations = 10;
    int out = 0, in = 0;
    int people = 0;
    int max_people = 0;
    while(stations--) {
        cin >> out >> in;
        people -= out;
        people += in;
        max_people = max(max_people, people);
    }
    cout << max_people;
    return 0;
}
