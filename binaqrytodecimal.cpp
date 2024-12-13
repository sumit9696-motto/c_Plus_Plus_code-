#include<iostream>
using namespace std;

int binarytodec(int binarys){
    int ans=0,pow=1;
    while (binarys>0)

    {
       int rem=binarys%10;
        ans+=(rem*pow);
        binarys =binarys/10;
        pow=pow*2;
        

    }
    return ans;
    
}
int main()
{
    int binarys  = 101110;
   cout << binarytodec(binarys);
    return 0;
}