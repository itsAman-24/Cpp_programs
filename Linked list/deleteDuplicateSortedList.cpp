#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

class Node {

    public :
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this-> data = data;
        this-> next = NULL;
    }

    ~Node() {
        int value = this -> data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }

        cout << "Deleting the data of node which is " << value << endl;
    }


};

void insertAtHead(Node* &head, int data) {     

    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &Tail, int data) {     
    Node* temp = new Node(data);
    Tail -> next = temp;
    Tail = Tail -> next;  
 
}

Node* removeDuplicates(Node* head) {
    if(head == NULL) {
        return NULL;
    }

    Node* temp = head;
    while(temp != NULL) {

        if((temp -> next != NULL) && temp -> data == temp -> next -> data) {
            Node* nodeToDelete = temp -> next;
            Node* next_next = temp -> next -> next;
            temp -> next == next_next;
            delete(nodeToDelete);

        }

        else {

            temp = temp -> next;
        }

        return head;
    }


}


void print(Node* &head) {
    Node* temp = head;   

    while(temp != NULL) {
        cout << temp -> data << " " << endl;
        temp = temp -> next;   
    }

}

int main(){

    Node* N1 = new Node(1);
    
    Node* head = N1;
    Node* Tail = N1;
    
    // insertAtHead(head,23);
    // insertAtHead(head,45);

    cout << endl << endl;

    insertAtTail(Tail, 2);
    insertAtTail(Tail, 3);
    insertAtTail(Tail, 9);
    insertAtTail(Tail, 9);
    insertAtTail(Tail, 9);
    insertAtTail(Tail, 11);

    print(head);

    removeDuplicates(head);
    print(head);

}


