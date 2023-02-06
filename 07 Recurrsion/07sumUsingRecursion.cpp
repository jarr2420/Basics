#include<iostream>
using namespace std;
int sum(int*a,int n){
    if(n==0){ return 0;}
    if(n==1){ return a[0];}
    //processing for one step only
    int s=a[0];
    int remainingpart=s+sum(a+1,n-1);
    return remainingpart;
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    cout<<n<<endl;
    cout<<sum(a,n)<<endl;
return 0;
}