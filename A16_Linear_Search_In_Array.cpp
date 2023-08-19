//------------------------- LINEAR SEARCHING IN ARRAY  -------------------------------------------------
//------------------------- Given data are unsorted -----------------------------------------------------
#include<iostream>
using namespace std;
 
int main(){
int a[10], n, f ;                // F = FIND 
cout<<"enter size of array "<<endl;       // N = LENGTH
cin>>n;
cout<<"Enter numbers:"<<endl;
for(int i=0; i<n; i++){
     cin>>a[i];
}

cout<<"what you find"<<endl;
cin>>f;

int t=0;
for(int i=0; i<n; i++){
     if(f==a[i]){
          t = i+1;           // t = position
          break;
     }
}

if(t!=0) cout<<"found at "<<t<<"th position";
else cout<<"Not found";
}
