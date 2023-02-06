#include<iostream>
using namespace std;
void reverse(string &s,int i,int j){
    if(i>j){ return ;}
    //recursiv part
    swap(s[i],s[j]);
    i++;j--;
    reverse(s,i,j);
}
int main(){
    string s="A B C D E";
    int i=0,j=s.length()-1;
    reverse(s,i,j);\
    cout<<s;
return 0;
}