//////////////////// Q.1 Find:- length, revess, palindrom, armstrong, strong no//////////////////////////////////////////
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;    

int length(int n){
    int l=0;
    while(n!=0){
        n = n/10;
        l++;
    }
    return(l);
}

int reverse(int n){
    int r, v=0;
    while(n!=0){
       r = n%10;
       v = v*10+r;
       n = n/10;
    }
    return(v);
}

int palindrom(int n){                               
    int p;
    if(n==reverse(n)){
         cout<<n<<" is palindrem";                    
    }
    else{ 
        cout<<n<<" is not palindrom";               
    }
}

int armstrong(int n){
    int t, l=length(n), a=0;
    while(n!=0){
        t = n%10;
        a = a+pow(t,l);
        n = n/10;
    }
    return(a);
}

int strong(int n){
    int t, f, s=0;
    while(n!=0){
        t = n%10;
        f=1;                       // remaider
        for(int i=1; i<=t; i++){
           f = f*i;
        }
        s = s + f;
        n = n/10;
    }
    return(s);
}


int main(){
    int d, n;
    while(1){
        cout<<endl<<endl<<"\t----------------MENU----------------------"<<endl;
        cout<<"0. EXIT"<<endl;
        cout<<"1. LENGTH OF NUMBER"<<endl;
        cout<<"2. REVERSE NUMBER"<<endl;
        cout<<"3. PALINDROM"<<endl;                 //141 = 141
        cout<<"4. ARMSTRONG"<<endl;                 //1634 = 1^4 + 6^4 + 3^4 + 4^4  = 1634
        cout<<"5. STRONG"<<endl;                    //145  = 1!+ 4! + 5!            = 145
        cout<<"ENTER THE NUMBER WHAT YOU WANT TO DO"<<endl;
        cin>>d;

    switch(d){
 
        case 0: cout<<"Thank you for visiting :";
                exit(0); 
                break;
        case 1: cout<<"Enter no";
                cin>>n;
                cout<<length(n);
                break;
        case 2: cout<<"Enter no";
                cin>>n;
                cout<<reverse(n);
                break;
        case 3: cout<<"Enter no";
                cin>>n;
                palindrom(n);
                break;
        case 4: cout<<"Enter no";
                cin>>n;
                if(n==armstrong(n)) cout<<n<<" is armstrong number";
                else cout<<n<<" is not aremstrong number";
                break;
        case 5: cout<<"Enter no";
                cin>>n;
                if(n==strong(n)) cout<<n<<" is strong number";
                else cout<<n<<" is not strong number";
                break;
        default : cout<<"invalid input";

    }    
    }
}




////////////////// Q.2 Find series of :- length, revess, palindrom, armstrong, strong no//////////////////////////////////////////
// #include<iostream>
// #include<math.h>
// #include<stdlib.h>
// using namespace std;


// int length(int n){
//     int l=0;
//     while(n!=0){
//         n = n/10;
//         l++;
//     }
//     return(l);
// }

// int reverse(int n){
//     int r, v=0;
//     while(n!=0){
//        r = n%10;
//        v = v*10+r;
//        n = n/10;
//     }
//     return(v);
// }


// int prime(int n){
//     int l=0;
// for(int i=2; i<n; i++){
//     if(n%i==0)
//       l++;
// }
// if(l==0)
//    cout<<n<<" ";
// } 


// int palindrom(int n){                               
//     if(n==reverse(n))
//       cout<<n<<" ";                  
// }


// int armstrong(int n){
//     int t, l=length(n), a=0;
//     while(n!=0){
//         t = n%10;
//         a = a+pow(t,l);
//         n = n/10;
//     }
//     return(a);
// }

// int strong(int n){
//     int t, f, s=0;
//     while(n!=0){
//         t = n%10;
//         f=1;                       // remaider
//         for(int i=1; i<=t; i++){
//            f = f*i;
//         }
//         s = s + f;
//         n = n/10;
//     }
//     return(s);
// }





// int main(){
//     int d, n, start, end;
//     while(1){
//         cout<<endl<<endl<<"\t----------------MENU----------------------"<<endl;
//         cout<<"0. EXIT"<<endl;
//         cout<<"1. PRIME NO SEREES"<<endl;
//         cout<<"2. PALINDROM NO SEREES"<<endl;
//         cout<<"3. ARMSTRONG NO SEREES"<<endl;
//         cout<<"4. STRONG NO SEREES"<<endl;
//         cout<<"ENTER THE NUMBER WHAT YOU WANT TO DO"<<endl;
//         cin>>d;

//     switch(d){
 
//         case 0: cout<<"Thank you for visiting :";
//                 exit(0); 
//                 break;

//         case 1: cout<<"Enter starting no. ";
//                 cin>>start;
//                 cout<<"Enter ending no. ";
//                 cin>>end;
//                 for(int i=start; i<=end; i++){
//                     prime(i);
//                 }
//                 break;
     
//         case 2: cout<<"Enter starting no. ";
//                 cin>>start;
//                 cout<<"Enter ending no. ";
//                 cin>>end;
//                 for(int i=start; i<=end; i++){
//                     palindrom(i);
//                 }
//                 break;

//         case 3: cout<<"Enter starting no. ";
//                 cin>>start;
//                 cout<<"Enter ending no. ";
//                 cin>>end;
//                 for(int i=start; i<=end; i++){
//                     int t = armstrong(i);
//                     if(t==i)
//                     cout<<t<<" ";
//                 }
//                 break;

//         case 4: cout<<"Enter starting no. ";
//                 cin>>start;
//                 cout<<"Enter ending no. ";
//                 cin>>end;
//                 for(int i=start; i<=end; i++){
//                     int t = strong(i);
//                     if(t==i)
//                     cout<<t<<" ";
//                 }
//                 break;

//         default : cout<<"invalid input";

//     }    
//     }
// }
