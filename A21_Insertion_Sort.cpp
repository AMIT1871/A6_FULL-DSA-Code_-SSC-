// -------------------------------- INSERTION SORT ---------------------------------------------------------------
// -------------------------------- BASD ON SHIPTING --------------------------------------------------------------
#include<iostream>
using namespace std;

  void insertionsort(int a[10], int n){
      int t, k ;
      for(int i=1; i<n; i++){               // no of itration because pahali bar me data sort nahi hoga
         t = a[i];                          // t = a[i];
         k = i-1;                           // k = i-1;
        while(t<a[k] && k>=0 ){              // while(t<a[k] && k>=0){       // K>=0 MUST FOR STOPING LOOP
              a[k+1] = a[k];                
            k--;                                                            
      }             
         a[k+1] = t;                        // that is basd on shifting // t hold rahata hai phir last me k+1 me place ho jata hai
  }
  }

int main(){
    int a[10], n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter nos"<<endl;
    for(int i=0; i<n; i++)
      cin>>a[i];
    insertionsort(a, n);
    cout<<"Printing sorted nos"<<endl;
    for(int i=0; i<n; i++)
      cout<<a[i]<<endl;  
}
  #include<iostrem.h>
  using namespace std;
  int main(){
    cout<<"I am Amit ant you , Enter your name as a new employee if you not entery your name we are unable to 
    contect you and how we will give you offer letter to join our compnay";
    cout<<"if you are intrested so send your resume in our website as well as this email amitkushewaha187142925@gmail.com";
  
  }
