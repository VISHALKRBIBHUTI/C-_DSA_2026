#include<iostream>
using namespace std;

int main(){

    float amount  , tax;
    cout<<"Enter Your Amount Earning Based On That We'll Calculate the Tax.";

    cin>>amount;

    if(amount < 500000){
        tax = amount *(0/100);
        cout <<" You've To Pay "<< tax <<" Tax"<<'\n';
    }
    else if(amount >= 500000 && amount <= 1000000){
        tax = amount *(20.0/100);
        cout<<"You've To Pay "<<tax << " Tax "<<'\n';
    }
    else if (amount > 1000000){
        tax = amount *(30.0/100);
         cout<<"You've To Pay "<<tax << " Tax "<<'\n';
    }



}