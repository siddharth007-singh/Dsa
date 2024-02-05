#include<iostream>
#include<string.h>

using namespace std;

//this function tell's us that "ExpandAround" function called when both Odd and Even Cases Satisfy;
int ExpandAround(char arr[], int i, int j){
    int count=0;

    while(i>=0 && j<=arr.length() && arr[i]==arr[j]){
        count++;
        i--;
        j++;
    }
    return count;
}

int panildrom(char arr[]){
    int n =  arr.length();
    int cnt = 0;

    for(int i=0; i<n; i++){
        //odd case
        int oddcase = ExpandAround(arr, i, i);
        cnt = cnt+oddcase;

        //even case
        int evencase = ExpandAround(arr, i, i+1);
        cnt = cnt+evencase;
    }

    return cnt;
}

int main(){
    char arr[100] = "abc";
    
    return 0;
}


// Panilromic substring problem are having different varitraions like (longest panildrom substing). So, for solving this question 
// We have to follow several steps are as follows:-
// 1. find the panildrom in two subset (Odd) and (even);
// 2. Store them in cnt 