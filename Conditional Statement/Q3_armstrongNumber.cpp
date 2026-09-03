#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Number to check whether it is Armstrong Number or Not "<<'\n';

    int num;
    cin>>num;

    int original = num;
    int Cubesum  = 0;
    while(num>0){

        int rem = num%10;
        Cubesum = Cubesum + (rem * rem * rem);
        num = num/10;
    }

    if(original == Cubesum){
        cout<<original<<" Number is Armstrong Number "<<'\n';
    }else{
        cout<<original<<" Number is Not Armstrong Number "<<'\n';
    }

    return 0;
}