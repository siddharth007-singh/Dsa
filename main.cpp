#include <iostream>
using namespace std;

class Stack{
public:
    int top1;
    int top2;
    int size;
    int *arr;

    Stack(int s){
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    void push1(int ele){
        //Checking the stack space
        if(top2-top1>1){
            top1++;
            arr[top1] = ele;
        }
        else{
            cout<<"Stack is overflow"<<endl;
        }
    }
    void push2(int ele){
        //Checking the stack space
        if(top2-top1>1){
            top2--;
            arr[top2] = ele;
        }
        else{
            cout<<"Stack is overflow"<<endl;
        }
    }
    int pop1(){
        if(top1>=0){  //check latest 1 element is present;
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            cout<<"Stack is UnderFlow"<<endl;
            return -1;
        }
    }
    int pop2(){
       if(top2<size){
           int ans = arr[top2];
           top2++;
           return ans;
       }
       else{
           cout<<"Stack is UnderFlow"<<endl;
           return -1;
       }
    }

};

int main() {
    Stack s(5);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push2(40);
    s.push2(50);

    s.pop1();
    s.pop2();
    return 0;
}