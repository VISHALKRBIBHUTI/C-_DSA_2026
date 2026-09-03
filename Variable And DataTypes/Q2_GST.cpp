#include<iostream>
using namespace std;

int main(){

    float pencil , pen , eraser;

    cout<<"Enter the price of Pencil "<<'\n';
    cin>>pencil;
    cout<<"Enter the price of Pen "<<'\n';
    cin>>pen;
    cout<<"Enter the price of Eraser "<<'\n';
    cin>>eraser;

    float totalCost = (pencil + pen + eraser) ;
    float gstTotal = totalCost *0.18;
    float finalCost = totalCost +gstTotal;

    cout<<"Your FinalCost is : "<<finalCost<<"\n";

}