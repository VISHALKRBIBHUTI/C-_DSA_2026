#include<iostream>
using namespace std;

int main(){

    int n = 10;

    int nm1 = 0;
    cout<<nm1<<" ";
    int nm2 = 1;
    cout<<nm2<<" ";
    int result ;

    for(int i = 0 ; i<10 ; i++){

        result = nm1 + nm2;
        nm1 = nm2;
        nm2 = result;

        cout<<result<<" ";

    }

    return 0;
}