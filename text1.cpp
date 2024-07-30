//iterator (giong mang nhung thao tac de hon moi thu)
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void NhapMangIterator(vector<int> &v,int n){
	for(auto i=0;i<n;i++){
		int term;
		cin>> term;
		v.push_back(term);
	}
}
void xuatMangIterator(vector<int> &v,int n){
	for (int x:v){
		cout<<x<<" ";
	}
}
// chen giua 
void chenPTuMangIterator(vector<int> &v,int pos,int k){
	v.insert(v.begin()+pos,k);{
	}
}
void XoaPtuMangIterator(vector<int> &v,int pos){
	v.erase(v.begin()+pos);
}
int main(){
	vector<int> v;
	int n;cin>>n;
	NhapMangIterator(v,n);
	xuatMangIterator(v,n);
	while(1){
		int x;cin>>x;
		if(x==1){
			int pos1,k;
			cin>>pos1;
			cin>>k;
			chenPTuMangIterator(v,pos1,k);
			xuatMangIterator(v,n);
		}
		else if (x==2){
			int pos2;
			cin>>pos2;
			XoaPtuMangIterator(v,pos2);
			xuatMangIterator(v,n);
		}
	}
}
