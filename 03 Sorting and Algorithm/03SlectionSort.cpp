#include<iostream>
#include<string>
#include<vector>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_pos=i; //instead of storing element we are storing position
        for(int j=i;j<n;j++){
            if(arr[min_pos]>arr[j+1]){
            min_pos=j+1;
            }
        }
        swap(arr[i],arr[min_pos]);
    }
}
int main(){
    int arr[]={5,4,3,2,1,3,5,6,7,8,23,25,42,245,65};
    int n=sizeof(arr)/sizeof(int);
    selectionsort(arr,n);
    for(auto x : arr){
        cout<<x<<" ";
    }
return 0;
}