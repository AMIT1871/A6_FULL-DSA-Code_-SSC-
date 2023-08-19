//------------------------------ ARRAY REVERSE USING N/2 METHOD ----------------------------------------------
#include<iostream>
using namespace std;
 
int main(){
int a[10] = {30, 12, 60, 80, 11} ; 
int p, n=4, temp;

for(int i=0; i<n/2; i++){
     temp = a[i];
     a[i] = a[n-i-1];              // -1 BECAUSE ARRAY START FROM 0 
 a[n-i-1] = temp;
}

   for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
       }
}
