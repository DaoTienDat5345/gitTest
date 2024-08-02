#include <iostream>
#include <string>
#include <algorithm>
#define max 100


int main(){
	int n;cin>>n;
	string 	a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);cout<<endl;//sort mac dinh sap xep tang dan
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	sort(a,a+n,greater<string>());//greater<kieu khai bao> se sap xep nguoc lai
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}

