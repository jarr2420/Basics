#include<iostream>
#include<string>
#include<vector>
using namespace std;
void reverse(int a[],int n){
 int s=0,e=n-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;e--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(int);
    reverse(a,n);
   
return 0;
}