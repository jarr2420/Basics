#include<iostream>
using namespace std;
#include<cmath>
long long int powerF(int n,int x){
    if(x==0){
        return 1;
    }
      if(x==1){
        return n;
    }
    long long int res=pow(n,x/2);
    if(n&1){      //odd case of power x
        return n*res*res;
    }
    else{    //even case of power x
         return res*res;
    }
}
int main(){
    int n=2;
    int x=40;
    cout<<powerF(n,x);    //means 2 raise to power 40
return 0;
}