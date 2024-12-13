//calculate sum of digits of a number.
#include <iostream>
using namespace std;

int sumofdigit(int n){
    int sum = 0;
    while(n>0){
        sum = sum + n%10;
        n = n/10;
    }
return sum;
}
 
int main()
{ int x;
    cin>>x;
   int a= sumofdigit(x);

    cout << "sum of digite : " <<a;
    return 0;
}