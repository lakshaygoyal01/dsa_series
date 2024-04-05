#include<iostream> 
using namespace std;

void reachHome(int src, int des){
    cout << "src is " << src << " "<< "des is " << des << endl;

    //base case
    if(src == des){
        cout << "Reached Home" << endl;
        return;
    }

    // processing - ek step aage badh jao
    src++;

    //recursive call
    reachHome(src, des);
    // cout << "src is " << src << " "<< "des is " << des << endl;
}

int main(){
    int src = 1;
    int des = 10;

    reachHome(src, des);

    return 0;
}