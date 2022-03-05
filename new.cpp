#include<iostream>
using namespace std;
int main(){
	int *p=new int[10];
	for(int i=0;i<=9;i++){
		cout<<&p[i]<<endl;
		
	}
	for(int i=0;i<=9;i++){
		p[i]=i+3;
	}
	delete []p;
	for(int i=0;i<=9;i++){
		cout<<&p[i]<<endl;
	}
	for(int i=0;i<=9;i++){
		cout<<p[i];
	}
}
