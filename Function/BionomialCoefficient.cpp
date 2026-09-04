#include<iostream>
using namespace std;

int binomialCoefficent( int n , int r){


    // (n)!-Factorial
    int n_fact = 1;
    for(int i = 1; i<=n ; i++){
        n_fact = n_fact *i;
    }

    // (r)!-Factorial
    int r_fact = 1;
    for(int j = 1; j<=r ; j++){
        r_fact = r_fact *j;
    }


    // (n - r )!-Factorial
    int nMrfact = 1;
    for(int k = 1 ; k<=(n-r); k++){
        nMrfact = nMrfact * k;
    }

    int nCr = (n_fact)/(r_fact*(nMrfact));

    return nCr;
}

int main(){

    int n = 5;
    int r = 2;

    cout<<binomialCoefficent(n , r);

    return 0;


}