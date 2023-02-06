#include<iostream>
using namespace std;
void print(int*a,int n){
    cout<<"search elements in each steps "<<endl;
      for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
      }
      cout<<endl;
}
void linearSearch(int*a,int n,int key){
     print(a,n);
    if(n<=0){
        cout<<"not found"<<endl;
        return;
    }
    if(a[0]==key){
        cout<<"key found"<<endl;
        return;
    }
    //recursive call
    linearSearch(a+1,n-1,key);
}
int main(){
     int a[]={1,2,3,4,5,6,7,};
     int n=sizeof(a)/sizeof(int);
     int  key=10;
    cout<<"total no of elements is : "<<n<<endl;
    linearSearch(a,n,key);
return 0;
}