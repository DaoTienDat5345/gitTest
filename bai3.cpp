#include <iostream>
#include <math.h>
#define max 100

using namespace std ;

void nhapMang(int n,int a[]){
	do{
		int n; cin>>n;
		if(n<0||n>max){
			cout<<"loi gioi han"<<endl;
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
bool nt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			return false;
		}
	}
	return n>1;
}
void MangSoNT(int n,int a[]){
	for(int i=0;i<=n;i++){
		if (nt(a[i]))
		cout <<a[i]<<" ";
	}
}
int main(){
	int n; 
	int a[n];
	nhapMang(n,a);
	xuatmang(n,a);
	cout<<endl;
	MangSoNT(n,a);
}
