#include<iostream>
using namespace std;
bool issorted(int*a,int n){
    //base case
    if(n==0||n==1){
        return true;
    }  
    // processing 
     if(a[0]>a[1]){
        return false;
     }
    //  recursive call
    return issorted(a+1,n-1);
}
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    cout<<n<<endl;
    if(issorted(a,n)){
        cout<<"is sorted"<<endl;
    }
     else cout<<"is not sorted"<<endl;
return 0;
}