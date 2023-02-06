#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printingsubarray(int a[],int n){
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        for(int k=i;k<=j;k++){
     cout<<a[k]<<" ";
        }            //three loops are required
        cout<<endl;
    }
    // cout<<endl;
 }
}
int main(){
    int a[]={10,20,30,40,50,60};
    int n=sizeof(a)/sizeof(int);
    printingsubarray(a,n);
   
return 0;
}