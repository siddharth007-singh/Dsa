#include<iostream>
#include<vector>

using namespace std;

bool Linear(int arr[][3], int rows, int col, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==key){
                return true;
            }
            else{
                return false;
            }
        }
    }  

    return false; 
}


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

    int key = 8;

    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    printRowWise(arr, rows, col);
    cout<<Linear(arr, rows, col, key);

    return 0;
}