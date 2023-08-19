//----------------------------- SELECTION SORT ---------------------------------------------
#include<iostream>
using namespace std;
 
void selectionsort(int a[10], int n){
int min, p, t;                                // p = position
for(int i=0; i<n; i++){                    // no. of itrations
    min = a[i];
      p = i;
for(int j=i+1; j<n; j++){
   if(min>a[j]){
    min = a[j];
      p = j;
   }
}//j
   if(i!=p){                   // if data's position != min's position 
       t = a[i];
    a[i] = a[p];
    a[p] = t;
   }
}//i
}

int main(){
int a[10], n ;
cout<<"Enter aize of array "<<endl;
cin>>n;
cout<<"enter nos"<<endl;
for(int i=0; i<n; i++)
   cin>>a[i];

selectionsort(a, n);
cout<<"printing sorted array"<<endl;
for(int i=0; i<n; i++)
   cout<<a[i]<<endl;
}