#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

bool cond(pair<char, int> &a, pair<char, int> &b){
    return a.second>b.second;
}

string SortFrequecy(string s){
    string ans;
    unordered_map<char, int> hash;
    for(int i=0; i<s.length(); i++){
        hash[s[i]]++;
    }

    vector<pair<char, int>>v;
    for(auto x:hash){
        v.push_back({x.first, x.second});
    }

    sort(v.begin(), v.end(), cond);

    //now after sorting push all the elements in the string ans;
    for(auto x:v){
        for(int i=0; i<x.second; i++){
            ans+=x.first;
        }
    }

    return ans;
}

int main(){
    string s = "tree";
    cout<<SortFrequecy(s);
    return 0;
}