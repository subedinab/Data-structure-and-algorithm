#include<iostream>
#include<math.h>
#define max 50
using namespace std;
void merge(int a[],int x,int b,int c);
void mergesort(int a[],int left,int right){
	int mid;
	if(left<right){
		mid=floor((left+right)/2);
		mergesort(a,left,mid);
		mergesort(a,mid+1,right);
		merge(a,left,mid,right);
	}
}
void merge(int a[],int left,int mid,int right){
	int i=0,k,p,temp[max];
	k=left;
	p=mid+1;
	while(left<=mid && p<=right){
		if(a[left]<a[p]){
			temp[i++]=a[left++];
			
		}
		else{
			temp[i++]=a[p++];
		}
		
	}
	while(left<=mid){
		temp[i++]=a[left++];
	}
	while(p<=right){
	
		temp[i++]=a[p++];
	}
	for(i=k;i<=right;i++){
		a[i]=temp[i-k];
	}	
}

int main(){
	int a[6]={1,0,2,0,32,32};
	mergesort(a,0,5);
	for(int i=0;i<=5;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
