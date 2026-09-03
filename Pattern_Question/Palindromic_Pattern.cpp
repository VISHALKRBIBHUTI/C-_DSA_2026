

/*

    1
   212
  32123  Palindromic Pattern
 4321234
543212345



*/ 





#include<iostream>
using namespace std;


int main(){

    int row = 5;

    for(int i = 1 ; i<= row ; i++){

        int original_i = i;

        // Space Printing
        for(int j = i ; j<row; j++){
            cout<<" ";
        }

        // Half-Right Side Pyramid
        for(int k = i; k>0 ; k--){
            cout<<k;
        }


        // Half-Left Side Pyramid
        for(int l = 2 ; l<=i ; l++){
            cout<<l;
        }



        cout<<'\n';


    }

    return 0;
}