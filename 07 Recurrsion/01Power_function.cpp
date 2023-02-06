#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int power(int n){
    //this is the base condition
    if(n==0){
        return 1;
    }
    //recursive relation
    int ans=2*power(n-1);
    return ans;
}
int main(){
    int n=5;
    cout<<power(n);
return 0;
}