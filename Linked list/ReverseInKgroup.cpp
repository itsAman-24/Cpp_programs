#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

};


void insertAtHead(node* &head, int data) {
    if(head == NULL) {
        node* newnode = new node(data);
    }

    else {
        node* newnode = new node(data);
        newnode -> next = head;
        head = newnode;
    }

}

void insertAtEnd(node* &tail, int data) {
    if(tail == NULL) {
        node* newnode = new node(data);
    }

    else {
        node* newnode = new node(data);
        newnode -> next = tail -> next;
        tail -> next = newnode;
        tail = tail -> next;
    }
}

void print(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " " << endl;
        temp = temp -> next;
    }
}

node* reverseInKgroup(node* head , int k) {
    //base case
    if(head == NULL) {
        return NULL;
    }

    node* prev = NULL;
    node* current = head;
    node* forward = NULL;
    int count = 0;

    while(current != NULL && count < k) {
        forward = current -> next;
        current -> next = prev;
        prev = current;
        current = forward;
        count++;
    }
    
    if(forward != NULL) {
    head -> next = reverseInKgroup(forward,k);
    }

    return prev;


}


int main() {
    node* temp = new node(64);
    node* head = temp;

    insertAtHead(head,65);
    insertAtHead(head,66);
    insertAtHead(head,67);

    print(head);
    cout << "After reversing in K group " << endl;

    reverseInKgroup(head,2);
    print(head);
   
}
