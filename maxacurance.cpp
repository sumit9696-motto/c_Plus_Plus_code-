//  max acurance elements array

#include <iostream>
using namespace std;

int main()
{ int mm;
    int maxcount=0;
    int arr[]={2,-4,2,6,6,2,2};
    int size=sizeof(arr)/sizeof(int);
    // int size=6;
    // int max=0;
    //int min=arr[0];
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
               
            }
            if(count>maxcount){
                maxcount=count;
                mm=arr[i];
            }
                
        }
       
    
        
    }
     cout<<"Maximum acurance element is "<<mm<<endl;
   
    return 0;
}