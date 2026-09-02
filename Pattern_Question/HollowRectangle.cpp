#include<iostream>
using namespace std;

int main(){

    int row = 4;
    int column = 5;

    for(int i = 1 ; i<=row ; i++){

        for(int j = 1; j<=column ; j++){

            if(i == 1 || j == 1 || i == 4 || j == 5){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }

        cout<<'\n';


    }


    return 0;
}