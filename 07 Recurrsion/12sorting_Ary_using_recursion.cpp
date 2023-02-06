#include<iostream>
using namespace std;
void sorting(int*a,int n){
    //already sorted
    if(n==0 || n==1){
        return;
        }
        //sort kar lenge -->largest element ko end mein rakh denge
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
        sorting(a,n-1); //because last element is sorted now
    
}
int main(){
      int a[]={100,2,30,400,5,61,7,877,9,10,11,12};
     int n=sizeof(a)/sizeof(int);
      for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
     sorting(a,n);
     cout<<"after sorting"<<endl;
     for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
return 0;
}