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


};

void insertAtHead(Node* &head, int data) {      // Function for insertion at starting (Head)

    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &Tail, int data) {      // Function for insertion at ending (Tail)

    Node* temp = new Node(data);
    Tail -> next = temp;
    Tail = Tail -> next;
 
}


void print(Node* &head) {
    Node* temp = head;   /* we dont want any changes in real linked list so here we
                            are creating temp pointer which points at first node
                            and traversing through the list */

    while(temp != NULL) {
        cout << temp -> data << " " << endl;
        temp = temp -> next;   /* this line just helps temp to point on the next node
                                  as temp -> next stores the address of next node */
    }

}

int main(){

    Node* N1 = new Node(15);

    // cout <<"Data -> " << N1->data << endl;
    // cout <<"Address -> " <<  N1->next << endl;
    
  //Storing N1 ka address in Head pointer
    Node* head = N1;
    Node* Tail = N1;
    
    insertAtHead(head,23);
    insertAtHead(head,45);

    print(head);
    cout << endl << endl;

    insertAtTail(Tail, 2);
    insertAtTail(Tail, 3);
    insertAtTail(Tail, 9);

    print(head);

}