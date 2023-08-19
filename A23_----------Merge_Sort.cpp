//--------------------------------- MERGE SORT -------------------------------------------------------------------
#include<iostream>
using namespace std;

void merge_pass(int a[20], int low, int high);
void merge_sort(int a[20], int low, int mid, int high);

int main(){
int a[20], n, low, high;
   cout<<"Enter the size of array"<<endl; 
   cin>>n;
   for(int i=0; i<n; i++){
     cout<<"Enter a["<<i<<"] = ";
     cin>>a[i];
   }

  low = 0;
  high = n-1;
  merge_pass(a, low, high);

  cout<<"Sorted data "<<endl;
  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
  }
 
} // main

void merge_pass(int a[], int low, int high){
    int mid ;

   if(low < high){
       mid = (low+high)/2;
       merge_pass(a, low, mid);
       merge_pass(a, mid+1, high);
       merge_sort(a, low, mid, high);
   }
}// f1

void merge_sort(int a[], int low, int mid, int high){
int  c[20];
int i = low;
int j = mid+1;
int k = low;  /// IMP

while(i<=mid && j<=high){
    if(a[i]<a[j]){
    c[k] = a[i];
    k++; i++;
    }

    else if(a[i]> a[j]){
        c[k] = a[j];
        k++; j++;
    }
     
    else{
        c[k] = a[i];
        i++; j++; k++;
    }

} // while

while(i <= j){
    c[k] = a[i];
    i++; k++;
}

while(j <= high){
    c[k]=a[j];
    j++; k++;
}


for(int t=low; t<=high; t++){
    a[t] = c[t];
}

} // f2

