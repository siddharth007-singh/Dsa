// convert the char into upperCase to Lowercase

#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

void convertToUppercase(char arr[]){
    int n = strlen(arr);

    for(int i=0; i<n; i++){
        arr[i] = arr[i]-'a'+'A';
    }
}

void convertToLowercase(char arr[]){
    int n = strlen(arr);

    for(int i=0; i<n; i++){
        arr[i] = arr[i]-'A'+'a';
    }
}

int main(){
    // char arr[100] = "testing";
    // convertToUppercase(arr);

    char arr[100] = "TESTING";
    convertToLowercase(arr);
    cout<<arr<<endl;
    return 0;
}