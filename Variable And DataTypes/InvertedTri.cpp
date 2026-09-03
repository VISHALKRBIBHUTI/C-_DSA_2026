#include<iostream>
using namespace std;

int main(){

    int num = 4;

    for(int i = 1 ; i<=num; i++){

        for(int j = i; j<=num ; j++){

            cout<<"*";
        }
        cout<<'\n';
    }


    return 0;

    // cout<<"hi"<<'\n'; --> This Unreachable Code
}