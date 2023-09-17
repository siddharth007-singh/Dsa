//Coding NInja Question
#include<iostream>
#include<vector>

using namespace std;

int harvest(int n, int m, int x){
    int ans;
    for(int i=0; i<n; i++){
        int sub = n-m;
        ans = x*sub;
    }
    return ans;
}

int main(){
    int N = 7;
    int M = 6;
    int X = 4;

    int ans = harvest(N, M, X);
    cout<<ans;
    return 0;
}