#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* prev;
    node* next;

    //constructor
    node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }


};


void insertAtHead(node* & head, int data) {
    node* temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(node* & tail, int data) {
    node* temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(node* & head, node* & tail, int position, int data) {
    if(position == 1) {
        insertAtHead(head,data);
        return;
    }
    
    node* temp = head;
    int count = 1; 
    while(count != position -1) {
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL) {
        insertAtTail(tail,data);
    }

    node* insert = new node(data);
    insert->next = temp->next;
    temp->next->prev = insert;
    temp->next = insert;
    insert->prev = temp;
} 


int getLength(node* head) {
    int length = 0;

    node* temp = head;

    while(temp != NULL) {
        length++;
        temp = temp->next;
    }

    return length;
}

void print(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* n1 = new node(10);
   
    node* head = n1;
    node* tail = n1;

    print(head);
    cout << "The length of linklist is " << getLength(head) << endl;

    insertAtHead(head,34);
    insertAtHead(head,45);
    insertAtHead(head,80);
    print(head);
    cout << "The length of linklist is " << getLength(head) << endl;

    insertAtTail(tail,90);
    print(head);
    cout << "The length of linklist is " << getLength(head) << endl;

    insertAtPosition(head,tail,3,100);
    print(head);
    
    insertAtPosition(head,tail,1,101);
    print(head);

    insertAtPosition(head,tail,7,102);
    print(head);

    cout << "The length of linklist is " << getLength(head) << endl;

    
}