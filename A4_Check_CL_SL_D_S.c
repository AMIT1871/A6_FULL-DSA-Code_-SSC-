// Wap for check input character is capital letter, small letter, digit, space, special symbols  
#include<stdio.h>
int main(){

char ch;
printf("enter any character\n");
scanf("%c",&ch);

if(ch>=65 && ch<=90) printf("%c : is a capital letter\n", ch);
else if(ch>=97 && ch<=122) printf("%c : is a small letter\n", ch);
else if(ch>=48 && ch<=57) printf("%c : is a number\n", ch);
else if(ch==32) printf("%c : is a space\n", ch);
else printf("%c : is a specil symbol\n", ch);

}

