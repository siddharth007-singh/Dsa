#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int SumofSeries(int n){
    if(n==1)
        return 1;

    int sum = n+SumofSeries(n-1);
    return sum;
}

int main(){
    int no = 1;
    int ans= SumofSeries(no);
    cout<<ans;
    return 0;
}