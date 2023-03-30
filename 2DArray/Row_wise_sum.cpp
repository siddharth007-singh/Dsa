#include<iostream>
#include<vector>

using namespace std;

void printRowWise(int arr[][3], int rows, int col){
    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum = sum+arr[i][j];
        }
        cout<<sum;
    }
}


int main(){
    
    int arr[3][3];
    int rows = 3;
    int col = 3;

    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    printRowWise(arr, rows, col);

    return 0;
}