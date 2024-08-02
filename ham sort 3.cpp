#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int main(){
	int n;cin>>n;
	pair<int,int> a[n];
	for (int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	sort (n,n+1);
	for (int i=0;i<n;i++){
		cout<<a[i].first<<" "<<a[i].second;
	}
}
