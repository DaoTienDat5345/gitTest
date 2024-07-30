#include<bits/stdc++.h>
#include <string.h>
#define max 100

using namespace std;

struct KhachHang{
	string Hten;
	string DVu;
	int stt;
};
struct Node {
	KhachHang data;
	Node *Next;
};typedef struct Node* node;

node taoNode(){
	KhachHang s;
	cout<<"-----thong tin sv-----"<<endl;
	cout<<"nhap ho ten :";cin.ignore();
	getline(cin,s.Hten);
	cout<<"nhap dich vu :";cin.ignore();
	getline(cin,s.DVu);
	cout<<"nhap so thu tu: ";
	cin>>s.stt;
	node term = new Node;
	term->data=s;
	term->Next=NULL;
	return term;
}
int ktraRong(node a){
	return a==NULL;
}
int Size(node a){
	int dem=1;
	while (a!=NULL){
		dem++;
		a=a->Next;
	}
	return dem;
}
void ThemVaoCuoiDS(node &a){
	node k= taoNode();
	if (a==NULL){
		a=k;
	}
	else 
	{
		node q=a;
		while(q->Next!=NULL){
			q=q->Next;
		}
		q->Next=k;
	}
}
int SttKH(node a){
	node q=a;
	while(q->Next!=NULL){
		q=q->Next;
	}
	return q->data.stt;
}
void in(KhachHang s){
	cout<<"ten benh nhan: "<<s.Hten<<endl;
	cout<<"dich vu cua benh nhan: "<<s.DVu<<endl;
	cout<<"STT benh nhan: "<<s.stt<<endl;
}
void xuatThongtin(node a){
	if (a==NULL){
		cout<<"ko co thong tin khach hang"<<endl;
	}
	else
	{
		node q= a;
		while(q->Next!=NULL){
			q=q->Next;
		}
		in(q->data);
	}
}
int main (){
	node head =NULL;
	int n;
	int dem=1;
	while (1){
		cout<<"nhap lua chon: "<<endl;
		cout<<"1.nhap thong tin khach hang: "<<endl;
		cout<<"2.xuat STT khach hang cuoi danh sach: "<<endl;
		cout<<"3.xuat thong tin khach hang vua dc phuc vu: "<<endl;
		cout<<"4.khach hang da duoc phuc vu: "<<endl;
		cin>>n;
		if (n==1){
			ThemVaoCuoiDS(head);
		}
		else if (n==2){
			SttKH(head);
		}
		else if (n==3){
			xuatThongtin(head);
			dem++;
		}else if (n==4){
			cout<<dem<<endl;
		}
	}
}

