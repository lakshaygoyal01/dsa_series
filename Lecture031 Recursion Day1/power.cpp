#include <iostream>
using namespace std;

int power(int base, int expo){
    //base case 
    if (expo == 0 ) return 1;

    // recursive relation
    return base * power(base, expo-1);
}

int main() {
    int base;
    int expo;
    cin >> base ;
    cin >> expo;

    int ans = power(base, expo);

    cout << ans << endl;

    return 0;
}