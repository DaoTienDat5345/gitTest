#include<bits/stdc++.h>
#include<set>

using namespace std;
//do phuc tap O(logn);
//size :so luong ptu trong set
//insert: nhap ptu vao set (nhu mang)
//find :tim kiem ptu trong set (O(logN))
//count: nhu thg find  (O(logN))

int main(){
	set<int> s;
	s.insert(100);
	s.insert(200);
	s.insert(300);
	s.insert(400);
	s.insert(100);
	s.insert(200);
	cout<<s.size();

	
}
