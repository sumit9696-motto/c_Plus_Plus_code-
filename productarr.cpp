//producation of max array

#include <iostream>
using namespace std;

int main()
{ 
    int arr[6]={2,-4,-5,6,-3,-2};
    // int size=sizeof(arr)/sizeof(int);
    int size=6;
    int max=0;
    //int min=arr[0];
    for(int i=0;i<size;i++){
        // for(int j=i+1;j<size;j++){
            int b= arr[i]*arr[i+1];
             if(b>max){
                max=b;

            }
           
        // }
        
       
        // if(arr[i]<min){
        //     min=arr[i];
        // }
        
       
        // cout<<"Minimum element is "<<min<<endl;
        
    }
     cout<<"Maximum  * element is "<<max<<endl;
   
    return 0;
}