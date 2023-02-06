#include<iostream>
#include<string>
#include<vector>
using namespace std;
void countingsort(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        largest=max(arr[i],largest);
     }
     vector<int>frequency(largest+1,0);  //vector initialization of largest no of elements
     for(int i=0;i<n;i++){          //initialozation of all elements with 0
     frequency[arr[i]]++;           //saving frequencies of all elements 
     }
     int j=0;
        for(int i=0;i<largest;i++){
            int save=frequency[i];
        if(save>0){              //filling elements to the oiginal array
            while(save--){
                arr[j]=i;
                j++;
            }
        }
     }
}
int main(){
    int arr[]={5,4,3,2,1,3,5,3,4,8};
    int n=sizeof(arr)/sizeof(int);
    countingsort(arr,n);
    for(auto x : arr){
        cout<<x<<" ";
    }
return 0;
}