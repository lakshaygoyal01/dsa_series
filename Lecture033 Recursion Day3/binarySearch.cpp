#include<iostream> 
using namespace std;

void print(int *arr, int start, int end){
    for(int i = start; i <= end ; i++){
        cout << arr[i] << " ";
    }
        cout << endl;
}

int binarySearch(int *arr, int start,int end, int key){
    print(arr, start, end);
    if(start > end) return -1;
    

    int mid = start +(end-start)/2;

    if(arr[mid] == key) return mid;

    cout << "mid is at index " << arr[mid] << endl;
    cout << endl;
    
    if(arr[mid] < key){
        return binarySearch(arr , mid+ 1, end, key);
    }
    else{
       return binarySearch(arr, start, mid -1, key);
    }
}

int main(){
    int arr [6] = {4, 27, 35, 39, 55, 81};
    int size = 6;
    int start = 0;
    int end = size -1;
    int key = 81;

    int ans = binarySearch(arr,start,end,key);

    cout << "Index of key is " <<ans<< endl;

    return 0;
};