#include <iostream>
#include <string.h>

using  namespace std;

string removeSubString(string s, string part){
    int pos=  s.find(part);
    while(pos!=string::npos){
        s.erase(pos, part.length());
        pos = s.find(part);
    }

    return s;
}

int main(){
    string s = "daabcbaabcbc";
    string part ="abc";
    cout<<"Output: "<<removeSubString(s, part)<<endl;
    return 0;
}

//Output must be : ca;