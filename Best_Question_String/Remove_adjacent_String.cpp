#include<iostream>
#include<string.h>
#include<stack>

using namespace std;

string removeAdjacentString(string s){
    string ans = "";
    int n = s.length();

    for(int i=0; i<n; i++){
        if(ans.length()>=0){
            if(ans[ans.length()-1]==s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        else{
            ans.push_back(s[i]);
        }

    }

    return ans;
}



string remove_duplicate(string s){
    int n = s.length();
    string ans = "";
    
    for(int i=0; i<n; i++){
        if(ans.length()>=0){
            if(ans[ans.length()-1]==s[i]){
                ans.pop_back();
            } 
            else{
                ans.push_back(s[i]);
            }
        }
        else{
            ans.push_back(s[i]);
        }
    }

    return ans;

}

int main(){
    string s = "abbaca";
    cout<<"Output: "<<removeAdjacentString(s)<<endl;
    return 0;
}