#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d) {
        this->data = d;
        this->next = NULL;
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

node* ReverseList(node* &head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }

    else {
        node* previous = NULL;
        node* current = head;
        node* forward = NULL;

        while(current != NULL) {
            forward = current -> next;
            current -> next = previous;
            previous = current;
            current = forward;
        }
        // head = forward;
        return forward;
    }
}

int main() {
    node* newnode = new node(34);
    node* head = newnode;
    node* tail = newnode;
    
    cout << "Without Insertion " << endl;
    print(head);
    cout << endl << "Inserting at head" << endl;
    insertAtHead(head,67);
    print(head);
    cout << endl;

    cout << endl << "Inserting at tail" << endl;
    insertAtEnd(tail,56);
    print(head);

    cout << endl << "Head is at: " << head -> data << endl;
    cout << "Tail is at : " << tail -> data << endl;

    cout << "Reversing the list" << endl;

    ReverseList(head);
    print(head);
}

