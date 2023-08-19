// ----------------Wap for find greatest of three different numbers--------------------------------
#include<stdio.h>
int main(){
int a, b, c;

printf("enter  3 number\n");
scanf("%d%d%d",&a,&b,&c);

if(a>b ){
    if(a>c) printf("a is greater");
    else printf(" c is greater");
}

if(b>a){
    if(b>c) printf(" b is greater ");
    else printf(" c is greater ");
}

}  



//------------------------ Wap for find greatest of three noumbers for all cases ---------------------------------
// #include<stdio.h>
// int main(){
//  int a, b, c;

// printf("enter  3 number\n");
// scanf("%d%d%d",&a,&b,&c);

// if(a>b && a>c) printf("a is greater");
// else if(b>a && b>c) printf("b is greater");
// else if(c>a && c>b) printf("c is greater");

// else if(a==b &&  a > c) printf(" a=b and greatest");
// else if(b==c &&  b > a) printf(" b=c and greatest");
// else if(a==c &&  c > b) printf(" a=c and greatest");
// else if(a==b && b==c) printf("a=b=c");

// }


// ---------- greater value find using ternury among data are different ------------------------------------------
// #include<stdio.h>
// int main(){
//  int a, b, c;

// printf("enter  3 number\n");
// scanf("%d%d%d",&a,&b,&c);
// (a>b)? (a>c)? printf("a is greater"): printf(""): printf("c is greater");
// (b>c)? (b>a)? printf("b is greater ") :printf(""):  printf("c is greater");

// }
