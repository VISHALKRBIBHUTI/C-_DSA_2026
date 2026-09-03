#include<iostream>
using namespace std;

int main(){

    int n = 1;
    bool isPrime = true;

    if(n<2){
        isPrime = false; 
    }

    for(int i = 2 ; i*i<=n ; i++){

        if(n %i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<n<<" is Prime Number "<<'\n';
    }else{
        cout<<n<<" is Not a Prime Number "<<'\n';
    }

    return 0;
}