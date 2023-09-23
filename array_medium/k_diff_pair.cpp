#include<iostream>
#include<vector>
#include<algorithm>
#include<set>


using namespace std;

int KDiffPair(vector<int> &arr, int k){
    sort(arr.begin(), arr.end());
    set<pair<int,int>> ans;
    int s=0, e=1;

    while(e<arr.size()){
        int diff = arr[e]-arr[s];
        if(diff==k){
            ans.insert({arr[s], arr[e]});
            s++;
            e++; 
        }
        else if(diff>k){
            s++;    
        }
        else{
            e--;
        }
        if(s==e) e++;
    }
    return ans.size();
}

int main(){
    vector<int> arr{3,1,4,1,5};
    int k = 2;
    // output = 2
    int ans = KDiffPair(arr, k);
    cout<<ans;
    return 0;
}