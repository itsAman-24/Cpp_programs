#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node (int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};
void levelOrderTraversal(node* root) {
    queue <node*> q;
    q.push(root);
    q.push(NULL);   //using seperater for propere displaying of the tree

    while(!q.empty()) {
        node* temp = q.front();
        
        q.pop();

        if(temp == NULL) {
            cout << endl;

            if(!q.empty()) {
                q.push(NULL);
            }
        }

        else {
            cout << temp->data << " ";
            if(temp->left) {
            q.push(temp->left);
            }

            if(temp->right) {
            q.push(temp->right);
           }
        }

       
    }
    
    
}

node* createBST(node* root ,int data) {
    if(root == NULL) {
        root = new node(data);
        return root;
    }

    if(data > root->data) {
        root->right = createBST(root->right , data);
    }

    else {
        root->left = createBST(root->left , data);

    }

}


void takeInput(node* root) {
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;

    while(data == -1) {
        createBST(root,data);
        cin >> data;

    }
}

int main() {
    node* root = NULL;
    takeInput(root);

    levelOrderTraversal(root);



}