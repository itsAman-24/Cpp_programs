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

void insertNode(node* &head, int element, int data) {
    //Empty list

    if(head == NULL) {
        node* temp = new node(data);
        head = temp;
        temp -> next = temp;
    }

    //Non Empty list

    else {
        node* current = head;

        while(current -> data != element) {
            current = current -> next;
        }

        //Element found 
        node* newnode = new node(data);
        newnode -> next = current -> next;
        current -> next = newnode;

    }

}

void deleteNode(node* head, int value) {
    //Empty list
    if(head == NULL) {
        cout << "Your list is empty... " << endl;
        return;
    }

    else {
        //Non Empety list
        node* prev = head;
        node* current = head -> next;
        
        while(current -> data == value) {
            prev = current;
            current = current -> next;
        }

        prev -> next = current -> next;
        if(head == current) {
            head = prev;
        }
        current -> next = NULL;
        delete current;

           

    }
}

void print(node* head) {
    node* temp = head;
    do {
        cout << head -> data << " ";
        head = head -> next;

    } while(head != temp);

    cout << endl;

}

int main() {
   // node* newnode = new node(54);
    node* head = NULL;

    insertNode(head,4,23);  // it means jha v 4 mile uske agle node pr 23 insert krdo
    print(head);

    insertNode(head,23,35);   
    print(head);

    
    insertNode(head,35,3);
    print(head);
    
    
    insertNode(head,3,50);
    print(head);
    
    
    insertNode(head,50,11);
    print(head);
    
    
    insertNode(head,35,36);
    print(head);

    deleteNode(head,23);
    print(head);
    
}