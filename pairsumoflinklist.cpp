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
    void pairsum(){
        Node* temp = head;
        while (temp!=nullptr)
        {
            cout<<((temp->data )+(temp->next->data))<<" ";
            temp= temp->next->next;
        }
        
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
    ll.insertend(10);
    ll.insertend(20);
    ll.insertend(30);
    ll.insertend(40);
    ll.insertend(60);
    ll.insertend(50);
    ll.insertend(90);
    ll.display();
    ll.pairsum();
    return 0;
}
