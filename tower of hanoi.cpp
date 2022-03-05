#include<iostream>
#include<conio.h>
using namespace std;
void toh(int n,char source,char temp,char desti){
	if (n==1){
		cout<<"move disk "<<n<<source<<" to "<<desti;
		
	}
	else if(n>=1){
	
	toh(n-1,source,desti,temp);
	cout<<"move disk"<<n<<source<<" to "<<desti<<endl;
	toh(n-1,temp,source,desti);
}
}
int main(){
	toh(12,'a','b','c');
		getch();
	return 0;
}
