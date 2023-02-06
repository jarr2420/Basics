#include<iostream>
#include<string>             //complexity of n cube
#include<vector>
using namespace std;
void printingsubarray(int a[],int n){
    int largestsum=0;
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            int sum=0;
        for(int k=i;k<=j;k++){
            sum+=a[k];
        }  
        cout<<sum;          //three loops are required
        largestsum=max(largestsum,sum);
        cout<<endl;
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