//linear search

#include <iostream>
using namespace std;


int factorial(int arr[],int target,int size){
    
    for(int i=1;i<=size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}


int main()
{ 
   int targets=8;
   int sizes=7;
   int arr[]={1,3,5,7,5,3,8};


    cout<< "target : " <<factorial(arr,targets,sizes);
    return 0;
}