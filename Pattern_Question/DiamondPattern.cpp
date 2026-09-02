/*



   *
  ***
 *****
*******
*******
 *****
  ***
   *


*/ 



#include<iostream>
using namespace std;


int main(){

    // --- Upper Part
    int row = 4;
    for(int i = 1 ; i<= row ; i++){

        // left side
        for(int j = 1 ; j<= row ; j++){

            if(j<= row-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }

        // Right Side
        for(int k = 1 ; k<=i-1 ; k++){
            cout<<"*"; 
        }

        cout<<'\n';
    }




    // --- Lower Part
    for(int i = 1 ; i<= row ; i++){

        // Left Side
        for(int j = 1 ; j<= row ; j++){

            if(j<= i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }

        // Right Side
        for(int k = 1 ; k<=row-i ; k++){
            cout<<"*"; 
        }

        cout<<'\n';
    }

    return 0;
}