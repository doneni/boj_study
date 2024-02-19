#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string name;
    int age = 0, weight = 0;
    while(1)
    {
        cin >> name >> age >> weight;
        if(name == "#" && !age && !weight)
            break;
    
        cout << name << " ";
        if(age > 17 || weight >= 80)
            cout << "Senior" << '\n';
        else
            cout << "Junior" << '\n';
    }
    
    return 0;
}