
/*

1 1 1 1 
2 2 2 2 
3 3 3 3 
4 4 4 4 

*/




#include<iostream>
using namespace std;

int main(){

    int row = 4;
    int column = 4;

    for(int i = 1 ; i<=row ; i++){

        for(int j = 1 ; j<=column ; j++){

            cout<<i<<" ";
        }

        cout<<'\n';
    }

    return 0;
}
