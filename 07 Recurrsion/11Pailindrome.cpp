#include<iostream>
using namespace std;
bool reverse(string &s,int i,int j){
    if(i>j){ 
        return true;
        }
    //recursiv part
    if(s[i]!=s[j]){
        return false;
    }
    i++;j--;
    return reverse(s,i,j);
}
int main(){
    string s="aabbcdcbbaa";
    int i=0,j=s.length()-1;
    if(reverse(s,i,j)){
        cout<<"it is a pailindrome";
    }
    else cout<<"not it is pailindrome";
return 0;
}