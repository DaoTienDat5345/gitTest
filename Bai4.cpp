#include <iostream>
#include <math.h>
#define max 100
using namespace std ;

void nhapMang(int n,int a[]){
	do{
		if(n<0||n>max){
			cout<<"loi gioi han"<<endl;
			break;
		}
	}while(n<0||n>max);
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
}
void xuatmang(int n,int a[]){
	for(int i=0;i<=n;i++){
		cout <<a[i]<<" ";
	}
}
void lietKeViTriAm(int n,int a[]){
	for(int i=0;i<=n;i++){
		if(a[i]<0){
			cout<<a[i];
		}
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	nhapMang(n,a);
	xuatmang(n,a);
	cout<<endl;
	lietKeViTriAm(n,a);
}
