#include<iostream> 
using namespace std;

int linearSearch(int *arr,int size, int key){
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        return linearSearch(arr+ 1, size -1, key);
    }
}

int main(){
    int arr[6] = {4,11,8,34,23,17};
    int size = 6;
    int key = 23;

    int ans  = linearSearch(arr,size, key);

    if(ans){
        cout << "Key is present " << endl;
    }
    else{
        cout << "key is Absent" << endl;
    }

    return 0;
}