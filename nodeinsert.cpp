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
    ll.display();
    return 0;
}
