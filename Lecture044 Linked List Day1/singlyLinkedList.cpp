#include<iostream>
#include<map>
using namespace std;

class Node {
    public: 
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if (this -> next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory has been freed for node with data" << value << endl;
    }
};

void print (Node* &head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp ->  data << " ";
        temp = temp-> next;
    }
    cout << endl;

};

void insertAtHead(Node* &head, int d){

    //new node creation
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
};
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;

};

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    if(position ==1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while (cnt < position -1){
        temp = temp -> next;
        cnt++;
    }

    if(temp-> next == NULL){
        insertAtTail(tail, d);  
        return;
    }

    // create a node
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next =  nodeToInsert;
};

void deleteAtPosition(int position, Node* &head){

    if(position == 1){
    Node* temp = head;
    head = head -> next;
    temp->next = NULL;

    delete temp;
    } 
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev-> next = curr->next;
        curr->next = NULL;
        delete curr;
    }
};

int main(){
    //created a new node

    // Node* head = NULL; 
    // Node* tail = NULL;

    Node* node1 = new Node(10);

    cout << "data " << node1->data <<endl;
    cout << "next " << node1->next <<endl;

    // head pointed to node1
    Node* head = node1; 
    Node* tail = node1;

    print(head);
    insertAtTail(tail, 12);
    insertAtTail(tail, 13);
    insertAtTail(tail, 15);
    insertAtPosition(tail, head, 4, 14);
    insertAtPosition(tail, head, 1, 9);
    insertAtPosition(tail, head, 7, 16);
    deleteAtPosition(1, head);
    deleteAtPosition(6,head);

    print(head);

    cout << head-> data <<endl;
    cout << tail-> data <<endl;


    return 0;
}