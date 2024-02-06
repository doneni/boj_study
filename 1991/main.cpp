#include <iostream>
#include <vector>
#define MAX 26
using namespace std;

struct Node
{
    char data;
    int left;
    int right; 
};
vector<Node> tree(MAX);

void preorder(Node node)
{
    cout << node.data;
    if(node.left)
        preorder(tree[node.left]);
    if(node.right)
        preorder(tree[node.right]);
    return;
}

void inorder(Node node)
{
    if(node.left)
        inorder(tree[node.left]);
    cout << node.data;
    if(node.right)
        inorder(tree[node.right]);
    return;
}

void postorder(Node node)
{
    if(node.left)
        postorder(tree[node.left]);
    if(node.right)
        postorder(tree[node.right]);
    cout << node.data;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;

    int idx = 0;
    char _data, _left, _right;
    for(int i = 0; i < N; i++)
    {
        cin >> _data;
        idx = (int)_data - 65;
        cin >> _left >> _right;
        tree[idx].data = _data;
        tree[idx].left = (_left == '.') ? 0 : (int)_left - 65;
        tree[idx].right = (_right == '.') ? 0 : (int)_right - 65;
    }

    preorder(tree[0]);
    cout << '\n';
    inorder(tree[0]);
    cout << '\n';
    postorder(tree[0]);
    cout << '\n';

    return 0;
}