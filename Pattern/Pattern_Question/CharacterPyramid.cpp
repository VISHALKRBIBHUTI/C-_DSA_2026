#include<iostream>
using namespace std;

int main(){


    // int ch = (int) 'A';
    // cout<<ch<<'\n';

    // char ch = 'A'+1;
    // cout<<ch;

    // char ch = (int) 65;
    // cout<<ch;

    char ch = 'A';
    int n = 4;


    /*
    
    A 
    B C 
    D E F 
    G H I J 
    
    
    */ 

    for(int i = 1 ; i<=n ; i++){

        for(int j  = 1 ; j<=i; j++){

            cout<<ch<<" ";
            ch++;
        }


        cout<<'\n';
    }

    return 0;
}