#include<iostream>
using namespace std;

int main(){

    int num ;
    cout<<"Check Wether Your Number is Even or Odd "<<'\n';
    cin>>num;

    if(num%2 == 0){
        cout<<"Your Number "<< num << " is Even"<<'\n';
    }
    else{
        cout<<"Your Number "<<num <<" is Odd "<<'\n';
    }
}