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
};

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

void print(node* tail) {
    node* temp = tail;
    do {
        cout << tail -> data << " ";
        tail = tail -> next;

    } while(tail != temp);

    cout << endl;

}

int main() {
   // node* newnode = new node(54);
    node* tail = NULL;

    insertNode(tail,4,23);
    print(tail);

    insertNode(tail,23,35);
    print(tail);

    
    insertNode(tail,35,3);
    print(tail);
    
    
    insertNode(tail,3,50);
    print(tail);
    
    
    insertNode(tail,50,11);
    print(tail);
    
    
    insertNode(tail,35,36);
    print(tail);
    
}