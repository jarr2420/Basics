#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printingallpairs(int a[],int n){
 for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
     cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
    }
    cout<<endl;
 }
 
}
int main(){
    int a[]={10,20,30,40,50,60};
    int n=sizeof(a)/sizeof(int);
    printingallpairs(a,n);
   
return 0;
}