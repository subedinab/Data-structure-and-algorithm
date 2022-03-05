#include<iostream>

#include<queue>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

node* createnode(int data){
	node* newnode=new node();
/*	if(! newnode){
		cout<<"memory error";
		
	}*/
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
	
}
node* insert(node* root,int data){
	if (root=NULL){
		createnode(data);
		return root;
	}
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		node  *temp=q.front();
		q.pop();
		if(temp->left != NULL){
			q.push(temp->left);
		}
		else{
			temp->left=createnode(data);
			return root;
		}
	
		if(temp->right != NULL){
			q.push(temp->right);}
		else{
			temp->right=createnode(data);
			return root;
		}	
		
		
	}
}


void inorder(node *temp){
	if(temp==NULL){
		return ;
		
	}
	inorder(temp->left);
	cout<<temp->data;
	inorder(temp->right);
}

int main(){
	node *root=createnode(10);
	root->left=createnode(12);
	root->right=createnode(15);
	root->left->left=createnode(34);
	root->left->right=createnode(18);
	cout<<"inorder  before";
	inorder(root);
	cout<<"inorder after insertion";
	int k=12;
	insert(root,k);
	inorder(root);
	return 0;
	//getch();
}
