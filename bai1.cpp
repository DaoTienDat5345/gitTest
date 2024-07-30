#include <iostream>
#include <math.h>

using namespace std ;

int tinh(int n){
	int tong=0;
	for(int i=1;i<=n;i++){
		tong+=pow(i,2);
	}
	return tong;
}
int main() {
	int n;
	cout<<"nhap n:";
	cin>>n;
	cout<<"tong la: "<< tinh(n);
}
