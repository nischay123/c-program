// Permutations
#include <iostream>
using namespace std;
int BinarySearch(int *a,int s,int e,int key){
	// Base case
    if(s>e){
      return -1;
    }
	// Recursive case
	int mid = (s+e)/2;
	if(a[mid]==key){
	   return mid;
	}else if(a[mid]>key){
	   e=mid-1;
	}else{
	   s=mid+1;
	}

	int res = BinarySearch(a,s,e,key);
	return res;
}
void mergefun(int a[],int s,int mid ,int e){
   int n1,n2;
   n1 = mid-s

}

void msort(int a[],int s,int e){
   if(s>=e){
   return ;
   }
   int mid =(s+e)/2;
   msort(a,s,mid);
   msort(a,s,mid+1,e);
   return ;

}

int main(){
	int a[]={1,3,5,6,7,8,9};

	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int key;
	cin>>key;
	int ans = BinarySearch(a,0,n-1,key);
	if(ans == -1){
		cout<<"Not Found"<<endl;
	}
	else{
		cout<<"Element Found at index : "<<ans<<endl;
	}

	return 0;
}