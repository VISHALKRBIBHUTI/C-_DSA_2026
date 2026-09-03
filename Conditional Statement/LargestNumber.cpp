#include<iostream>
using namespace std;

int main(){

    int num1 , num2;

    cout<<"Enter Your First Number "<<'\n';
    cin>>num1;

    cout<<"Enter Your Second Number "<<'\n';
    cin>>num2;

    if(num1 > num2){
        cout<<"Your Number "<<num1 <<" greater than Number2 "<<'\n';
    }
    else if(num1 == num2){
        cout<<"Your Both Number is Equal "<<'\n';
    }
    else{
        cout<<"Your Number "<<num2 <<" greater than Number1 "<<'\n';
    }
}