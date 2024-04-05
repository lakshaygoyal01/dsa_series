#include <iostream>
using namespace std;

void printDes(int n){
   if(n==0) {
    return;
   }

    cout << n << " ";
    printDes (n-1);
}

void printAsc(int n){
    if (n == 0) return;

    printAsc(n-1);

    cout << n << endl;  
}

int main(){ 
    int n;
    cin >> n;

    printDes(n); // 5 4 3 2 1
    cout << endl;

    printAsc(n); // 1 2 3 4 5
    return 0;
}