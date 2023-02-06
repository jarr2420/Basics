#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //constructor
    Node(int x){
        data=x;
        next=NULL;
    }
};
bool detectloop(Node*head){
    map<Node*,bool>visited;
    Node*temp=head;
    while(temp!=NULL){
        if(visited[temp]!=true)  //time complexity O(n)
        visited[temp]=true;       // space comp O(n) because we have used map
        else return true;
        temp=temp->next;
    }
    return false;

}
//floid method for detection loop
//time comp O(n)
//space compO(1)
Node* detectloopUsingFloidMethod(Node*head){
    if(head==NULL) return NULL;
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast->next!=NULL) fast=fast->next;
        slow=slow->next;
        if(slow==fast) return slow;
    }
    return NULL;
}
Node* getStartingNodeOfLoop(Node*head){
    if(head==NULL) return NULL;
    Node*slow=head;
    Node*intersection=detectloopUsingFloidMethod(head);
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
void removeLoop(Node*head){
    if(head==NULL) return;
    Node*startOfLoop=getStartingNodeOfLoop(head);
    Node*temp=startOfLoop;
    while(temp->next!=startOfLoop){
        temp=temp->next;
    }
    temp->next=NULL;
}
int main(){
    //to run this code we need to make insert functions also
return 0;
}