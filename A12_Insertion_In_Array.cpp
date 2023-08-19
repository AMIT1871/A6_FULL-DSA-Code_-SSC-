// ----------------------------------------- INSERTION IN ARRAY ---------------------------------------------------------
#include<iostream>
using namespace std;
 
int main(){
int a[10] = {30, 20, 60, 50} ;            // P = POSITION
int p, n=4;                               // N = LENGTH

cout<<"enter position"<<endl;
cin>>p;

if(p>n+1) cout<<"insertion not possible"<<endl;
else{
   for(int i= n-1; i>=p-1; i--){
      a[i+1] = a[i];                      // shifing
   }
}

cout<<"enter new no ";
cin>>a[p-1];
n++;

cout<<"print  ";
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}

}
