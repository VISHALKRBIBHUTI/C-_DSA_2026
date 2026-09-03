#include<iostream>
using namespace std;

int main(){

    int num1 , num2 , num3;

    cout<<"Enter 3 Number to Check Which is Largest Among Them . "<<'\n';
    
    cout<<"Enter Your First Number "<<'\n';
    cin>>num1;

    cout<<"Enter Your Second Number"<<'\n';
    cin>>num2;

    cout<<"Enter Your Third Number"<<'\n';
    cin>>num3;


    if(num1 >= num2  && num1 >= num3){
        cout<<"Your Number "<<num1<<" is Greater Among all Three Number"<<'\n';
    }
    else if( num2>=num3){
        cout<<"Your Number "<<num2<<" is Greater Among all Three Number"<<'\n';
    }
    else{
        cout<<"Your Number "<<num3<<" is Greater Among all Three Number"<<'\n';
    }


    return 0;


}