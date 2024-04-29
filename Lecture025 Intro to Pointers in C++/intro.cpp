#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout<< num << endl;

    // address of operator - &
    cout<< "address of num is " << &num <<endl; // in the form of hexadecimal number


    //pointers
    int *ptr = &num;
    // dereferencing operator - *

    cout << *ptr<< endl; // value at the address stored in ptr = value at the address of num = 5 
    cout << ptr << endl; // address stored in ptr = address of num = hexadecimal number

    cout << "size of integer is " << sizeof(int) << endl; // 4
    cout << "size of pointer is " << sizeof(ptr) << endl; // 8 
    cout << "size of pointer is " << sizeof(*ptr) << endl; // 4, bcuz it is an integer pointer

    //pointer to int is created  and pointing to some garbage address
    int *p;
    // cout << *p << endl; // garbage value

    int *q = 0;
    // cout << *q << endl; // segmentation fault

    // another way to initialize pointer
    int *r  =  0;
    r = &num;
    cout << *r << endl; // 5

    
    return 0;
}