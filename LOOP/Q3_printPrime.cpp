#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter Number : ";
    cin>>num;
    cout<<'\n';

    cout<<"Enter Number You'll will Get Prime Number From 2 To "<<num;
    cout<<'\n';


    cout<<2<<" ";

    for(int i = 3 ; i<=num ; i++){

        bool isPrime = true;

        for(int j = 2 ; j<i ; j++){

            if(i % j == 0){
              isPrime = false;
              break;  
            }
            
        }

        if(isPrime){
            cout<<i<<" ";
        }

        
    }

    return 0;
}