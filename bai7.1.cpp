#include <iostream>
#include <string.h>

using namespace std ;

int main(){
	int n;
	cin>>n;//sau khi nhan enter dau enter no dc nhap vao string nen phai xoa dau enter
	cin.ignore();
	string s;
	getline(cin,s);
	cout<<s<<endl;
	string b=s.substr(2, 4);
	cout<<b;
}
