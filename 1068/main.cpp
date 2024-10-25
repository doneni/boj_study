#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int idx;
    int parent;
} node;

vector<Node> nodes;
vector<bool> dead;

bool checkParents(Node n) { // check if parent node dead
    while(true) {
        if(dead[n.idx])
            return true;
        if(n.parent == -1)
            break;
        n = nodes[n.parent];
    }
    return false;
}

int main()
{
    int N; cin >> N;
    dead.reserve(N);
    for(int i = 0; i < N; i++) {
        cin >> node.parent;
        node.idx = i;
        nodes.push_back(node);
    }
    int removed; cin >> removed;
    dead[removed] = true;
    for(const auto& i : nodes) {
        if(!dead[i.idx])
            if(checkParents(i))
                dead[i.idx] = true;
        
    }
    
    int deadCnt = 0;
    vector<bool> haveChiled(N);
    for (const auto& e : nodes) {
        if(dead[e.idx])
            deadCnt++;
        if(dead[e.idx] || e.parent == -1)
            continue;
        haveChiled[e.parent] = true;
    }
    int leapCnt = 0;
    if(deadCnt == N-1) {
        for(int i = 0; i < N; i++)
            if(!dead[i] && nodes[i].parent == -1) {
                leapCnt = 1;
                break;
            }
    }
    else {
        for(int i = 0; i < N; i++)
            if(!dead[i] && !haveChiled[i])
                leapCnt++;
    }
    cout << leapCnt;
    return 0;
}
