#include<iostream>
using namespace std;
void binarySearch(int *a,int s,int e,int key){
    if(s>e){ 
        cout<<"not found";
        return;
     }
    int mid=(s+e)/2;
    if(a[mid]==key){
        cout<<"found"<<endl;
        return;
    }
    else if(a[mid]>key){
        binarySearch(a,s,mid-1,key);
    }
    else{
    binarySearch(a,mid+1,e,key);
    }

}
int main(){
     int a[]={1,2,3,4,5,6,7,8,9,10,11,12};
     int n=sizeof(a)/sizeof(int);
     int  key=15;
     int s=0,e=n-1;
    cout<<"total no of elements is : "<<n<<endl;
    binarySearch(a,s,e,key);
return 0;
}