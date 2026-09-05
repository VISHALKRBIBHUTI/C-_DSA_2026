#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n = 111;

    int decimalNum = 0;
    int pow = 1;
    //int count = 0;
    while(n>0){

        int lastDigit = n %10;
       // decimal = decimal + lastDigit*pow(2 , count);
       decimalNum = decimalNum + lastDigit*pow;
       pow= pow *2;
        n = n/10;
      
    }

    cout<<decimalNum<<'\n';

    return 0;
}