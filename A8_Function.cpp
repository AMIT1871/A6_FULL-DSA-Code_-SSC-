/////////////////////////////////// FUNCTION BASE PROGRAMS ///////////////////////////////////////////////////////////////
//-------------------------------------- 1st Program ---------------------------------------------------------------------
// #include<stdlib.h> 
// #include<iostream> 
// using namespace std; 

// int fact (int n){ 
//  int i, f=1; 
//  for(i=1; i<=n; i++){ 
//  f = f * i; 
//  } 
//  return (f); 
//  } 


//  float power (float x, int n){ 
//  int i; 
//  float p=1 ; 
//  for(i=1; i<=n; i++){ 
//  p = p * x ; 
//  } 
//  return(p); 
//  } 


//  float expn (float x, int n){ 
//  int i , f ; 
//  float s = 1 ; 

//  for(i=1; i<=n; i++) { 
//  f = fact(i) ;                         // nested of function  (function call inside of function)
//  s = s + power(x,i) / f; 
//  } 
//  return(s); 
//  } 


//  float sinx(float x, int n){ 
//  int i, f, t = 2; 
//  float s = 0; 
//  for(i= 1; i<=n; i+=2) { 
//  f = fact(i) ; 
//  s = s + power(-1, t) * power(x,i)/f; 
//  t++; 
//  } 
//  return( s); 
//  } 


//  float cosx(float x, int n){ 
//  int i, f, t = 1; 
//  float s = 1; 

//  for(i=2; i<=n; i+=2){ 
//  f = fact(i) ; 
//  s = s + power(-1, t) * power(x,i)/f; 
//  t++; 
//  } 
//  return( s); 
// } 


// int main(){ 
//  int n, d; 
//  float x, t; 
//  while(1){                      // infinite loop 
  
//  cout<<" MENU "<<endl; 
//  cout<<" 0. EXIT "<<endl; 
//  cout<<" 1. FACTORIAL "<<endl; 
//  cout<<" 2. POWER "<<endl; 
//  cout<<" 3. EXPONENTIAL SERIES "<<endl; 
//  cout<<" 4. SINX SERIES "<<endl; 
//  cout<<" 5. COSX SERIES" <<endl; 
//  cout<<" ENTER CHOICE "<<endl; 
//  cin>>d; 

//  switch(d){ 

//  case 0 : exit(0); 
//  case 1 : cout<<"ENTER NO"<<endl; 
//           cin>>n; 
//           t = fact(n); 
//           cout<<"FACTROIAL = "<<t<<endl; break; 

//  case 2 : cout<<"ENTER x AND n"<<endl; 
//           cin>>x>>n; 
//           t = power(x,n); 
//           cout<<" POWER= "<<t<<endl; break; 

//  case 3 : cout<<"ENTER x AND n"<<endl; 
//           cin>>x>>n; 
//           t = expn(x,n); 
//           cout<<" EXPO. SERIES = "<<t<<endl; break; 

//  case 4 : cout<<"ENTER x AND n"<<endl; 
//           cin>>x>>n; 
//           t = sinx(x,n); 
//           cout<<" SINX = "<<t<<endl; break; 

//  case 5 : cout<<"ENTER x AND n"<<endl; 
//           cin>>x>>n; 
//           t = cosx(x,n); 
//           cout<<" COSX = "<<t<<endl; break;

//  default : cout<<" INVALID CHOICE "<<endl; 

//  } // switch 
//  } // while 
//  } // main


//-------------------------------------- 2st Program ---------------------------------------------------------------------
#include<iostream>
#include<stdlib.h>
using namespace std;

int fibo(int n){
    int a=0, b=1, c;
    cout<<"Fibo S. of"<<n<<" : "<<a<<" "<<b<<" ";
    for(int i=1; i<=n-1; i++){
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}


int factor(int n){
    int f = 1;
    cout<<"Factor of "<<n<<" is : ";
    for(int i=1; i<=n; i++)
      if(n%i==0)
    cout<<i<<" ";
}


int prime(int n){
int count=0;
for(int i=1; i<=n; i++){
    if(n%i==0)  count++;
}
if(count<=2){
    cout<<n<<" is Prime no.";
}
else{
    cout<<n<<" is not prime no.";   
}
}


int lcm(int n1, int n2){
    

}


int hcf(int n1, int n2){}
int main(){
int d, n, n1, n2 ;
    while(1){
    cout<<endl<<"\t\t\tMENU "<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<"1. FIBONACCI SERIES"<<endl;
    cout<<"2. FACTOR"<<endl;
    cout<<"3. PRIME NO"<<endl;
    cout<<"4. LCM"<<endl;
    cout<<"5. HCF"<<endl;

    cout<<"Enter any one number for what you want to do: "<<endl;
    cin>>d;

switch(d){
    case 0: exit(0);
    case 1: cout<<"enter no. "<<endl;
            cin>>n;
            fibo(n);
            break;
    case 2:cout<<"enter no. "<<endl;
            cin>>n;
            factor(n);
            break;

    case 3:cout<<"enter no. "<<endl;
            cin>>n;
            prime(n);
            break;
    case 4: cout<<"enter two nos. "<<endl;
            cin>>n1>>n2;
            lcm(n1,n2);
            break;
    case 5: cout<<"enter two nos. "<<endl;
            cin>>n1>>n2;
            hcf(n1,n2);
            break;
    default: cout<<"----- INVALID INPUT ------";


}//switch
}//while
}