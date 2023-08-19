// ---------------------  Wap for leap year---------------------------------------------------------------------

#include<stdio.h>
int main(){
int y;
printf("Enter year\n");
scanf("%d",&y);
if((y%4==0 && y%100!=0) || (y%400 == 0) )
     printf("%d : is a leap year\n", y);

else printf("%d : is not a leap year\n", y);
}


// -----------------------------  using ternary operator -------------------------------------------
// #include<stdio.h>
// int main(){
// int y;
// printf("enter  number\n");
// scanf("%d",&y);

// ((y%4==0 && y%100!=0) || (y%400==0)) ? printf("%d : is a leap year",y):  printf("%d : is not a leap year",y);
// }
