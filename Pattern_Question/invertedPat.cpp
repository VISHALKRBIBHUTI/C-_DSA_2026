
* * * * 
* * * 
* * 
* 

#include<iostream>
using namespace  std;

int main(){

    int Intri = 4;

    for(int i = 1 ; i<=Intri ; i++){

        for(int j = 1 ; j<=(Intri + 1 - i); j++){

            cout<<"*"<<" ";
        }

        cout<<'\n';
    }

    return 0;
}
