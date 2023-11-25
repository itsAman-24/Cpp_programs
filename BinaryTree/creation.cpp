#include <bits/stdc++.h>
using namespace std;

class node {
    public: 
    int data;
    node* left;
    node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL; 
        this -> right = NULL;
    }

};

node* builtTree(node* root) {
    cout << "Enter the data:" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1) {
        return NULL;
    }

    cout << "In left of " << data << endl;
    root -> left = builtTree(root->left);
    cout << "In right of " << data << endl;
    root -> right = builtTree(root->right);
    return root;
}

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

void inorder(node* root) {    // Left Node Right (LNR)
    if(root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node* root) {
    if(root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root) {
    if(root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


int main() {

    node* root = NULL;
    root = builtTree(root);
    
    cout << endl;
    cout << "Printing through level order traversal tree node: " << endl;
    levelOrderTraversal(root);
   // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout << endl << "Printing through inorder traversal: ";
    inorder(root);
    cout << endl << "Printing through preorder traversal: ";
    preorder(root);
    cout << endl << "Printing through postorder traversal: ";
    postorder(root);

}