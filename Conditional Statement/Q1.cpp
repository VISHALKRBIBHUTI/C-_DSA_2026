#include<iostream>
using namespace std;

int main(){

    cout<<"Enter a Number To Check Whether it is Positive , Negative OR Zero "<<'\n';
    int num ;
    cin>>num;

    if(num>0){
        cout<<"Number is Positive "<<'\n';
    }
    else if(num<0){
        cout<<"Number is Negative "<<'\n';
    }
    else{
        cout<<"Number is Zero "<<'\n';
    }

    return 0;
}