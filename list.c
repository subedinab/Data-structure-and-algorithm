#include<stdio.h>
#include<conio.h>

struct node{
int info;
struct node *link;
};
struct node*START=NULL;

struct node * createnode(){
struct node *n;
n=(struct node*)malloc(sizeof(struct node));
return n;
}
void insertnode(){
struct node*temp,*t;
temp=createnode();
printf("enter the data");
scanf("%d",temp->info);
temp->link=NULL;
if(START=NULL){
START=temp;
}
else{
t=START;
while(t->link!=NULL){
t=t->link;
}
t->link=temp;
}
}
void deletenode(){
struct node* r;
if(START==NULL)
{
printf("the list is empty");
}
else{
r=START;
START=START->link;
free(r);}
}
void viewlist(){
struct node*t;
if(START==NULL){
printf("the list is empty");
}
else{
t=START;
while(t!=NULL){
printf("%d",t->info);
t=t->link;
}
}
}
void main(){
int ch;
while(1){
printf("1.add value\n");
printf("2.delete value\n");
printf("3.view value");
printf("enter your choice\n");
scanf("%d",&ch);

switch(ch){
case 1:
insertnode();
break;
case 2:
deletenode();
break;
case 3:
viewlist();
break;
default:
printf("there is no choice");
break;
}

}
getch();
}
