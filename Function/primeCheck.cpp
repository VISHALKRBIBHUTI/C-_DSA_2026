#include<iostream>
using namespace std;

bool primeCheck(int num){

    if(num<=1){
        return false;
    }
    if(num == 2){
        return true;
    }


    for(int i = 2; i*i<=num; i++){

        if(num%i == 0){
            return false;
        }
    }

    return true;
}


int main(){

    cout<<boolalpha<<'\n';

    int num = 29;
    if(primeCheck(num)){
        cout<<num<<" is Prime"<<'\n';
    }
    else{
        cout<<num<<" is Not Prime"<<'\n';
    }

    return 0;

}