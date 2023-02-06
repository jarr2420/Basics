#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    //constructor
    node(int x){
        data=x;
        next=NULL;
    }
    ~node(){
        int value=this->data;
        //free memory
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory free for node with data "<<value<<endl;
    }
};
void insertAtHead(node*&head,int d){          //inserting at head 
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(node*&tail,int d){            // inserting at tail
    node*temp=new node(d);
    tail->next=temp;
    tail=temp;
}
// printing the linked list
void print(node*&head){                       
     node*temp=head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
}
    //// inserting at any position
void insertAtPosition(node*&tail,node*&head,int position,int d){
    if(position==1){
        insertAtHead(head,d);       //head condition            
        return;
    }
     node*temp=head;
     int cnt=1;
     while(cnt<position-1){
        temp=temp->next;
        cnt++;
     }
//inserting at last position
     if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
     }
     
     node*nodeToInsert=new node(d);
     nodeToInsert->next=temp->next;  //middle insertion
     temp->next=nodeToInsert;
}
//deletion of node
void deleteNode(int position,node*&head){
    //deleting first node
    if(position==1){
        node*temp=head;
        head=head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        node*curr=head;
        node*prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
// function for reversing a linked list reverse
// iterative method
node*reversemethodusingiteration(node*head){
    node*curr=head;
    node*prev=NULL;
    node*forward;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
//reverse method using recursion
node*reverse(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*rest=reverse(head->next);
    head->next->next=head;
    head=NULL;
    return rest;
}
int main(){
    node* node1=new node(10);
    node*head=node1;
    node*tail=node1;
    insertAtHead(head,5);
    insertAtTail(tail,20);
    insertAtPosition(tail,head,3,15);
    insertAtPosition(tail,head,1,1); 
    insertAtPosition(tail,head,6,25); 
    insertAtPosition(tail,head,7,30);
    print(head);
    deleteNode(7,head);
    deleteNode(6,head);
    print(head);
    head=reverse(head);
    print(head);
    
return 0;
}