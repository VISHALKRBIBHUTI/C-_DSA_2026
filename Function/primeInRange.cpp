// Print Prime in range From 2 to num(given)

#include<iostream>
using namespace std;


bool primeCheck(int num){

    for(int i = 2; i*i<=num ; i++){

        if(num % i == 0){
            return false;
        }
    }

    return true;
}

void primeInRange(int num){
    
    for(int i = 2; i<=num; i++){
        

        if(primeCheck(i)){
            cout<<i<<" ";
        }
    }
}

int main(){

    primeInRange(20);

    return 0;

}