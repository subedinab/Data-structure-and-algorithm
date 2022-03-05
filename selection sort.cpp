#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[9]={1,2,5,8,11,45,4,6,10};
	cout<<"unsorted is ";
	for(int i=0;i<9;i++){
		cout<<a[i]<<endl;
	}
	cout<<endl;
	int n=9,max,index;
	for(int i=n-1;i>=0;i--){
		max=a[0];
		index=i;
		for(int j=0;j<=i;j++){
			if(a[j]>max){
			
				max=a[j];
				index=j;
			}
		}
		a[index]=a[i];
		a[i]=max;
		
	}
	
	for(int i=0;i<9;i++){
		cout<<a[i]<<endl;
	}
	getch();
}

