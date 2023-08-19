//------------------------------------- MEGRING IN ARRAY  -----------------------------------------------------------------
#include<iostream>
using namespace std;  
 
int main(){        
int a[10], b[10], c[20], i, j, k, m, n, t;                    // BEFORE MERGING DATA MUST BE SORTED
cout<<"enter first table size ="<<endl;                       // M = LENGTH OF TABLE A :   N = LENGTH OF TABLE B
cin>>m;

cout<<"enter first table sorted no "<<endl;
   for(i=0; i<m; i++){
   cin>>a[i];
}


cout<<"enter second table size ="<<endl;
cin>>n;

cout<<"enter second table sorted no "<<endl;
    for(j=0; j<n; j++){
    cin>>b[j];
}


i=0; j=0; k=0;
while(i<m && j<n){   //imp         // JAB TAK KISI BHI EK TABLE KA POORA DATA C ME NA COPY HO JAYE
  
     if(a[i]< b[j]){
        c[k] = a[i];
         i++; k++;
       }

    else if(a[i]>b[j]){
       c[k] = b[j];
       j++; k++;
       }


    else{
       c[k]= a[i];                   // IF a[i]=b[j]  SO ANY ONE COPY IN C AND I++, J++, K++
       i++; j++; k++;
       }
}//while


while(i<m){                         // JAB DATA a[] me bacha ho 
     c[k] = a[i];
     i++; k++;
}

while(j<n){                         // JAB DATA b[] me bacha ho 
     c[k] = b[j];
     j++; k++;
}


cout<<"printing merg table"<<endl;
for(t=0; t<k; t++){
     cout<<c[t]<<" ";
}

}//main