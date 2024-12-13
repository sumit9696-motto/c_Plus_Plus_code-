//calculate nCr binominal coefficent for n&r

#include <iostream>
using namespace std;


int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}

int ncr(int n,int r){
    int fact_of_n=factorial(n);
int fact_of_r=factorial(r);
 int fact_of_nmr=factorial(n-r);
 return (fact_of_n)/(fact_of_r*fact_of_nmr);
}
int main()
{ 
   int n=8, r=2;


    cout << "binominal of coffecent nCr : " <<ncr(n,r);
    return 0;
}