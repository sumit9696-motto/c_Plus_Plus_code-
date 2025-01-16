//max row sum
#include <iostream>
using namespace std;
#include <climits>

int maxrowsum(int matrix[][3],int cols,int rows){
    int maxsum = INT_MIN;
    for(int i=0;i<rows;i++){
        int rowsumi=0;
        for(int j=0;j<cols;j++){
            rowsumi+=matrix[i][j];
        }
        maxsum=max(maxsum,rowsumi);
    }
return maxsum;
}


int main(){
int matrix[3][3]={{1,2,30},{4,5,6},{7,8,9}};

int col=3;
int row=3;
cout<<maxrowsum(matrix,col,row);
 return 0;
}