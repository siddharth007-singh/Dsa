#include<iostream>
#include<vector>
#include<climits>

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

int maxMin(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>maxi){
                maxi = arr[i][j];
            }
            else{
                mini = arr[i][j];
            }
        }
    }

    return maxi, mini;
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

    cout<<maxMin(arr, 3,3);

    

    return 0;
}