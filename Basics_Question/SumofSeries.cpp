#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

//Through Recursion Method

// int SumofSeries(int n){
//     if(n==1)
//         return 1;

//     int sum = n+SumofSeries(n-1);
//     return sum;
// }


//Throught Mathematics Induction formula
int SumofSeries(int n){
    int sum;
    sum = n*(n+1)/2;
    return sum;
}

int main(){
    int no = 5;
    int ans= SumofSeries(no);
    cout<<ans;
    return 0;
}