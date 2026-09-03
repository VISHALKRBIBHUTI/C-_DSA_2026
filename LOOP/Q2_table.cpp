#include<iostream>
using namespace std;

int main(){

    cout<<"Enter a Number to To gets it's Table : ";
    int num;
    cin>>num;


    for(int i = 1 ; i <= 10 ; i++){
        cout<<num*i<<" ";
    }
    cout<<'\n';
}