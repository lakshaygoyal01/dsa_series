#include<iostream> 
using namespace std;

int getSum(int arr[], int size){
    if(size == 0) return 0;

    return arr[0]+ getSum(arr+1, size-1);
}

int main(){
    int arr[5] = {3,5,6,7,8};
    int size = 5;

    int ans = getSum(arr, size);

    cout << "Sum of the array is: " << ans << endl;

    return 0;
}