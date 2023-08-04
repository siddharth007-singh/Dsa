// to finding the row_index = mid/col and for finding column_index = mid%col

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool BinarySEarch(int arr[][4], int row, int col, int k){
    int s=0;
    int e = row*col-1;
    int mid = (s+e)/2;

    while(s<=e){
        int rowIndex = mid/col;
        int colIndex = mid%col;

        if(arr[rowIndex][colIndex]==k){
            return true;
        }
        else if(arr[rowIndex][colIndex]<k){
            s= mid+1;
        }
        else{
            e=mid-1;
        }

        mid = (s+e)/2;
    }

    return false;
}

int main(){
    int arr[5][4]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}, {17,18,19,20}};
    int rows = 5, col = 4;

    int key = 21;
    bool ans = BinarySEarch(arr, rows, col, key);
    if(ans){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }

    return 0;
}
