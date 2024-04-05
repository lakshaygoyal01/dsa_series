#include <iostream>
using namespace std;

int factorial(int n){
    cout << n << endl;

    //base case
    if (n ==0 ) return 1;

    //recursive relation
    return n * factorial(n-1);

    //also 
    // int smallProblem = factorial(n-1);
    // int bigProblem = n * smallProblem;
    // return bigProblem;
}

int main(){
    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}