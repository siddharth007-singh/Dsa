#include <iostream>
#include <string.h>

using  namespace std;

string removeAdjacentString(string s){
//    int n = s.length();
//    int i=0, j=0;
//    string newEle = "";
//
//    while(j<n){
//        if(s[i]==s[j]){
//            j++;
//        }
//
//        else if(s[j]!=s[i] || j==n-1){
//            newEle+=s[i];
//            i = j;
//            j++;
//        }
//    }
//
//    newEle += s[j - 1];
//    return newEle;

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

    return  ans;
}

int main(){
    string s = "abbaca";
    cout<<"Output: "<<removeAdjacentString(s)<<endl;
    return 0;
}

//Output must be : ca;