#include <iostream>
using namespace std;

int N = 0; 

string s[5] = {
    "\"재귀함수가 뭔가요?\"\n",
    "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n",
    "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n",
    "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n",
    "라고 답변하였지.\n",
};
string t[3] = {
    "\"재귀함수가 뭔가요?\"\n",
    "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n",
    "라고 답변하였지.\n",
};

string u = "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";

void ref(int n) {
    string bar = "";
    for(int i = 0; i < 4*n; i++) {  bar += '_'; }
    if(n == 0)
        cout << u;
    if(n == N) {
        for(int i = 0; i < 3; i++)
            cout << bar << t[i];
    }
    else {
        for(int i = 0; i < 5; i++) {
            cout << bar << s[i];
            if(i == 3)
                ref(n+1);
        }
    }
    return;
}

int main()
{
    cin >> N;
    ref(0);

    return 0;
}
