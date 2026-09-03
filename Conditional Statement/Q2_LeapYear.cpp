#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Year to Check Whether a Year is a Leap Year or NOT"<<'\n';
    int year;
    cin>>year;

    if(year % 400 == 0 || (year %4 == 0 && year%100 != 0)){
        cout<<year <<" is a Leap Year"<<'\n';
    }
    else{
        cout<<year<<" Year is Not a Leap Year "<<'\n';
    }

}