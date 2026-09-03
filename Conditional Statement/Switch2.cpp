#include<iostream>
using namespace std;

int main(){

    cout<<"Perform Calculation Of Two Number "<<'\n'; //+ , - ,* , /

    cout<<"Enter Two Number  of Your Choice "<<'\n';
    double num1 , num2;
    cout<<"Enter Number 1 "<<'\n';
    cin>>num1;

    cout<<"Enter Number 2 "<<'\n';
    cin>>num2;

    cout<<"Enter What Operation You Want to Perform Opearton are (+  - , * , /) "<<'\n';
    char ch ;
    cin>>ch;

    switch(ch){

        case '+' : cout<<"Addition of Two Number is : "<<num1 + num2<<'\n';
        break;

        case '-' : cout<<"Subtraction of Two Number is : "<<num1 - num2<<'\n';
        break;

        case '*' : cout<<"Multiplication of Two Number is : "<<num1 * num2<<'\n';
        break;

        case '/' : cout<<"Division of Two Number is : "<<(num1/num2)<<'\n';
        break;

        default: cout<<"Invalid Operation You Enter ";


    }

    return 0;
}