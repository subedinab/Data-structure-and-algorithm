#include<iostream>
#include<conio.h>
using  namespace std;
 struct node{
 	int data;
 	struct node *front,*rear;
 };
 struct node *head=NULL;
 
 struct node* createnode(int val){
 	struct node *node1;
 	node1=new node();
 	node1->data=val;
	return node1;
 }
 
 void insert(int value){
 	struct node *node1;
 	node1=createnode(value);
 	node1->data=value;
 	if(head==NULL){
 		head=node1;
 		node1->rear=NULL;
 		node1->front=NULL;}
 	else{
 		struct node *t;
	 	t=head;
		 while(t->front!=NULL){
		 	t=t->front;
		 }	
		t->front=node1;
		node1->rear=t;
		node1->front=NULL;
	}
 		
 }
 void insertbeforeknode(struct node *k,int v){
 	struct node *t;
 	t=head;
 	while(t->front!=k){
 		t=t->front;
	 }
	 t->front=k;
	 k->front=t->front;
	 k->rear=t;
	 
	 
 }
void display(){
	struct node *t;
	t=head;
	while(t!=NULL){
		cout<<t->data;
		t=t->front;
	}
}		 
 int main(){
 	int choice,value;
 	struct node *k;
 	struct node *k1;
 	k=createnode(5);
 	k1=createnode(10);
 	insert(11);
 	insert(10);
 	insert(15);
 	display();
 	insertbeforeknode(head->front,19);
 	display();
 	getch();
 	
 }

