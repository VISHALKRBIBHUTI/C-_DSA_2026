#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Number To Get it's Factorial : ";
    int num;
    cin>>num;
    int fact = 1;


    if(num == 0){
        cout<<"Factorial of "<<num<<" is "<<1<<'\n';

    }else{

        for(int i = 1 ; i<=num ; i++){

            fact*=i;
        }

    }

    cout<<"Factorial of  "<<num <<" is : "<<fact<<'\n';

    
}