#include<iostream>
using namespace std;

int main(){
    int num = 5;
    int a = num;

    cout <<"before a num is "<< num << endl; // 5
    a++;
    cout <<"after a num is "<< num << endl; // 5

    cout <<"a is "<< a << endl; // 6

    int *p = &num;

    cout<< "before " << num << endl; // 5
    (*p)++;
    cout<< "after " << num<< endl; // 6

    // copying a pointer
    int *q = p;
    cout << p <<" - " << q  << endl; // same address
    cout << *p << " - " << *q << endl; // 6

    //arithmetic operations on pointers
    int i = 3;
    int *t = &i;

    (*t)++; // or *t = *t + 1;
    cout << *t << endl; // 4

    cout << "before t is " << t << endl; // address of i
    t++;
    cout << "after t is " << t << endl; // address of i + 4

    return 0;
}

// Practice : https://www.naukri.com/code360/guided-paths/pointers