
/*

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1




*/ 




#include<iostream>
using namespace std;

int main(){

    int row = 5;
    int lastval = 1;

    for(int i = 1 ; i<=row ; i++){

        for(int j = 1 ; j<=i ; j++){

            cout<<lastval<<" ";

            if(lastval == 1){
                lastval = 0;
            }
            else{
                lastval = 1;
            }
        }

        if(i%2==0){
            lastval = 1;
        }
        else{
            lastval = 0;
        }

        cout<<'\n';

    }

    return 0;
}