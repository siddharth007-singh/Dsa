#include<iostream>
#include<string.h>

using namespace std;

bool checkPanildrom(string s, int i, int j){
    while(i<=j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }

    return true;
}

bool panildrom(char arr[]){
    int n = arr.length();
    int i=0, j=n-1;

    while(i<=j){
        if(arr[i]!=arr[j]){
            //Do remove i or j  Something
            return checkPanildrom(arr, i+1, j) || checkPanildrom(arr, i, j-1);
        }
        else{
            i++;
            j--;
        }
    }
}

int main(){
    char arr[100] = "abcc";
    cin>>arr;
    if(panildrom(arr)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}