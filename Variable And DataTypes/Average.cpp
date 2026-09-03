#include<iostream>
using namespace std;

int main(){

    int maths , phy , chem; //initially this variable contain the garbage value
    double avg; //garbage value

    cout<<"Enter Your Maths Marks "<<'\n';
    cin>>maths;
    cout<<"Enter Your Physics Marks "<<'\n';
    cin>>phy;
    cout<<"Enter Your Chemistry Marks "<<'\n';
    cin>>chem;

    avg = (maths + phy + chem)/3.0;

    cout<<"Your Average Marks is : "<<avg <<'\n';

    return 0;

}