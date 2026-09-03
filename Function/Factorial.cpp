#include<iostream>
using namespace std;

int  factorial(int num){

    if(num == 0){
        return 1;
    }

    int facto = 1;

    for(int i = 1 ; i<=num ; i++){

        facto*=i;
    }


    return facto;


}

int main(){

    int num = factorial(5);
    cout<<"Factorial of Number is = "<<num<<'\n';
}