#include<iostream>
using namespace std;

void print(int *p){
    cout << *p << endl; 
    cout << p << endl;
}

void updateVar(int *p){
    p = p+1;
}

void updatePointer(int *p){
    *p = *p + 1;
}

int main(){
    int value =  5;
    int *p = &value;

    // passing pointer to a function as an argument.
    print(p);

    // updating the value of the variable in the function.
    cout << "Before updateVar: " << *p << endl;
    updateVar(p);
    cout << "After updateVar: " << *p << endl;

    // updating the value of the pointer in the function.
    cout << "Befor updatePointer " << *p << endl;
    updatePointer(p);
    cout << "After updatePointer " << *p << endl;

    return 0;
}