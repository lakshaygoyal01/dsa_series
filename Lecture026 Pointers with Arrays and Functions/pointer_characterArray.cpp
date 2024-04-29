#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl; // address of first element
    cout << ch << endl;  // abcde

    char *c = &ch[0];
    // prints the entire string
    cout << c << endl; // abcde 

    // when there is no null character, it will print garbage values
    char temp = 'z';
    char *t = &temp;

    cout << t << endl; // z�.�k
 
    return 0;
}