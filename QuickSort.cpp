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
//phan hoach mang tu left toi right
int partition(int a[],int left,int right){
	int pivot=a[right];//p tu ben phai ngoai cung
	int i=left-1;
	for (int j=left;j<right-1;j++){
		if(a[j]<=pivot){
			i+=1;
			swap(a[i],a[j]);
		}	
	}
	swap(a[right],a[i+1]);	
	return i;//vi tri chot	
}
void quicksort(int a[],int left,int right){
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



