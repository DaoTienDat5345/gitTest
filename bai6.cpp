#include <iostream>
#define max 100

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
void xoa1Ptu(int &n,int a[],int vTriXoa){
	for (int i=vTriXoa;i<n;i++){
		a[i]=a[i+1];
	}--n;
}
int main(){
	int n,a[100];
	cin>>n;
	nhapMang(n,a);
	cout<<"------"<<endl;
	xuatMang(n,a);
	cout<<"------"<<endl;
	int vTriXoa;
	cin>>vTriXoa;
	xoa1Ptu(n,a,vTriXoa);
	cout<<"------"<<endl;
	xuatMang(n,a);
}
