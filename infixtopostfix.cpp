#include<iostream>
#include<conio.h>
#define size 25
using namespace std;
struct stack{
	int tos;
	char item[size];
	
};
struct stack *st=NULL;
void push(char);
char pop();
int check_precedence(char ch){
	int pred;
	if(ch=='+' || ch=='-'){
	
		pred=1;}
	else if(ch=='*'|| ch=='/')
		pred=2;
	else if (ch=='^')
		pred==3;
	return pred;
				
}
int main(){
	char infix[size]={0},post[size]={0},ch,pop_ch;
	st->tos=-1;
	int j, k=0,pred,pred_pop;
	cout<<"enter the infix expression";
	cin.get(infix,19);
	for(j=0;infix[j]!='\0';j++){
		ch=infix[j];
		if(ch>='a'&& ch<='z')
			post[k++]=ch;
		else if(ch=='(')
			push(ch);
		else if(ch==')')
			{
				while(pop_ch=pop()!='('){
					post[k++]=pop_ch;
				}
					}
		else{
			if(st->tos==-1 || st->item[st->tos]=='(')
				push(ch);
			else{
				pop_ch=pop();
				pred=check_precedence(ch);
				pred_pop=check_precedence(pop_ch);
				if(pred_pop >=pred){
					post[k++]=pop_ch;
					push(ch);}
				else{
				
					push(pop_ch);
					push(ch);}
				}
		}					
	}
	while(st->tos>=0){
		post[k++]=pop();
		
	}
	cout<<"the postfix expression is "<<post;
	getch();

}
void push(char ch){
	st->item[++(st->tos)]=ch;
}
char pop(){
	return (st->item[(st->tos)--]);
}
