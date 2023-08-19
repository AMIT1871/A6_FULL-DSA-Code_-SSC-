//------------- Wap forinput percentage and print grade of the student -----------------------------------
#include<stdio.h>
int main(){
int n;
printf("enter  number\n");
scanf("%d",&n);

if(n>100) printf("invalid input");
else if(n>90) printf("a++");
else if(n>=81 && n<=90) printf("a+");
else if(n>=71 && n<=80) printf("a");
else if(n>=61 && n<=70) printf("b+");
else if(n>=51 && n<=60) printf("b");
else if(n>=41 && n<=50) printf("c");
else if(n<=40) printf("fail");

}
