#include<iostream>
#include<queue>
using namespace std;
struct Node{
   int data;
   Node *left,*right; 
 };
 
 Node* newNode(int x){
 	
 	Node* n = new Node;
 	n->data = x;
 	n->left=n->right=NULL;
 	return n;
 }
 
void BFS (Node* root){
	if(root==NULL){
		return ;
	}
	queue <Node*> q;
	q.push(root);
	
	while (!q.empty()){
		Node* temp = q.front();
		q.pop();
		
		cout<<"temp->data"<<"";
		if (temp->left!=NULL){
		   q.push(temp->left);
		}
		if (temp->right!=NULL){
		   q.push(temp->right);
		}
	}
}
int main(){
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	
	BFS(root);
	
	return 0;
}
