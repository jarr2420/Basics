#include<iostream>
#include<string>
#include<vector>
using namespace std;   //fib series 0,1,1,2,3,5....
int fib(int n){
        if(n==1){
            return 0;
        }
         if(n==2){
            return 1;
        }
        return fib(n-2)+fib(n-1);
    }
int main(){
    int n=5;
    cout<<"Nth term is : "<<fib(n);
return 0;
}