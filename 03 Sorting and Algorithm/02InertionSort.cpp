#include<iostream>
#include<string>
#include<vector>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j;
         for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{  //ruk jao
                break;
            }
         }
         arr[j+1]=temp;
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    for(auto x : arr){
        cout<<x<<" ";
    }
return 0;
}