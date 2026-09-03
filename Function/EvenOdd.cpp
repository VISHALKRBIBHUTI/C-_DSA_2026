#include<iostream>
using namespace std;

void evenOddCheck(int num){

    if(num%2 == 0){
        cout<<num<<" is Even"<<'\n';
    }else{
       cout<<num<<" is Odd"<<'\n'; 
    }
}




int main(){

    evenOddCheck(5);
    evenOddCheck(6);

    return 0;
}