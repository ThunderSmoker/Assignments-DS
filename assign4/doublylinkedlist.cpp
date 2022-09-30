#include<bits/stdc++.h>

using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
void insertatHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
    head->prev=n;
    }
    head=n;
}
void insertattail(node* &head,int val){
    if(head==NULL){
        insertatHead(head,val);
        return;
    }
    node* n=new node(val);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    n->next=NULL;
}
void deleteatHead(node* &head){
    node* todelete=head;
   head->next->prev=NULL;
   head=head->next;
   delete todelete;
}
void deletion(node* head,int pos){
    if(pos==1){
        deleteatHead(head);
        return;
    }
    node*temp=head;
    int cnt=1;
    while(temp!=NULL&&cnt!=pos){
        temp=temp->next;
        cnt++;
    }
    node* todelete=temp;
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
    temp->next->prev=temp->prev;
    }
    delete temp;
}
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int thunder() {
    node* head=NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);
    display(head);
    insertatHead(head,0);
    display(head);
    deleteatHead(head);
    display(head);
 }