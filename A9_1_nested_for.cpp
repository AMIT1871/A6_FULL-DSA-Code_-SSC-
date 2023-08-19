//////////////////////////// PRINT SOME KIND OF PAITARN /////////////////////////////////////////////////////////
// Q.1 ----------------------------------------------------------------------------------------------------------
//   1
//   1 2
//   1 2 3

#include<iostream>
#include<iomanip>                      //this heading for setw(4)  function
using namespace std;
 
int main(){
int n  ;
cout<<"enter the value of n"<<endl;
cin>>n;

for(int i=1; i<=n; i++){  
    for(int j=1; j<=i; j++){
  cout<<setw(4)<<j;                // setw(4)  that mean 4 space
    }
    cout<<endl;
}
}




// Q.2 ---------------------------------------------------------------------------------------------------------
//   1
//   2 2
//   3 3 3

// #include<iostream>
// #include<iomanip>                      
// using namespace std;
 
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=1; i<=n; i++){  
//     for(int j=1; j<=i; j++){
//   cout<<setw(4)<<i;                
//     }
//     cout<<endl;
// }
// }



// Q.3  ---------------------------------------------------------------------------------------------------------
//   1
//   2 2
//   3 3 3

// #include<iostream>
// #include<iomanip>                      
// using namespace std;
 
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=1; i<=n; i++){  
//     for(int j=1; j<=i; j++){
//   cout<<setw(4)<<n;                
//     }
//     cout<<endl;
// }
// }




// Q.4  ---------------------------------------------------------------------------------------------------------
//   1
//   2 3
//   4 5 6

// #include<iostream>
// #include<iomanip>                      
// using namespace std;
 
// int main(){
// int n , t=1;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=1; i<=n; i++){  
//     for(int j=1; j<=i; j++){
//   cout<<setw(4)<<t++;                
//     }
//     cout<<endl;
// }
// }



// Q.5  ---------------------------------------------------------------------------------------------------------
//   A
//   B C
//   D E F

// #include<iostream>
// #include<iomanip>                      
// using namespace std;
 
// int main(){
// int n , t= 64;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=1; i<=n; i++){  
//     for(int j=1; j<=i; j++){
//   cout<<setw(4)<<char(t+j);                
//     }
//     cout<<endl;
// }
// }



// Q.6 ---------------------------------------------------------------------------------------------------------
//   A
//   A B
//   A B C

// #include<iostream>
// #include<iomanip>                    
// using namespace std;
 
// int main(){
// int n , t= 64;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=1; i<=n; i++){  
//     for(int j=1; j<=i; j++){
//   cout<<setw(4)<<char(t+j);                
//     }
//     cout<<endl;
// }
// }


// Q.7 ---------------------------------------------------------------------------------------------------------
//   A
//   B B
//   C C C

// #include<iostream>
// #include<iomanip>                    
// using namespace std;
 
// int main(){
// int n , t= 64;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=1; i<=n; i++){  
//     for(int j=1; j<=i; j++){
//   cout<<setw(4)<<char(t+i);                
//     }
//     cout<<endl;
// }
// }



// Q.8  ---------------------------------------------------------------------------------------------------------
//   1
//   0 1
//   1 0 1
//   0 1 0 1

// #include<iostream>
// #include<iomanip>                      
// using namespace std;
 
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=1; i<=n; i++){  
//     for(int j=1; j<=i; j++){
//   cout<<setw(4)<<(i+j-1)%2;            //or f(i+j+1)%2     gives same ans
//     }
//     cout<<endl;
// }
// }




// Q.9 ---------------------------------------------------------------------------------------------------------
//   1 2 3
//   1 2
//   1 

// #include<iostream>
// #include<iomanip>                      //this heading for setw(4)  function
// using namespace std;
 
// int main(){
// int n ;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=n; i>=1; i--){  
//     for(int j=1; j<=i; j++){
//   cout<<setw(4)<<j;                // setw(4)  that mean 4 space
//     }
//     cout<<endl;
// }
// }




