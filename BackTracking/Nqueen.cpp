// 0 = empty cell
// 1 = queen is placed 

#include<iostream>
#include<vector>

using namespace std;

void printSolve(vector<vector<int>> &board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n){
    //checking wheater we put queen in curr cell or not

    //Checking row
    int i=row;
    int j=col;

    while(j>=0){
        if(board[i][j]==1){
            return false;
        }
        j--;
    }

    //check upper left and bottom left (Diagonal area)

    //Upper Left
    i=row, j=col;
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }

    //bottom left
    i=row, j=col;
    while(i<n && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i++;
        j--;
    }


    //queen not found Hence position is safe
    return true;
}


void solve(vector<vector<int>> &board, int col, int n){
    //base case
    if(col>=n){
        printSolve(board, n);
        return;
    }

    for(int row = 0; row<n; row++){
        if(isSafe(row, col, board, n)){
            //put the queen
            board[row][col] = 1;

            //recursive call
            solve(board, col+1, n);

            //backtracking
            board[row][col] = 0;
        }
    }

}

int main(){
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n ,0));
    int col = 0;
    solve(board, col, n);
    return 0;
}