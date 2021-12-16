#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
 int main(int argc,char *argv[]){
	int i,n;
	long fact=1;
	if(argc!=2){
		cout<<"\nuses num"<<argv[0];
		exit(1);
	}
	n=atoi(argv[1]);
	for(i=0;i<=n;i++){
		fact=fact*i;
		cout<<"\nfactorial of "<<n<<"="<<fact;
		return 0;
	}

	getch();
}
