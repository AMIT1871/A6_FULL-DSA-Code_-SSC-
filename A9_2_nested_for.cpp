//////////////////////////// PRINT SOME KIND OF PAITARN -- 2  ///////////////////////////////////////////////////
// Q.1 ----------------------------------------------------------------------------------------------------------
//   *
//   * *
//   * * *
#include<iostream>
#include<iomanip>                      //this heading for setw(4)  function
using namespace std;
int main(){
int n ;
cout<<"enter the value of n"<<endl;
cin>>n;
for(int i=1; i<=n; i++){  
    for(int j=1; j<=i; j++){
  cout<<setw(4)<<"*";                // setw(4)  that mean 4 space
    }
    cout<<endl;
}
}




// Q.2 ----------------------------------------------------------------------------------------------------------
//   * * *
//   * *
//   * 
// #include<iostream>
// #include<iomanip>                      
// using namespace std;
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;
// for(int i=n; i>=1; i--){  
//     for(int j=1; j<=i; j++){
//   cout<<setw(4)<<"*";                
//     }
//     cout<<endl;
// }
// }



// Q.3 ----------------------------------------------------------------------------------------------------------
//     * 
//    **
//   ***
// #include<iostream>
// #include<iomanip>                      
// using namespace std;
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;
// for(int i=1; i<=n; i++){  
//   for(int k=1; k<=(n-i); k++){
//   cout<<" ";
//   }
//     for(int j=1; j<=i; j++){
//     cout<<"*";                
//     }
//     cout<<endl;
// }
// }



// Q.4 ----------------------------------------------------------------------------------------------------------
//   *** 
//    **
//     *
// #include<iostream>
// #include<iomanip>                      
// using namespace std;
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=n; i>=1; i--){  
//   for(int k=1; k<=(n-i); k++){
//   cout<<" ";
//   }
//     for(int j=1; j<=i; j++){
//     cout<<"*";                
//     }
//     cout<<endl;
// }
// }



// Q.5 ----------------------------------------------------------------------------------------------------------
//    * 
//   * *
//  * * *
// #include<iostream>
// #include<iomanip>                      
// using namespace std;
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=1; i<=n; i++){  
//   for(int k=1; k<=(n-i); k++){
//   cout<<" ";
//   }
//     for(int j=1; j<=i; j++){
//     cout<<"*";
//     cout<<" ";                
//     }
//     cout<<endl;
// }
// }



// Q.6 ----------------------------------------------------------------------------------------------------------
//  * * * 
//   * *
//    *
// #include<iostream>
// #include<iomanip>                      
// using namespace std;
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=n; i>=1; i--){  
//   for(int k=1; k<=(n-i); k++){
//   cout<<" ";
//   }
//     for(int j=1; j<=i; j++){
//     cout<<"*";
//     cout<<" ";                
//     }
//     cout<<endl;
// }
// }



// Q.7 ----------------------------------------------------------------------------------------------------------
//    *
//   ***
//  *****
// #include<iostream>
// #include<iomanip>                      
// using namespace std;
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=1; i<=n; i++){  
//   for(int k=1; k<=(n-i); k++){
//   cout<<" ";
//   }
//     for(int j=1; j<=(i*2-1); j++){
//     cout<<"*";
//     }
//     cout<<endl;
// }
// }




// Q.7 ----------------------------------------------------------------------------------------------------------
//   *******
//    *****
//     ***
//      *
// #include<iostream>
// #include<iomanip>                      
// using namespace std;
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=n; i>=1; i--){  
//   for(int k=1; k<=(n-i); k++){
//   cout<<" ";
//   }
//     for(int j=1; j<=(i*2-1); j++){
//     cout<<"*";
//     }
//     cout<<endl;
// }
// }




// Q.8 ----------------------------------------------------------------------------------------------------------
//  n = 4
//      *
//     ***
//    *****
//   *******
//    *****
//     ***
//      *
// #include<iostream>
// #include<iomanip>                      
// using namespace std;
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=1; i<=n; i++){  
//   for(int k=1; k<=(n-i); k++){
//   cout<<" ";
//   }
//     for(int j=1; j<=(i*2-1); j++){
//     cout<<"*";
//     }
//     cout<<endl;
// }

// for(int i=n-1; i>=1; i--){  
//   for(int k=1; k<=(n-i); k++){
//   cout<<" ";
//   }
//     for(int j=1; j<=(i*2-1); j++){
//     cout<<"*";
//     }
//     cout<<endl;
// }
// }



// Q.9 ----------------------------------------------------------------------------------------------------------
//  n = 4
//   *******
//    *****
//     ***
//      *
//     ***
//    *****
//   *******
// #include<iostream>
// using namespace std;
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=n; i>=1; i--){  
//   for(int k=1; k<=(n-i); k++){
//   cout<<" ";
//   }
//     for(int j=1; j<=(i*2-1); j++){
//     cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=2; i<=n; i++){  
//   for(int k=1; k<=(n-i); k++){
//   cout<<" ";
//   }
//     for(int j=1; j<=(i*2-1); j++){
//     cout<<"*";
//     }
//     cout<<endl;
// }
// }
