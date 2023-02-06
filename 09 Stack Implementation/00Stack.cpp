#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    //using stl creating stack
    stack<int>s;
    s.push(3);
    s.push(5);
    s.push(52);
    s.pop();
    cout<<"top element : "<<s.top()<<endl;
    if(s.empty()) cout<<"empty"<<endl;
    else cout<<"non emoty"<<endl;
return 0;
}