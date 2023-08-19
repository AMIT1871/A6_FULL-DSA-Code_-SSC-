// ------------------------  INTERPOLATION SEARCH ------------------------------------------------------
//  ----------------------   ( SORTED ONLY ) ----------------------------------------------------------
//    MID = low+(HIGH - LOW) *   (X - A[LOW]) 
//                              __________________
//                              (A[HIGH] - A[LOW]) 

#include<iostream>
using namespace std;
int interpolationsearch(int a[10], int n, int x){ 
    int low , high , mid ,t = 0; 
        low = 0 ;
        high = n-1; 
 while( low <= high ){ 
 mid = low+(high-low)*((x-a[low])/(a[high]-a[low]));       // Same as binary search only mid find method is changed
    if( a[mid]== x ) {                                     // x = which digit you are find 
      t = mid+1; break; 
     } 

   else if(a[mid] < x ) 
    low = mid+1; 

   else 
   high = mid-1; 
      } 
 return(t); 
} 

int main(){
     int a[10], i, n, x, t; 
     cout<<"enter size = "<<endl;
     cin>>n;
     cout<<"Enter sorted nos"<<endl;
     
     for( i = 0 ; i < n ; i++ ) 
     cin>>a[i];
 
    cout<<"Enter the no. to be search = "<<endl;
    cin>>x;

 t = interpolationsearch(a,n,x); 
 if( t == 0 ) 
 cout<<"No. not found "<<endl;
 else 
 cout<<"No. is found & Position = "<<t<<"th "<<endl;
 }