//--------------------- TRAVERSAL IN ARRAY ---------------------------------------------------------------------------

#include<iostream>
using namespace std;
 
int main(){
int n, a[10]  ; 

cout<<"enter size";
cin>>n;
cout<<"enter no.";
for(int i=0; i<n; i++){
    cin>>a[i];
}

cout<<"print  ";
for(int i=0; i<n; i++){                 // PRINT  ARRAY
    cout<<a[i]<<" ";
}

cout<<endl<<"print in reverse ";        // PRINT IN REVERSE ORDER
for(int i=n-1; i>=0; i--){
    cout<<a[i]<<" ";
}
}

