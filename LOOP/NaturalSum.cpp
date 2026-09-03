#include<iostream>
using namespace std;


int main(){

    cout<<"Enter the Number For Which You Want The Sum : ";

    int num;
    cin>>num;

    int sum = 0;

    for(int i = 1 ; i<= num ; i++){
        sum+= i;
    }

    cout<<"Sum is : "<<sum<<'\n';


}