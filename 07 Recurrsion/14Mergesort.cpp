#include<iostream>
using namespace std;
void merge(int*arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    //coping elements
    int mainarrayindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];
    }
    mainarrayindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
    }
    //sorting and merging two sorted array 
    int i=0,j=0;
    mainarrayindex=s;
    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[mainarrayindex++]=first[i];
            i++;
        }
        else{
            arr[mainarrayindex++]=second[j];
            j++;
        }
    }
    while(i<len1){
         arr[mainarrayindex]=first[i];
            i++;
    }
     while(j<len2){
          arr[mainarrayindex]=second[j];
            j++;
    }

}
void mergesort(int*arr,int s,int e){
    if(s>=e) return;
    int mid=(s+e)/2;
    //left sorting 
    mergesort(arr,s,mid);
    //right sorting
    mergesort(arr,mid+1,e);
    //merging elements now
    merge(arr,s,e);
}
int main(){
      int arr[]={100,2,30,400,5,61,7,877,9,10,11,12};
     int n=sizeof(arr)/sizeof(int);
     int s=0;int e=n-1;
     mergesort(arr,s,e);
      for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
return 0;
}