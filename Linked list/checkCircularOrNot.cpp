#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int d) {
        this -> data = d;
        this -> next = NULL;
    }

    ~node() {
        int value = this -> data;
        if(this -> next != NULL) {
            delete next;
            next = NULL;
        }

        cout << " Deleting memory for " << value << endl;

    }
};

node*  insertAtBeg(node* &tail,int data) {
    //Empty list

    if(tail == NULL) {
        node* temp = new node(data);
        tail = temp;
        temp -> next = temp;
    }

    else {
    //Non Empty List

       node* newnode = new node(data);
       newnode -> next = tail -> next;
       tail -> next = newnode;
       return tail;
    }
    
 
}

node* insertAtEnd(node* &tail, int data) {
    //Empty list
    if(tail == NULL) {
        node* temp = new node(data);
        tail = temp;
        temp -> next = temp;
    }

    //non empty list
    else {
        node* newnode = new node(data);
        newnode -> next = tail -> next;
        tail -> next = newnode;
        tail = newnode;
        return tail;
    }
}

void insertNode(node* &tail, int element, int data) {
    //Empty list

    if(tail == NULL) {
        node* temp = new node(data);
        tail = temp;
        temp -> next = temp;
    }

    //Non Empty list

    else {
        node* current = tail;

        while(current -> data != element) {
            current = current -> next;
        }

        //Element found 
        node* newnode = new node(data);
        newnode -> next = current -> next;
        current -> next = newnode;

    }

}

void deleteNode(node* tail, int value) {
    //Empty list
    if(tail == NULL) {
        cout << "Your list is empty... " << endl;
        return;
    }

    else {
        //Non Empty list
        node* prev = tail;
        node* current = tail -> next;
        
        while(current -> data == value) {
            prev = current;
            current = current -> next;
        }

        prev -> next = current -> next;
        if(tail == current) {
            tail = prev;
        }
        current -> next = NULL;
        delete current;

           

    }
}

void print(node* &tail) {
    node* temp = tail;
    do {
        cout << tail -> next -> data << " ";
        tail = tail -> next;

    } while(tail != temp);

    cout << endl;

}

bool IsCircularList(node* head) {
    if(head == NULL) {     // if the list is empty we have to consider it as circular list
        return true;
    }

    node* temp = head -> next;   // taking next node after head as the temp node

    while(temp != NULL && temp != head) {    //traversing till temp is not NULL or it is not equal to head
        temp = temp -> next;
    }

    if(temp == head) {    // if it reaches the head it means it is circular list
        return true;
    }

    return false;

}

int main() {
   // node* newnode = new node(54);
    node* tail = NULL;

    // insertNode(tail,4,23);  // it means jha v 4 mile uske agle node pr 23 insert krdo
    // print(tail);

    // insertNode(tail,23,35);   
    // print(tail);

    
    // insertNode(tail,35,3);
    // print(tail);
    
    
    // insertNode(tail,3,50);
    // print(tail);
    
    
    // insertNode(tail,50,11);
    // print(tail);
    
    
    // insertNode(tail,35,36);
    // print(tail);

    // deleteNode(tail,23);
    // print(tail);

    
    

    
    insertAtBeg(tail,24);
    print(tail);
    insertAtEnd(tail,23);
    print(tail);
    insertAtEnd(tail,25);
    print(tail);

    if(IsCircularList(tail)) {
        cout << "This List is circular in nature " <<  endl;
    }

    else {
        cout << "This List is not circular in nature " << endl << endl;
    }
    
    cout << endl << "Tail is: ";
    cout << endl << tail -> data << " ";
}