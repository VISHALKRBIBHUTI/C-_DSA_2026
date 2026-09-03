#include<iostream>
using namespace std;

int main(){

    int n = 199;

    int sumofOddDigit = 0;

    while(n > 0){

        int lastDigit = n%10;
        if(lastDigit%2 !=0){
            sumofOddDigit+= lastDigit;
        }

        n= n/10;
    }

    cout<<sumofOddDigit<<'\n';
}