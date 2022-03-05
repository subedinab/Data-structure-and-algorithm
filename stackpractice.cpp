#include<iostream>
#include<conio.h>
#define n 3
using namespace std;
struct stack{
	int tos=-1;
	int arr[n];
};

void push(int val){
	 struct stack *s1;
	if (s1->tos==100)
		cout<<"the stack is full";
	s1->arr[s1->tos]==val;
	s1->tos++;	
		
}
void display(){
	 struct stack *s2;
	while(s2->tos != -1){
		cout<<s2->arr[s2->tos];
		s2->tos--;
	}
}
void pop(){
	 struct stack *s3;
	if (s3->tos==-1)
		cout<<"the stack is empty";
	cout<<"the popped value is "<<s3->arr[s3->tos];
	s3->tos--;	
}
int main(){
	int choice,value ;
	while(1){
	cout<<"press 1 for push 2 for display 3 for pop";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"enter the value to push";
			cin>>value;
			push(value);
			break;
		case 2:
			display();
			break;
		case 3:
			pop();	
			break;
		default:
			cout<<"enter the right choice ";
			break;		
	}
	
	}
	getch();
	
}
