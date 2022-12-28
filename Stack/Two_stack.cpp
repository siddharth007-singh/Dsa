#include <iostream>
using namespace std;

class Two_stack{
    int top1;
    int top2;
    int size;
    int *arr;


    //Constructor
    Two_stack(int s){
        this->size = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
    }

    void push1(int ele){
        if(top2-top1>1){
            top1++;
            arr[top1] = ele;
        }
        else{
            cout<<"Stack Is Overflow"<<endl;
        }
    }
    void push2(int ele){
        if(top2-top1>1){
            top2--;
            arr[top2] = ele;
        }
        else{
            cout<<"Stack Is Overflow"<<endl;
        }
    }
    int pop1(){
        if(top1=>0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
           cout<<"Stack Is UnderFlow"<<endl;
           return -1; 
        }
    }
    int pop2(){
         if(top2=>0){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
           cout<<"Stack Is UnderFlow"<<endl;
           return -1; 
        }
    }
}


int main() {
    Two_stack ses(5);
    ses.push1(20);
    ses.push1(22);
    ses.push1(23);
    ses.push1(24);

    ses.pop1();
    ses.pop2();
    
    return 0;
}
