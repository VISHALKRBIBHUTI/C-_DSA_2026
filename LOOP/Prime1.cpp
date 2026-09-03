#include<iostream>
using namespace std;

int main(){

    int n = 12;
    bool isPrime = true;

    if(n<2){
        isPrime = false;
    }

    for(int i = 2 ; i<n ; i++){

        if(n %i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<n<<" is a Prime Number "<<'\n';
    }else{
        cout<<n<<" is Not a Prime Number "<<'\n';
    }
}