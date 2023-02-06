#include<iostream>
#include<string>      //complexity of n square
#include<vector>
using namespace std;
void printingsubarray(int a[],int n){
    int largestsum=0;

    int prefix[100]={0};   //static memory allocation
    prefix[0]=a[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
    } 

 for(int i=0;i<n;i++){
    for(int j=1;j<n;j++){
            int sum=0;
      sum=i>0 ? prefix[j]-prefix[i-1] : prefix[j];
      
               //three loops are required
        largestsum=max(largestsum,sum);
        // cout<<endl;
    }
 }
 cout<<"maximum sum of the subarray is : "<<largestsum;
}
int main(){
    int a[]={10,20,30,40,50,60};
    int n=sizeof(a)/sizeof(int);
    printingsubarray(a,n);
   
return 0;
}