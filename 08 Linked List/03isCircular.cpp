#include<iostream>
#include<string>
#include<vector>
using namespace std;
//making circular link list
//checking wheter it is circualr
class node{
    public:
    int data;
    node*next;
    //constructor
    node(int x){
        data=x;
        next=NULL;
    }
};
void insertAtTail(node*&tail,node*&head,int d){            // inserting at tail
    node*temp=new node(d);
    tail->next=temp;
    tail=temp;
    tail->next=head;
}
void print(node*&head){                       
     node*temp=head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        if(temp->next!=head){
        temp=temp->next;
        }
        else break;
     }
     cout<<endl;
}
bool isCircular(node *head)
{
   node*temp=head;
   //case of empty linked list
   if(temp==NULL) return 0;
   //else case
   while(true){
       if(temp->next==NULL) return 0;
       if(temp->next==head)  return 1;
       temp=temp->next;
   }
}
int main(){
    node*s=new node(10);
    node*head=s;
    node*tail=s;
    insertAtTail(tail,head,12);
    insertAtTail(tail,head,10);
    insertAtTail(tail,head,16);
    print(head);
cout<<isCircular(head);
return 0;
}