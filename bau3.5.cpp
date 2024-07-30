#include <iostream>

using namespace std ;

void NhapMang2Chieu(int a[][100],int n,int m){
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}
void NhapXuat2Chieu(int a[][100],int n,int m){
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
//tang dan
void SapXepMang2Chieu(int a[][100],int n,int m){
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			int k,l;
			for (k=i;k<n;k++){
				int t=0;
				if (k==i)
				t=j+1;
				for(l=t;l<m;l++){
					if (a[i][j]>a[k][l])
					swap(a[i][j],a[k][l]);
				}
			}
		}
	}
}
void hamSapXep(int &a, int &b){
	int term=a;
	a=b;
	b=term;
}
int main(){
	int n,m,a[100][100];
	cout<<"nhap n";
	cin>>n;
	cout<<"nhap m";
	cin>>m;
	NhapMang2Chieu(a,n,m);
	NhapXuat2Chieu(a,n,m);
	SapXepMang2Chieu(a,n,m);
	NhapXuat2Chieu(a,n,m);
}
