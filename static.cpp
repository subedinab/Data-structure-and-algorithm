#include<iostream>
#include<conio.h>
using namespace std;
void showvalue();
int main(){
	showvalue();
	showvalue();
}
void showvalue(void){
	auto int num=5;
	cout<<"the num="<<num;
	num*=5;
}
