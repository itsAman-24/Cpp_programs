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

    ~node() {
        int value = this->data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }

        cout << "freeing the space for " << value << endl;
    }


};


void insertAtHead(node* & head, node* &tail, int data) {
    if(head == NULL) {
        node* temp = new node(data);
        head = temp;
        tail = temp;
    }
    node* temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(node* &tail, node* &head, int data) {

    if(tail == NULL){
        node* temp = new node(data);
        tail = temp;
        head = temp;
    }
    node* temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(node* & head, node* & tail, int position, int data) {
    if(position == 1) {
        insertAtHead(head,tail,data);
        return;
    }
    
    node* temp = head;
    int count = 1; 
    while(count != position -1) {
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL) {
        insertAtTail(tail,head,data);
    }

    node* insert = new node(data);
    insert->next = temp->next;
    temp->next->prev = insert;
    temp->next = insert;
    insert->prev = temp;
} 


void deleteNode(int position, node* &head, node* &tail) {
    if(position == 1) {
        node * temp = head;
        head = head -> next;
        head -> prev = NULL;

        temp -> next = NULL;
        delete temp;
    }

    else {
        node * previous = NULL;
        node * current = head;

        int count = 1;

        while(count < position) {
            previous = current;
            current =  current -> next;
            count++;
        }    

        //when last node is deleted then this will change tail pointing on current last node
        if(current -> next == NULL) {
           tail = previous;
        }

        previous -> next = current -> next;
        current -> next -> prev = previous;

        current -> next = NULL;
        current -> prev = NULL;

        delete current;




    }
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
    // node* n1 = new node(10);  // this case defines the case where we had a single node in starting
    // node* head = n1; 
    // node* tail = n1;

    node* head = NULL;      // this case defines the case where we have no node in starting
    node* tail = NULL;

    print(head);
    cout << "The length of linklist is " << getLength(head) << endl;

    insertAtHead(head,tail,34);
    insertAtHead(head,tail,45);
    insertAtHead(head,tail,80);
    print(head);
    cout << "The length of linklist is " << getLength(head) << endl;

    insertAtTail(tail,head,90);
    print(head);
    cout << "The length of linklist is " << getLength(head) << endl;

    insertAtPosition(head,tail,3,100);
    print(head);
    
    insertAtPosition(head,tail,1,101);
    print(head);

    insertAtPosition(head,tail,7,102);
    print(head);

    cout << "The length of linklist is " << getLength(head) << endl;

    deleteNode(1,head,tail);
    print(head);
    cout << "The length of linklist is " << getLength(head) << endl;

    
}