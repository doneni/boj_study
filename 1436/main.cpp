#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int target = -1;
    int num = 660;
    string str = to_string(num);
    cin >> target;
    
    while(1)
    {
        if(target == 0)
            break;
        str = to_string(num++);
        if(str.find("666") != string::npos)
            target--;
    }

    cout << str << endl;

    return 0;
}