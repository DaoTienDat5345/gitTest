#include <iostream>

using namespace std ;

void nhapMang(int n,int a[]){
	for(int i=0;i<=n;i++){
		cin >> a[i];
	}
}
void xuatmang(int n,int a[]){
	for(int i=0;i<=n;i++){
		cout <<a[i]<<" ";
	}
}
void hamSapXep(int a, int b){
	int term=a;
	a=b;
	b=term;
}
void xapSepMang(int n,int a[]){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if (i==a[j]){
				hamSapXep(a[i], a[j]);
			}
			else{
				cout << -1;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int a[100];
	nhapMang(n,a);
	xuatmang(n,a);
	cout << endl;
	xapSepMang(n,a);
	xuatmang(n,a);
}
