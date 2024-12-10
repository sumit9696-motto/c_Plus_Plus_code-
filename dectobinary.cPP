#include<iostream>
using namespace std;

int Decmltob(int decm){
    int ans=0,pow=1;
    while (decm>0)
    {
        int rem=decm%2;
         decm=decm/2;
        ans +=(rem*pow);
        pow=pow*10;

    }
    return ans;
    
}
int main()
{
    int decm  = 42;
   cout << Decmltob(decm);
    return 0;
}