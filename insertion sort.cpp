#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[5]={1,4,9,0,19};
	int n=5,key,i;
	for(int j=1;j<=n-1;j++){
		key=a[j];
		i=j-1;
		while(i>=0 && a[i]>key){
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
		
	}
	for(i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
}
