#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
};

Node* newNode(int x){
    Node n = newNode;
    n->root = x;
    n->left = n->right = NULL;
    return n;
}
Node* LCA(Node* root,int a,int b){
    if(root==NULL){
        return;
    }
    if (root->data == a || root->data == b)
        return root;

    Node* left = LCA(root->left, a, b);
    Node* right = LCA(root->right, a, b);

    if (left != NULL && right != NULL)
        return root;

    if (left != NULL)
        return left;

    return right;
}
int main(){
    Node* root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    Node* ans = LCA(root, 4, 5);

    cout << "LCA = " << ans->data;

    return 0;
}