#include<iostream>
#include<conio.h>
#define size 100;
using namespace std;
struct node{
	int tos=-1;
	int data;
	struct node*next;
};
struct node *head=NULL;
void push(int val){
	struct node *s1;
	s1->data=val;
	s1=new node();
	if(tos==100)
		cout<<"the satck is full";
	if (head==NULL)
		head=s1;
		s1->next=NULL;
		tos++;
	else
		struct node*temp;
		temp=head;
		while(temp!=NUll){
			temp=temp->next;
		}
		temp->next=s1;
		s1->next=NULL;	
		tos++;
			
}
void pop(){
	struct node t1;
	if (head==NULL)
		cout<<"the satck is empty";
		tos--;
		
	else
	
		struct node*temp;
		temp=head;
		while(temp!=NUll){
			temp=temp->next;
		}
		cout<<"tthe popped value is "<<temp->next->data;
		tos--;
		delete temp->next;
			
}
int main(){
	
	
}
