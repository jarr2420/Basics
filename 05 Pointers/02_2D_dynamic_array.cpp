#include<iostream>
#include<string>
#include<vector>
using namespace std;
int **create2Darray(int rows , int cols){
    //allocate memory for each row
    int **arr=new int *[rows];   //making row arry firstly
    for(int i=0;i<cols;i++){      //making cols
        arr[i]=new int[cols];
    }
    int value=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=value;
            value++;
        }
    }
    return arr;
}
int main(){
    int rows,cols;
    cin>>rows>>cols;
    int**arr=create2Darray(rows,cols);
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}