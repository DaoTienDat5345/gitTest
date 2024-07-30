#include<bits/stdc++.h>
#define max 100

using namespace std;
void nhapMang(int n,int a[]){
	do{
		if(n<0||n>max){
			cout<<"loi gioi han"<<endl;
		}
	}while(n<0||n>max);
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
}
void xuatmang(int n,int a[]){
	for(int i=0;i<n;i++){
		cout <<a[i]<<" ";
	}
}
void partition(int a[],int l,int r){
	int pivor=a[l];
	int i=l-1;
	int j=r+1;
	while (1){
		do{
			i++
		}while(a[i]<pivor);
		do{
			j--;
		}while(a[j]>pivor);
		if (i>j){
			swap(a[i],a[j]);
		}
	}
	return j;
}
void quicksort(int a[],int l,int r){
	if (left>=right)
	return;
	int p=partition(a,left,right);
	quicksort(a,left,p-1);
	quicksort(a,p+1,right);
}
void swap(int a,int b){
	int term =a;
	a=b;
	b=term;
}
int main(){
	int n; 
	cin>>n;
	int a[n];
	nhapMang(n,a);
	xuatmang(n,a);
	cout<<endl;
	quicksort(a,0,n-1);
	xuatmang(n,a);
}
