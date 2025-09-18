#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class linklist {
public:
    Node* head;
    Node* tail;
    int size;

    linklist() {
        head = tail = NULL;
        size = 0;
    }

    void insertend(int val) {
        Node* temp = new Node();
        temp->data = val;
        temp->next = NULL;

        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void deleteatfirst(){
        if(head == NULL || size==0) return;
        Node* temp =  head->next;
        head = temp;
        size--;
    }
    void deleteatend(){
        if(head == NULL || size==0) return;
        Node* temp =  head;
        while (temp->next->next!=NULL){
            temp= temp->next;
        }
        temp->next=NULL;
        tail = temp;
        size--;
    }
    void deleteatatidx(int idx){
        if(head == NULL || size==0) return;
        if(idx < 0 || idx > size -1) return;
        if (idx == 0) {
        deleteatfirst();
        return;
    }
    if (idx == size - 1) {
        deleteatend();
        return;
    }
        Node* temp =  head;
            for (int i = 0; i <idx-1; i++)
            {
              temp=temp->next;
            }
            Node* deNode = temp->next;
            temp->next= temp->next->next;
            delete deNode;
            size--;
    }
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    linklist ll;
    ll.insertend(1);
    ll.insertend(2);
    ll.insertend(3);
    ll.insertend(4);
    ll.insertend(5);
    ll.insertend(6);
    ll.display();
    ll.deleteatfirst();
    ll.display();
    ll.deleteatend();
    ll.display();
     ll.deleteatatidx(2);
    ll.display();
    return 0;
}
