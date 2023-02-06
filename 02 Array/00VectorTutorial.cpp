#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5};
    arr.pop_back();   
    arr.push_back(6);  //to insert elements at the end
    int n= arr.size(); //no of elements
    //prilnting of the elements
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
      vector<int>arr1;
       int m= arr.capacity();
       cout<<m<<endl;
    //vector initialization 
      vector<int>arr3(10,8);      //ten elements each having value 7
        for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
       
return 0;
}