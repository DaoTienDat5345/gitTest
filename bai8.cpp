#include <iostream>
#define max 100
#include <math.h>

using namespace std;

void nhapMang(int n,int a[]){
	do{
		if (n<0||n>max){
			cout<<"ko hop le";
			break;
		}
	}while(n<0||n>max);
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
}
void xuatMang(int n,int a[]){
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<endl;
}

void Xoa1Ptu(int &n,int a[],int vTriXoa){
	for (int i=vTriXoa;i<n;i++){
		a[i]=a[i+1];
	}--n;
}
void xoaPTuTrungX(int &n,int a[],int X){
	for (int i=0;i<n;i++){
		if(a[i]==X){
			Xoa1Ptu(n,a,i);
			i--;
		}
	}
}
int main(){
	int n,a[100];
	cin>>n;
	nhapMang(n,a);
	cout<<"------"<<endl;
	xuatMang(n,a);
	cout<<"------"<<endl;
	int X;cin>>X;
	xoaPTuTrungX(n,a,X);
	cout<<"------"<<endl;
	xuatMang(n,a);
}
