#include<iostream>
#include<string>              //Best complexity (O(n)) code to find largest sum of subarray
#include<vector>
using namespace std;
void printingsubarray(int a[],int n){
    int currentSum= 0;
    int largest_sum=0;
    for(int i=i;i<n;i++){
       currentSum+=a[i];
        if(currentSum<0){
            currentSum=0;
        }
        largest_sum=max(largest_sum,currentSum);
    }
 cout<<"maximum sum of the subarray is : "<<largest_sum;
}
int main(){
    int a[]={10,20,30,40,50,60};
    int n=sizeof(a)/sizeof(int);
    printingsubarray(a,n);
   
return 0;
}