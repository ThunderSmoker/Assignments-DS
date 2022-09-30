#include<iostream>
#include<fstream>
using namespace std;
class List{
    public:
    int data;
    List* next;
 
    List(int val){
        data=val;
        next=NULL;
    }
};

    void InstertATtail(List*head,int val){
        List *newNode=new List(val);
        if(head==NULL){
          head=newNode;
          return;
        }
        List* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        return;

        
    }
    void InstertAThead(List*head,int val){
        List *newNode=new List(val);
        if(head==NULL){
          head=newNode;
          return;
        }
        newNode->next=head;
        head=newNode;
        return;
        
    }
    List* reverse(List*head){
        if(head==NULL) return head;
        List*prev=NULL;
        List*cur=head;
        List*nxt;
        while(cur!=NULL ){
            nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        return prev;
    }
    void display(List*head){
        List* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        return;
    }
int main(){
    List* head = new List(0);
    for(int i=1;i<=5;i++){
        InstertATtail(head,i);
    }
    cout<<"BEFORE REVERSE:";
    display(head);
    List* reversed=reverse(head);
    cout<<"\nAfter REVERSE:";
    display(reversed);
    return 0;
}