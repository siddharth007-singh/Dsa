#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int findDuplicate(vector<int> &arr) 
{ 
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    
    for(int i=1; i<arr.size(); i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    vector<int>arr{4, 2, 1, 3, 1};

    cout<<findDuplicate(arr);
    return 0;
}

