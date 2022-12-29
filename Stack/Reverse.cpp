#include <iostream>
#include<stack>
using namespace std;

int main() {
    string str = "Siditi";

    stack<char>s;

    //Filling the data in stack
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }

    //Store the answer after pop
    string ans = "";

    while(!s.empty()){
        char ch = s.top(); //Picking the char which is place on the top
        ans.push_back(ch); //puting the ch in empty ans stack
        s.pop();
    }

    cout<<"The Reverse of String is : "<<ans<<endl;


    return 0;
}
