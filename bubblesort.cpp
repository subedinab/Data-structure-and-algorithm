#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[5]={1,0,9,11,5};
	int i,j,temp;
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<=4;i++){
		cout<<a[i]<<endl;
	}
}
