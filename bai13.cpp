#include <bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node *right;
	Node *left;
};typedef struct Node* node;
node taoNode(int x){
	node term = new Node();
	term->data =x;
	term->right =term->left=NULL;
	return term;
}
bool KtraRong(node a){
	return a==NULL;
}
int nhapNodeVaoTree(int x,node &t){
	if (t!=NULL){
		if (x==t->data){
			return 0;
		}else{
			if (x<t->data){
				nhapNodeVaoTree(x,t->left);
			}else
			    nhapNodeVaoTree(x,t->right);
		}
	}else {
		t=taoNode(x);
			if (t==NULL) return -1;
			t->data=x;
			t->left=t->right=NULL;
			return 1;
	}
}
void NLR(node &t){
	if (t!=NULL){
		cout<<t->data<<" ";
		NLR(t->left);
		NLR(t->right);
	}
}
void LNR(node &t){
	if (t!=NULL){
		NLR(t->left);
		cout<<t->data<<" ";
		NLR(t->right);
	}
}
void LRN(node &t){
	if (t!=NULL){
		NLR(t->left);
		NLR(t->right);
		cout<<t->data<<" ";
	}
}
//do cao cay
int DoCaoTree(node t){
	if (t!=NULL){
		int dem1=1,dem2=1;
		for (node i=t;i<NULL;i=i->left){
			if (i->left==NULL&&i->right!=NULL)
			for (node j=i;j<NULL;j=j->right){
				dem1++;
			}
			
		}
		for (node j=t;j<NULL;j=j->right){
			if (i->right==NULL&&i->left!=NULL)
			for (node j=i;j<NULL;j=j->right){
				dem2++;
			}
		}
	}
	if (dem1==dem2)
		return dem1;
	else if (dem1>dem2)
	    return dem1;
	else if (dem1<dem2)
	    return dem2;
}
//in node co gtri chan
void nodeChan(node t){
	for (node i=t;i<NULL;i=i->left){
		for (node j=i;j<NULL;j=j->right){
			if (i->data%2==0){
				cout<<i->data<<" ";
			}
		}
	}
}
//so node cua cay
int soNodeCuaCay(node t){
	int dem =0;
	for (node i=t;i<NULL;i=i->left){
			for (node j=i;j<NULL;j=j->right){
				dem++;
			}
			
		}
		for (node j=t;j<NULL;j=j->right){
			for (node j=i;j<NULL;j=j->right){
				dem++;
			}
		}
	}
	return dem;
}
int main (){
	node head =NULL;
	int x;
	while(1){
		cout<<"nhap x:";cin>>x;
		cout<<"0.Nhap node vao tree";
		cout<<"1.NLR"<<endl;
		cout<<"2.LNR"<<endl;
		cout<<"3.LRN"<<endl;
		cout<<"4.Tim so chan trong cay: "<<endl;
		cout<<"4.So node trong cay: "<<endl;
		if (x==1){
			NLR(head);
		}
		else if (x==0){
			cout<<"nhap phan tu x:";
			cin>>x
			nhapNodeVaoTree(x,head);
		}
		else if (x==2){
			LNR(head);
		}
		else if (x==3){
			LRN(head);
		}
		else if (x==4){
			nodeChan(head);
		}
		else if (x==5){
			cout<<soNodeCuaCay(head);
		}
	}
}

