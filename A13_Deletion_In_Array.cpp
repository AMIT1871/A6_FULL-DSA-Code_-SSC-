//----------------------------------- DELETION IN ARRAY -------------------------------------------------------------
#include<iostream>
using namespace std;
 
int main(){
int a[10] = {30, 20, 60, 50} ;       // P = POSITION
int p, n=4;                          // N = LENGTH

cout<<"enter position"<<endl;
cin>>p;

if(p>n) cout<<"deletion not possible"<<endl;
else{
   for(int i= p-1; i<=n-2; i++){               // N-2 BECAUSSE END OF THE TIME DATA ARE NOT EXIST
      a[i] = a[i+1];   // shifing              // N-1 WE CAN ALSO USE
   }

   n--;
   cout<<"print  ";
   for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
       }
}
}
