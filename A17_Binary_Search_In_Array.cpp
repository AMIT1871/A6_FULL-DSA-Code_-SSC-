//-------------------------------BINARY SEARCHING IN ARRAY-------------------------------------------------
// ---------------------------- Given data are sorted -----------------------------------------------------
#include<iostream>
using namespace std;
 
int binarysearch(int a[10], int n, int f){
 int low, high, mid, t=0;

 low = 0;
 high = n-1;
 while(low<=high){                 //l=h mean only 1 data are available    -  l>h data are empty
      mid = (low+high)/2;
         if(a[mid]==f){
         t = mid+1;
         break;
        }

         else if(a[mid]<f){
         low = mid+1;          // mid+1 because mid are also checked
        }

         else{                  // if(a[mid]>f)
         high = mid-1;
        }
    }
  return(t);
}


int main(){
int a[10], n, f;
cout<<"enter size "<<endl;              // F = FIND 
cin>>n;                                 // N = LENGTH

for(int i=0; i<n; i++){
     cin>>a[i];
}

cout<<"what you find"<<endl;
cin>>f;

 if(binarysearch(a, n, f)!=0){
     cout<<"found at  "<<binarysearch(a, n, f)<<" position";
  }

else cout<<"Not found ";

}




































