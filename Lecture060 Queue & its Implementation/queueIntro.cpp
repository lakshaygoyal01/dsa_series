#include<iostream>
#include<queue>
using namespace std;

int main(){
    // creating a queue using STL
    queue<int> q;

    q.push(15);
    q.push(20);
    q.push(25);

    cout<< "front element of queue is : " << q.front() <<endl; // 15
    cout<< "back element of queue is : " << q.back() <<endl; // 25

    cout<< "size od queue is : "<< q.size() << endl; // 3

    q.pop();

    cout<< "front element of queue is : " << q.front() <<endl; // 20

    cout<< "size od queue is : "<< q.size() << endl; // 2

    if(q.empty()){
        cout<< "Queue is empty" << endl;
    }
    else{
        cout<< "Queue is not empty" << endl;
    }

    return 0;
}