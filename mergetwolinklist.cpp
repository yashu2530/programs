#include<bits/stdc++.h>
using namespace std;
class Node {
  public:
    int data;
    Node* next;
};
class Linklist{
    public:
    Node* head;
    Node* Tail;
    int size;
    Linklist(){
        head = Tail = NULL;
        size =0;
    }
    void insertfirst(int val){
        Node* temp = new Node();
          temp->data= val;
           temp->next = NULL;
        if(size == 0)  head = Tail = temp;
        else {
            Tail->next= temp;
            Tail = temp;
        }size++;
    }
    void rotate(int k){
       if(head == NULL || k==0) return; 
        for(int i=0;i<k;i++){
            Node* temp = head;
            while(temp->next->next!=NULL){
                temp = temp->next;
            }
            Node* end = temp->next;
            temp->next=NULL;
            end->next= head;
            head = end;
            Tail = temp;
        }
    }
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data <<" ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main(){
    // int r;
    // cout<<"Enter the Rotation: ";
    // cin>>r;
    cout<<"LinkList "<<endl;
    Linklist ll;
    ll.insertfirst(1);
    ll.insertfirst(3);
    ll.insertfirst(5);
    ll.insertfirst(7);
     ll.display();
     cout<<"rotate "<<endl;
     ll.rotate(1);
      ll.display();
      ll.rotate(2);
      ll.display();
      ll.rotate(3);
      ll.display();
}