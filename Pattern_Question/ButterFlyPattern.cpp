

/*



*                  *
**                **
***              ***
****            ****
*****          *****
******        ******
*******      *******
********    ********
*********  *********
********************    ButterFly Pattern
********************
*********  *********
********    ********
*******      *******
******        ******
*****          *****
****            ****
***              ***
**                **
*                  *



*/ 

#include<iostream>
using namespace std;



int main(){

    int row = 10;


    // ---Upper Part
    for(int i = 1 ; i<=row ; i++){

        // Left Side
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }

        // Middle space
        for(int k = 1 ; k<=row ; k++){

            if(k <= row-i){
                cout<<" ";
            }
        }

       
        // Right Side
        for(int l = 1 ; l<=row ; l++){

            if(l <= row - i){

                cout<<" ";
            }
            else{

                cout<<"*";
            }
        }

        cout<<'\n';
    }




     // ---Lower Part
    for(int i = 1 ; i<=row ; i++){

        // Left Side
        for(int j = i; j<=row; j++){
            cout<<"*";
        }

        // Middle for space
        for(int k = 1 ; k<=row ; k++){

            if(k <= i-1){
                cout<<" ";
            }
        }

       
        // Right Side
        for(int l = 1 ; l<=row ; l++){

            if(l <= i-1){

                cout<<" ";
            }
            else{

                cout<<"*";
            }
        }

        cout<<'\n';
    }

    return 0;
}