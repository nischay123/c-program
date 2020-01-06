#include <iostream>
#include <stack>

using namespace std;

int  arrsum(int a[],int n){
   ///base case

   if(n==0){
     return 0;
   }
   int res = arrsum(a+1,n-1);

   return res+ a[0];
}

void Buble (int a[],int n){
    ///base case

    if(n==0){
       return;
    }

    for(int i=0;i<n-1;i++){
      if(a[i]<a[i+1]){
         swap(a[i],a[i+1]);
      }

    }
    Buble(a,n-1);
}
int first7(int *a , int n){
   //base case
   if(n==0){
     return -1;
   }
   ///rec case
   if(a[0]==7){
     return 0;
   }
   int x = first7(a+1,n-1);
   if(x==-1){
     return -1;
   }
else{
    return x+1;
}

}

int last7(int a[],int n){
     ///base cse
     if(n==0){
       return -1;
     }
     ///rec case
     int x = last7(a+1,n-1);

     if(x==-1){
       if( a[0]==7){
         return 0;
       }
       return -1;
     }else{
          return x+1;
     }
}

bool isSorted(int *a,int n){
   ///base case
   if(n<=1){
      return true ;
   }

   ///rec case
   if(a[0]>a[1]){
      return false ;
   }
   int aagrdekho = isSorted(a+1,n-1);
   if(aagrdekho){
       return true;
   }
   else {
       return false ;
   }

}


int  main(){
    int a[100];

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
      cin>>a[i];
    }

   if(isSorted(a,n)){
    cout<<"sorted h bahi ";
   }
   else {
       cout<< "marvao sorted ne h ";
   }

}
