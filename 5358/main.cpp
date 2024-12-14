#include <iostream>
using namespace std;

int main()
{
    while(!cin.eof()) {
        string line;
        getline(cin, line);
        for(size_t i = 0; i < line.size(); i++) {
            if(line[i] == 'i') {  line[i] = 'e'; }
            else if (line[i] == 'e')  {   line[i] = 'i';  }
            else if (line[i] == 'I')  {   line[i] = 'E';    }
            else if (line[i] == 'E')  {   line[i] = 'I';    }
            
        }
        cout << line << '\n';
    }
    return 0;
}
