#include <bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node *next;
};typedef struct Node* node;
//cap phat dong mot node voi data la x 
node taoNode(int x){
	node term = new Node();
	term->data =x;
	term->next =NULL;
	return term;
}
//kTra rong
bool KtraRong(node a){
	return a==NULL;
}
//ktra so luong node trong dslk
int size(node a){
	int cnt=0;
	while (a != NULL){
		++cnt;
		a = a->next;// cho node hien tai sang node tiep theo
	}
	return cnt;
}
void NhapPTuVaoDauDSLK(node &a,int x){
	node term = taoNode(x);
	if (a==NULL){
		a = term;
	}else
	{
		term->next=a;
		a=term;
	}
}
void NhapPTuVaoCuoiDSLK(node &a,int x){
	node term = taoNode(x);
	if(a==NULL){
		a=term;
	}else
	{
		node p =a;
		while (p->next!=NULL){
			p=p->next;
		}
		p->next = term;
	}
}
void themPTuVaoGiua(node &a,int x,int pos){
	int n = size(a);
	while (pos<=0||pos>n+1){
		cout<<"ko hop le\n";	
		if(pos==1)
		{
			NhapPTuVaoDauDSLK(a,x);
		}
	    else if(pos==n+1)
		{
			NhapPTuVaoCuoiDSLK(a,x);
		}
		else
		{
			node p = a;
			for(int i=1;i<pos-1;i++){
				p=p->next;
			}
			node term=taoNode(x);
			term->next=p->next;
			p->next =term;
		}
	}
}
void swap(int a,int b){
	int term =a;
	a=b;
	b=term;
}
void sapXepTangDan(node &a){
	node p,q;
	for(p= a;p!=NULL;p=p->next){
		for(q= p->next;p!=NULL;q=q->next){
			if(p->data>q->data){
				swap(p->data,q->data);
			}
		}
	}
}
void in (node a){
	cout <<"--------------------------"<<endl;
	while(a!=NULL){
		cout<<a->data<<" "<<endl;
		a=a->next;
	}	
}
int main(){
	node head =NULL;
	while(1){
		cout <<"---------------menu---------------"<<endl;
		cout <<"1. chen phan tu vao dau ds"<<endl;
		cout <<"2. chen phan tu vao cuoi ds"<<endl;
		cout <<"3. chen phan tu vao giua ds"<<endl;
		cout <<"4. duyet ds"<<endl;
		cout <<"5. xep tang dan ds"<<endl;
		cout <<"----------------------------------"<<endl;
		cout<< "nhap lua chon";
		int n;cin>>n;
		if (n==1){
			int x;
		    cout <<"nhap gia tri x: "<<endl;
		    cin>>x;
		    NhapPTuVaoDauDSLK(head,x);
		}
		else if (n==2){
			int x;
		    cout <<"nhap gia tri x: "<<endl;
		    cin>>x;
		    NhapPTuVaoCuoiDSLK(head,x);
		}
		else if (n==3){
			int x,pos;
		    cout <<"nhap gia tri x: ";
		    cin>>x;
		    cout <<"nhap vi tri chen: ";
		    cin>>pos;
		    themPTuVaoGiua(head,x,pos);
		}
		else if (n==4){
			in (head);
		}
		else if (n==5){
			sapXepTangDan(head);in (head);
		}
	}
	
}
