#include<iostream>
#include<conio.h>
using namespace std;
struct tree{
	int data;
	struct tree *left,*right;
};
struct tree *root=NULL,*newnode,*temp;
void menu(){
	cout<<"main menu"<<endl;
	cout<<"1.create bst"<<endl;
	cout<<"inorder traversal"<<endl;
	cout<<"preorder traversal"<<endl;
	cout<<"postorder traversal"<<endl;
}
void create(int item){
	int flag;
	newnode=new tree();
	newnode->left=NULL;
	newnode->right=NULL;
	newnode->data=item;
	if(root==NULL){
		root=newnode;
	}
	else{
		flag=1,temp=root;
		while(flag!=0){
			if(newnode->data<temp->data){
				if(temp->left==NULL){
					temp->left=newnode;
					flag=0;
				}
				else{
					temp=temp->left;
				}
			}
			else{
				if(temp->right==NULL){
					temp->right=newnode;
					flag=0;
				}
				else{
					temp=temp->right;
				}
			}
		}
	}
}
void inorder(struct tree*root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data;
		inorder(root->right);
	}
}
void preorder(struct tree *root){
	if(root!=NULL){
		cout<<root->data;
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct tree *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data;
	}
}
int search(struct tree *root,int key){
	struct tree*temp;
	temp=root;
	int flag=-1;
	while(temp->left!=NULL || temp->right!=NULL){
		if(temp->data=key){
		
			flag=1;}
		else if(temp->data>key){
		
			temp=temp->left;}	
		else if(temp->data<key){
		
			temp=temp->right;}	
	}
	//return flag;
}
int main(){
	int choice,item,key,status;
	menu();
	int flag=1;
	while(flag!=0){
		cout<<"enter your choice ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"enter data to insert";
				cin>>item;
				create(item);
				break;
			case 2:
				cout<<"inorder traversal";
				inorder(root);
				break;
			case 3:
				cout<<"preorder traversal";
				preorder(root);
				break;
			case 4:
				cout<<"post order traversal";
				postorder(root);
				break;
			case 5:
				cout<<"enter the key to search";
				cin>>key;
				status=search(root,key);
				if(status=1)
					cout<<"data is found";
				else
					cout<<"data not found";	
				break;	
			default:
				cout<<"enter the correct choice ";
				flag=0;
				break;				
		}
	}
	getch();
}
