#include <iostream>
#include <stack>
using namespace std;

class Stack {
    // properties
    public: 

    int * arr;
    int top; 
    int size;

    //behaviours

    Stack(int size){
        this -> size = size ;
        arr = new int[size];
        top = -1;   
    }

    void push (int x){
        if(size- top > 1){
            top++;
            arr[top] = x;
        }
        else{
            cout<< "Stack overflow" << endl;
        }
    }

    void pop(){
        if(top>= 0){
            top--;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    int peek(){
        if(top>= 0){
          return  arr[top];
        }
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
     if(top == -1){
        return true;
     }
     return false;
    }
};

int main(){

    //creation of stack using STL   
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();

    // cout << "Printing top element " << s.top() << endl;

    // if(s.empty()){
    //     cout<< "Stack is empty" << endl;
    // }
    // else{
    //     cout << "Stack is not empty" << endl;
    // }

    // cout << "Size of stack is " << s.size() << endl;

    // Implementation of stack using array.

    Stack st(4);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << "Top element is " << st.peek() << endl;

    st.pop();

    cout << "Top element is " << st.peek() << endl;

    if(st.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }

}