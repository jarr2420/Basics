#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int a=10;
    int *p=&a;      //pointer varalbble of same  data type 
    int **ptr=&p;    //pointer to a pointer variable
    cout<<a<<endl;
    cout<<p<<endl;     //address varaible
    cout<<ptr<<endl;   //address 
    cout<<*p<<endl;    //derefrencing of a variable using operator *
return 0;
}