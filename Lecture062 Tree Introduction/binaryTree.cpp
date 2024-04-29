#include <iostream>
#include <queue>
using namespace std; 

class node {
    public : 
     int data;
     node* left;
     node* right;

     node(int data){
        this-> data = data;
        this-> left = NULL;
        this-> right = NULL;
     }
 };

node* buildTree(node* root){
    cout << "Enter the data : " ;
    int data;
    cin>> data;

    if(data == -1){
        return NULL;
    }

    root = new node(data);

    cout << "Enter the left child of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the right child of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){
   queue<node*> q;
   q.push(root);
   q.push(NULL);

   while(!q.empty()){
    node* temp = q.front();
    q.pop();

    if(temp == NULL){
        cout << endl;
        if(!q.empty())  q.push(NULL);
    }
    else
    {
        cout << temp-> data << " "; 

        if(temp-> left)  q.push(temp-> left);
        if(temp-> right) q.push(temp-> right);   
    }
   }
}

void inOrderTraversal(node* root){
    if (root == NULL) return;

    inOrderTraversal(root->left);
    cout << root-> data << " ";
    inOrderTraversal(root -> right);
}

void preOrderTraversal(node * root){
    if(root == NULL) return;

    cout << root-> data << " ";
    preOrderTraversal(root-> left);
    preOrderTraversal(root-> right);
}

void postOrderTraversal(node* root){
    if(root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);

    cout << root-> data << " ";
}

int main(){

    node* root = NULL;

    root = buildTree(root);
    cout << endl;


    cout<< "Print the root of tree " << root-> data<< endl;

    cout << "Printing Level Order Traversal" << endl;
    levelOrderTraversal(root);

    cout << "Printing In Order Traversal : ";
    inOrderTraversal(root);

    cout << endl << "Printing Pre Order Traversal : ";
    preOrderTraversal(root);

    cout << endl <<"Printing Post Order Traversal : ";
    postOrderTraversal(root);

    cout << endl;

    return 0;
}


// 1 3 7 -1 -1 8 -1 -1 4 9 -1 -1 10 -1 -1

//Homework: reverse level order traversal, all traversals uding iteration