#include <bits/stdc++.h>

using namespace std;

struct SV{
	string name,maSV;
	int diem;
};
struct Node {
	SV data;
	Node *next;
};typedef struct Node* node;

node taoNode(){
	SV s;
	cout<<"nhap thong tin sinh vien"<<endl;
	cout<<"nhap ten sinh vien: "<<cin.ignore();
	getline(cin, s.name);
	cout<<"nhap ma SV: "<<cin.ignore();
	getline(cin,s.maSV);
	cout<<"nhap diem: ";
	cin>>s.diem;
	node term = new Node();
	term->data=s;
	term->next=NULL;
	return term; 
}
bool KtraRong(node a){
	return a==NULL;
}
int size (node a){
	int dem=0;
	while(a!=NULL){
		a=a->next;
		dem++;
	}
	return dem;
}
void themPTuVaoDauDS(node &a){
	node p= taoNode();
	if(a==NULL){
		a=p;
	}else
	{
		p->next=a;
		a=p;
	}
}
void themPTuVaoCuoiDS(node &a){
	node p= taoNode();
	if (a==NULL){
		a=p;
	}else
	{
		node q =a;
		while (q->next!=NULL){
			q=q->next;
		}
		q->next=p;
	}
}
void themPTuVaoGiuaDS(node &a,int pos){
	int k=size(a);
	if (pos<=0||pos>k+1){
		cout<<"ko hop le";
    }
	else{
	    if(pos==1){
		    themPTuVaoDauDS(a);
	    }
	    else if (pos==k+1){
		    themPTuVaoCuoiDS(a);
	    }
		else  
	    {
	    	node p =a;
	    	for (int i=1;i<=pos-1;i++){
	    		p=p->next;
			}
			node q=taoNode();
			q->next=p->next;
			p->next=q;
		}
	}
}

void XoaPTuDau(node &a){
	if (a==NULL){
		cout<<"ko co phan tu trg ds";
	}else 
	{
		a=a->next;
	}
}
void XoaPTuCuoi(node &a){
	if (a==NULL)
	return;
	node truoc=NULL, sau=a;
	while (sau->next!=NULL){
		truoc=sau;
		sau=sau->next;
	}
	if(truoc==NULL){
		a=NULL;
	}
	else
	{
		truoc->next=NULL;
	}
}
void XoaPTuGiua(node &a,int pos){
	int k=size(a);
	while (pos<0||pos>k){
		cout<<"ko hop le";
	}
	if (pos==1){
		XoaPTuDau(a);
	}
	else if (pos==k){
		XoaPTuCuoi(a);
	}else{
		node q=NULL,k=a;
		for (int i=1;i<=pos;i++){
			q=k;
			k=k->next;
		}
		q->next=k->next;
	}

}
void in(SV s){
	cout <<"------------------"<<endl;
	cout <<"nhap ho ten ";cin >>s.name;
	cout <<"nhap ma sv ";cin >>s.maSV;
	cout <<"nhap diem sv";cin>>s.diem;
	cout <<"------------------"<<endl;
}
void inds(node a){
	cout<<"----------ds SV----------"<<endl;
	while (a!=NULL){
		in (a->data);
		a=a->next;
	}
	cout<<endl;
}

void sapXepMang(node &a){
	for (node i=a;i->next!=NULL;i=i->next){
		node k=i;
		for (node j=i->next;j->next!=NULL;j=j->next){
			if (k->data.diem>j->data.diem)
			k=j;//sap xep tu thap ->cao, nhung chua sap xep vao trg ds( thong qua node phu k)
		}
		//gan ptu vua sap xep vao ds i 
		SV term= k->data;
		k->data=i->data;
		i->data=term;
	}
}
int main(){
	node head =NULL;
	while(1){
		cout <<"---------------menu---------------"<<endl;
		cout <<"1. chen phan tu vao dau ds"<<endl;
		cout <<"2. chen phan tu vao cuoi ds"<<endl;
		cout <<"3. chen phan tu vao giua ds"<<endl;
		cout <<"4. xoa phan tu vao dau ds"<<endl;
		cout <<"5. xoa phan tu vao cuoi ds"<<endl;
		cout <<"6. xoa phan tu vao giua ds"<<endl;
		cout <<"7. sap xep theo diem tu cao toi thap ds"<<endl;
		cout <<"8. duyet ds"<<endl;
		cout <<"----------------------------------"<<endl;
		cout<< "nhap lua chon";
		int n;cin>>n;
		if (n==1){
			int x;
		    cout <<"nhap gia tri x: "<<endl;
		    cin>>x;
		    themPTuVaoDauDS(head);
		}
		else if (n==2){
			int x;
		    cout <<"nhap gia tri x: "<<endl;
		    cin>>x;
		    themPTuVaoCuoiDS(head);
		}
		else if (n==3){
			int x,pos;
		    cout <<"nhap gia tri x: ";
		    cin>>x;
		    cout <<"nhap vi tri chen: ";
		    cin>>pos;
		    themPTuVaoGiuaDS(head,pos);
		}
		else if (n==4){
		    XoaPTuDau(head);
		}
		else if (n==5){
		    XoaPTuCuoi(head);
		}
		else if (n==6){
			int pos;
		    cout <<"nhap vi tri xoa: ";
		    cin>>pos;
		    XoaPTuGiua(head,pos);
		}
		else if (n==7){
			sapXepMang(head);
		}
		else if (n==8){
			inds (head);
		}
		
	}
	
}
