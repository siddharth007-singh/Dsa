#include <iostream>
#include<stack>
using namespace std;

int main() {
  string str = "[{()}]";
  stack<char>s; //Empty Stack

  for(int i=0; i<str.length(); i++){
    char ch = str[i];
    // if opening barcket stack push
    // if closing bracket then check top and pop
    if(ch=='['|| ch=='{' || ch =='('){
      s.push(ch);
    }
    else{
      //then closing bracket
      //Checking that whether stack is empty in previous or not 
      if(!s.empty()){
        char top = s.top();
        if(ch==')'&& top=='(' || ch=='}'&&top=='{'|| ch==']'&&top=='['){
          s.pop();
        }
        else{
          cout<<"Not a Valid Parenthesis"<<endl;
        }
      }
      else{
         cout<<"Not a Valid Parenthesis"<<endl;
      }
    } 
  }

   if(s.empty()){
        cout<<"Valid Parenthesis Found"<<endl;
    }
    else{
      cout<<"Not a Valid Parenthesis"<<endl;
    }
}