#include <iostream>
#define max 100

using namespace std ;

void nhapMang(int n,int a[]){
	do{
		if(n<=0||n>max){
			cout<<"khong hop le"<<endl;
			break;
	    }
	}while(n<=0||n>max);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void xuatMang(int n,int a[]){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<endl;
}

void themPtu(int &n,int a[],int vtriPtuThem,int gTriPtuThem){
	n++;
	for(int i=n-1;i>vtriPtuThem;i--){
		a[i]=a[i-1];
	}a[vtriPtuThem]=gTriPtuThem;
	
}
int main (){
	int n,a[100];
	cin>>n;
	nhapMang(n,a);
	cout<<"------"<<endl;
	xuatMang(n,a);
	cout<<"------"<<endl;
	int vtriPtuThem,gTriPtuThem;
	cin>>vtriPtuThem;cin>>gTriPtuThem;
	themPtu(n,a,vtriPtuThem,gTriPtuThem);
	cout<<"------"<<endl;
	xuatMang(n,a);
}
