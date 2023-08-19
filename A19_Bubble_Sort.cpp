// --------------------------------- BUBBLE SORT ( SWAPING BASED ) ---------------------------------------------------------
#include<stdio.h> 
void bublesort( int a[10], int n){ 
 int i, j, t; 
 for(i=0; i<n-1; i++ ){        // NO. OF ITRATIONS     
   for (j=0; j<n-i-1; j++){      // j<n-i-1 kyo ki har itration me ek data sort ho raha hai
     if(a[j]>a[j+1]){              // COMPARE TWO CONTINUOUS NOS. 
 
       t = a[j] ; // SWAPING 
       a[j] = a[j+1] ; 
       a[j+1] = t ; 
      } // IF 
    } // J 
   } // I 
 } 

 int main(){ 
 int a[10], i, j, n, t; 
 printf(" ENTER SIZE OF ARRAY\n "); 
 scanf("%d", &n); 

 printf(" ENTER NOS \n "); 
 for(i=0; i<n; i++) 
 scanf(" %d" , &a[i]); 
 
 bublesort(a, n); 
 printf("SORTED NOS = \n"); 
 for( i=0; i<n; i++) 
 printf(" %d \n ", a[i]); 

 }


//-----------------------  IMPROVING BUBBLE SORT-------------------------------------------------------------
// #include<stdio.h> 
// void bublesort( int a[10], int n){ 
//  int i, j, t, ex; 
//  for(i=0; i<n-1; i++ ){          // NO. OF ITRATIONS   
//       ex=0;                      // if exchange = 0 that mean data are sorted 
//    for (j=0; j<n-i-1; j++){      // j<n-i-1 kyo ki har itration me ek data sort ho raha hai
//      if(a[j]>a[j+1]){              // COMPARE TWO CONTINUOUS NOS. 
 
//        t = a[j] ; // SWAPING 
//        a[j] = a[j+1] ; 
//        a[j+1] = t ; 
//        ex++;
//       } // IF 
//     } // J 
//        if(ex==0) 
//        break;
//    } // I 
//  } 

//  int main(){ 
//  int a[10], i, j, n, t; 
//  printf(" ENTER SIZE OF ARRAY\n "); 
//  scanf("%d", &n); 

//  printf(" ENTER NOS \n "); 
//  for(i=0; i<n; i++) 
//  scanf(" %d" , &a[i]); 
 
//  bublesort(a, n); 
//  printf("SORTED NOS = \n"); 
//  for( i=0; i<n; i++) 
//  printf(" %d \n ", a[i]); 

//  }