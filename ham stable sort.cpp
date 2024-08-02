#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n;cin>>n;
	int a[n];
	for (int i;i<n;i++){
		cin>>a[i];	
	}
	sort(a,a+1,cmp);
	for (int k: a){
		cout<<k<<" ";
	}
}
