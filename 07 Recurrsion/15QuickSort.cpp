 #include<iostream>
 using namespace std;
 int partition(int *arr,int s,int e){
    //finding index of pivot
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //placing pivot at the right place
    int pivotindex=count+s;
    swap(arr[pivotindex],arr[s]);
    
    int i=s ,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
        swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
 }
 void quicksort(int *arr,int s,int e){
     //base 
     if(s>=e){
        return;
     }
     int p=partition( arr, s,e);
     //rignt vaala dekh lo
     quicksort( arr, p+1, e);
     //left vaala dekh lo
     quicksort( arr, s, p-1);
 }
 int main(){
     int arr[]={100,2,30,400,5,61,7,877,9,10,11,12};
     int n=sizeof(arr)/sizeof(int);
     int s=0;int e=n-1;
     quicksort(arr,s,e);
     cout<<"sorted array is : "<<endl;
      for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
 return 0;
 }