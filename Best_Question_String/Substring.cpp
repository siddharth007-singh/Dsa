#include<iostream>
#include <string>

using namespace std;


int main(){
    string str = "noon";
    int n=str.length();
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<str.substr(i, j - i + 1)<<endl;
        }
    }
    return 0;
}