#include<bits/stdc++.h>
#define max 100

using namespace std;

int partition(int a[],int left,int right){
	int pivot=a[right];//O(1)
	int i=left-1;//O(1)
	for (int j=left;j<right-1;j++){//O(n)
		if(a[j]<=pivot){//O(1)
			i+=1;//O(1)
			swap(a[i],a[j]);//O(1)
		}	
	}//O(n)
	swap(a[right],a[i+1]);//O(1)
	return i;
}//O(n)
void quicksort(int a[],int left,int right){
	if (left>=right)
	return;
	int p=partition(a,left,right);//O(n)
	quicksort(a,left,p-1);
	quicksort(a,p+1,right);
}
void swap(int &a,int &b){
	int term=a;//O(1)
	a=b;//O(1)
	b=term;//O(1)
}//O(1)
