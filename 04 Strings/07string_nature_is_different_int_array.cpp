#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[7]="abcdef";
    cout<<arr<<endl;
    //attention here
    cout<<ch<<endl;
    char*c=&ch[0];
    //printing entire string
    cout<<c<<endl;

    char temp='z';
    char*p=&temp;
    cout<<p<<endl;
return 0;
}