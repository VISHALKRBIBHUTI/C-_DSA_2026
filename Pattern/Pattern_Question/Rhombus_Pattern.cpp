

/*

    *****
   *****
  *****   Rhombus Pattern
 *****
*****


*/ 




#include<iostream>
using namespace std;


int main(){

    int row = 5;

    for(int i = 1 ; i<= row; i++){

        // Printing Space
        for(int j = i; j<row; j++){
            cout<<" ";
        }

        for(int k = 1; k<=row ; k++){
            cout<<"*";
        }

        cout<<'\n';
    }

    return 0;
}