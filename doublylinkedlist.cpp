#include<iostream>
#include<conio.h>
using namespace std;
struct single{
	int data;
	struct single *next;
};
struct single *head=NULL,*newnode,*p;
void menu(){
	cout<<"main menu"<<endl;
	cout<<"               "<<endl;
	cout<<"1.create singly linked list"<<endl;
	cout<<"2.insert as first node "<<endl;
	cout<<"3.insert as last node"<<endl;
	cout<<"4.insert a new node before the given node "<<endl;
	cout<<"5.insert a new node after the given node"<<endl;
	cout<<"6.insert a new node at given position"<<endl;
	cout<<"7.delete a first node"<<endl;
	cout<<"8.delete a node from particular position"<<endl;
	cout<<"9.delete a particular node"<<endl;
	cout<<"10.delete a node before a given node "<<endl;
	cout<<"11.delete a node after a given node"<<endl;
	cout<<"12.display all the node"<<endl;
	cout<<"13.exit"<<endl;
}
void create(int data){
	newnode=new single();
	newnode->next=NULL;
	newnode->data=data;
	if(head==NULL)
		head=newnode;
	else{
		p=head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=newnode;
	}	
}
void insert_as_first(int item){
	newnode=new single();
	newnode->data=item;
	newnode->next=head;
	head=newnode;
}
void display(){
	p=head;
	while(p!=NULL){
		cout<<p->data;
		p=p->next;
	}
}
void insert_as_last(int item){
	newnode=new single();
	newnode->next=NULL;
	newnode->data=item;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=newnode;
}
void insert_before(int m,int item){
	struct single *t;
	newnode=new single();
	newnode->next=NULL;
	newnode->data=item;
	if(head->data==m){
		newnode->next=head;
		head=newnode;
	}
	else{
		p=head;
		do{
			t=p;
			p=p->next;
			if(p->data==m)
				break;
		}while(p->next!=NULL);
		newnode->next=t->next;
		t->next=newnode;
	}
}
void insert_after(int m,int item){
	newnode=new single();
	newnode->next=NULL;
	newnode->data=item;
	p=head;
	while(p!=NULL){
		if (p->data==m)
			break;
		p=p->next;	
	}
	newnode->next=p->next;
	p->next=newnode;
}
void insert_position(int pos,int item){
	newnode=new single();
	newnode->next=NULL;
	newnode->data=item;
	if(head==NULL)
		head=newnode;
	if(pos<1){
		newnode->next=head;
		head=newnode;
	}	
	p=head;
	while(pos>2 && p->next!=NULL){
		p=p->next;
		pos--;
	}
	newnode->next=p->next;
	p->next=newnode;
}
void delete_first(){
	p=head;
	head=head->next;
	delete(p);
}
void delete_pos(int pos){
	int n=0;
	struct single *temp;
	if(pos<1){
		p=head;
		head=head->next;
		delete(p);
	}
	p=head;
	while(p!=NULL)
		{
		n=n+1;
		p=p->next;
		}
	if(pos>=n){
		p=head;
		while(p->next->next!=NULL){
			p=p->next;
			temp=p->next;
			p->next=p->next->next;
			delete(temp);
		}
		
	}
	else{
		p=head;
		while(pos>2){
			p=p->next;
			pos--;
		}
		temp=p->next;
		p->next=p->next->next;
		delete(temp);
	}	
		
		
}
void delete_particular(int m){
	struct single *temp,*t1;
	int flag=0;
	p=head;
	if(p->data==m){
		temp=head;
		head=head->next;
		delete(temp);
	}
	else{
		p=head;
		while(p!=NULL){
			t1=p;
			p=p->next;
			if(p->data==m){
				flag=1;
				break;
			}
		}
	}
	if (flag=1){
		temp=t1->next;
		t1->next=t1->next->next;
		delete(temp);
		
	}
	else{
		cout<<"the record doesnot exist";
	}
}
void delete_before(int m){
	struct single *temp,*t1;
	p=head;
	if(p->data==m){
		temp=head;
		head=head->next;
		delete(temp);
	}
	else{
		do{
			t1=p;
			p=p->next;
		}while(p->next->data!=m);
		temp=t1->next;
		t1->next=t1->next->next;
		delete(temp);
	}
}
void delete_after(int m){
	struct single *temp;
	p=head;
	while(p->data!=m && p->next!=NULL){
		p=p->next;
	}
	temp=p->next;
	p->next=p->next->next;
	delete(p);
}

int main(){
	int choice ,m,pos,item;
	menu();
	do{
		cout<<"enter your choice"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"enter the data to insert"<<endl;
				cin>>item;
				create(item);
				break;
			case 2:	
				cout<<"enter the data to insert"<<endl;
				cin>>item;
				insert_as_first(item);
				break;
			case 3:
				cout<<"enter the data to insert"<<endl;
				cin>>item;
				insert_as_last(item);
				break;
				
			case 4:
				cout<<"enter the data to insert before node"<<endl;
				cin>>item;		
				cout<<"enter the value of destination node";
				cin>>m;
				insert_before(m,item);
				break;
			case 5:
				cout<<"enter the data to insert after node"<<endl;
				cin>>item;		
				cout<<"enter the value of destination node";
				cin>>m;
				insert_after(m,item);
				break;
			case 6:
				cout<<"enter the data to insert";
				cin>>item;
				cout<<"enter the position";
				cin>>pos;
				insert_position(pos,item);
				break;
			case 7:
				delete_first();
				break;
			
			case 8:
				cout<<"enter the position to delete";
				cin>>pos;
				delete_pos(pos);
				break;
			case 9:
				cout<<"enter the value of node to be deleted";
				cin>>m;
				delete_particular(m);
				break;
			case 10:
				cout<<"enter the value of destination node";
				cin>>m;
				delete_before(m);
				break;
			case 11:
				cout<<"enter the value of destination node";
				cin>>m;
				delete_after(m);
				break;
			case 12:
				display();
				break;
			default:
				break;
						
						
								
					
		}
	}while(1);
}
