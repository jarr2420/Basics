 //{ Driver Code Starts
#include<iostream>
using namespace std;

class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};

int main()
{
    MyQueue s;
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    return 0;
} 
//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
        if(rear==100005){
            return;
        }
        else{
            arr[rear]=x;
            cout<<arr[rear]<<endl;
            rear++;
        }
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
    if(rear==front){
        return -1;
    }
        int value=arr[front];
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
        return value;
}
