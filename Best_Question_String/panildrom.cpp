#include<iostream>
#include<string.h>

using namespace std;

bool panildrom(char arr[]){
    int i=0;
    int n = strlen(arr);
    int j = n-1;

    while(i>j){
        if(arr[i]!=arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    char arr[100] = "BabbaB";
    cin>>arr;
    if(panildrom(arr)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}