#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int Sqaure_root(int n){
    int s=0, e=n;
    float ans;
    int mid = (s+e)/2;

    while(s<=e){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e = mid-1;
        }
        else{
            //stotre the ans and do the search
            ans = mid;
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main(){
    int key = 17;
    float ans = Sqaure_root(key);
    cout<<ans;
    return 0;
}
