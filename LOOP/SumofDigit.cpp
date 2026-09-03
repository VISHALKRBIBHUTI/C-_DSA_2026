#include<iostream>
using namespace std;

int main(){

    int n = 10829;

    int sumDigit = 0;
    while(n>0){
        int lastDigit = n%10;
        sumDigit+= lastDigit;

        n = n/10;
    }

    cout<<sumDigit<<'\n';
}