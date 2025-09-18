#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
class linklist {
    public:
    Node* head;
    Node* Tail;
    int size;
    linklist(){
        head =  Tail = NULL;
        size = 0;
    }
    void insertfirst(int val){
        Node* temp = new Node();
        temp->data=val;
        temp->next=NULL;
        if(size==0) head = Tail = temp;
        else{
            Tail->next = temp;
            Tail = temp;
        }size++;
    }
    void insertatfront(int val){
        Node* temp = new Node();
        temp->data=val;
        temp->next=NULL;
        if(size==0) head = Tail = temp;
        else{
            temp->next= head;
            head = temp;
        }
    }
    void inseratend(int val){
        Node* temp = new Node();
        temp->data=val;
        temp->next=NULL;
        if(size==0) head = Tail = temp;
        else{
           Tail->next= temp;
           Tail = temp;
        }
    }
    void insertatindx(int val, int idx){
        Node* temp = new Node();
        temp->data=val;
        temp->next=NULL;
        if(size==0) head = Tail = temp;
        else{
             Node* mid = head;
            for (int i = 1; i <idx-1; i++)
            {
              mid=mid->next;
            }
            temp->next= mid->next;
            mid->next = temp;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    linklist ll;
    ll.insertfirst(1);
    ll.insertfirst(3);
    ll.insertfirst(5);
    ll.insertfirst(7);
    ll.display();
    ll.insertatfront(2);
     ll.display();
     ll.inseratend(4);
     ll.display();
     ll.insertatindx(9, 3);
     ll.display();
     ll.insertatindx(6, 5);
     ll.display();
}