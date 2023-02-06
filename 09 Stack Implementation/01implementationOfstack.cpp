#include<iostream>
#include<string>
#include<vector>
using namespace std;
class stack{
    public:
    int top;    
    int *arr;
    int size;
    stack(int x){
        top=-1;
        size=x;
        arr=new int[size];
    } 
    void push(int x){
        if(size-top>1){
            top++;
            arr[top]=x;
        }
        else{
            cout<<"stack overflown"<<endl;
        }
    }
    void pop(){
        if(top<0){
            cout<<"stack underflown"<<endl;
        }
        else top--;
    }
    int peek(){
        if(top<0){
            cout<<"stack is empty"<<endl;
            return -1;
        } 
        else{
            return arr[top];
        }
    }
    bool empty(){
        if(top<0) return true;
        else return false;
    }
};
using namespace std;
int main(){
    stack s(5);
    s.push(222);
    s.push(221);
    s.push(00);
    s.push(00);
    s.pop();
    s.push(20);
    cout<<s.peek()<<endl;
    cout<<s.empty()<<endl;
return 0;
}