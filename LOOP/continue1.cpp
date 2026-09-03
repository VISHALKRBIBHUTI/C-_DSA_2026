#include<iostream>
using namespace std;

int main(){

    int i = 1;

    while(i<=10){

        if(i % 2 != 0){
            i++;
            continue;
        }

        cout<<i<<' ';
        i++;
    }

    cout<<'\n';

    return 0;
}