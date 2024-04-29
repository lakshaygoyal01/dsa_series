#include<iostream>
using namespace std;

int main(){
    int arr[10] = {2,5,6,49};

    // address of first memory block
    cout << "address of first memory block is " << arr << endl;

    // accessing first element
    cout << " Element at 0 index is " << arr[0] << endl;
    // using & operator
    cout << "address of first memory block is " << &arr[0] << endl;
    cout << "address of second memory block is " << &arr[1] << endl;

    cout << *arr << endl; // 2
    cout << *arr + 1 << endl; // 3
    cout << *(arr + 1 )<< endl; // 5

    // how accessing elements work under the hood
    cout << arr[2] << endl; // 6
    cout << *(arr+2) << endl; // 6

    // 🌟 Formula:-   arr[i] = *(arr + i) 
    // or 
    // 🌟 Formula:-   i[arr] = *(i + arr)

    int i= 3;
    cout << i[arr] << endl; // 49 

    //size of array
    int temp[10] = {2,3};
    cout << "1st " << sizeof(temp) << endl; // 40
    cout << "2nd " << sizeof(*temp) << endl;  // 4
    cout << "3rd " << sizeof(&temp) << endl; // 8

    int *p = &temp[0];

    //size of pointer
    cout << "4th " << sizeof(p) << endl; // 8
    cout << "5th " <<sizeof(*p) << endl; // 4
    cout << "6th " <<sizeof(&p) << endl; // 8

    //& operator
    int a[20] ={1,2,3,4};

    cout << &a[0] << endl; 
    cout <<&a << endl;
    cout << a << endl; 
    // all above three will give the same address

    int *q = &a[0];
    cout << q << endl; // address of a[0]
    cout << *q << endl; // value at a[0]
    cout <<&q << endl; // address of q
 
    // we can't change the value of symbol table
    int b[10] ={45,65,24,54};
    // b = b +1; // error

    // we can change the value of pointer
    int *r = &b[0];
    cout << r << endl; // address of b[0]
    cout << *r << endl; // value at b[0]
    r = r + 1;
    cout << r << endl; // address of b[1]
    cout << *r << endl; // value at b[1]

    return 0;
}