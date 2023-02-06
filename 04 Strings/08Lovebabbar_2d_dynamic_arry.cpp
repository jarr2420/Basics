#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cout<<"enter rows and columns of the array"<<endl;
    cin>>row>>col;
    // this is the creation part of the array
    int**arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    //now taking input
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //taking output now
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // now as the memory is allocated dynamically so 
    // it is the duty of coder to realease the memory
          //releasing one by one 
          for(int i=0;i<row;i++){
            delete []arr[i];
          }
          delete[]arr;
          cout<<"Also the   memory has been deleted";
return 0;
}