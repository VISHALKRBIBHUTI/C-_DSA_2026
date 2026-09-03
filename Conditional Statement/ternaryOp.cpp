#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Your Age "<<'\n';
    int age;
    cin>>age;

    cout<<boolalpha<<'\n';
    bool isAdult = (age>=18) ? true : false;

    cout<<isAdult<<'\n';

    return 0;
}