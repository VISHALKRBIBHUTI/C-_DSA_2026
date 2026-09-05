#include<iostream>
using namespace std;

int main(){

    int n = 4;

    int binNum = 0;
    int pwr = 1;
    while(n>0){

        int rem = n %2;
        binNum = binNum + rem*pwr;
        pwr = pwr *10;
        n = n/2;
    }

    cout<<binNum<<'\n';

    return 0;
}