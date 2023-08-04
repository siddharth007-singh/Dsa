// In thiis question divident and divisor are already given and we have to find the quotient 

// Formula : quotient*divisor+reminder = Divident
//         so,
//             quotient*divisor <= Divident

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int DivideTwoNUm(int divident, int divisor){
    int s=0, e = abs(divident)  ;
    int ans= 1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(abs(mid*divisor)==abs(divident)){
            return mid;
        }
        else if(abs(mid*divisor)>abs(divident)){
            e=mid-1;
        }
        else{
            //store the ans 
            //do right search
            ans= mid;
            s = mid+1;
        }
    }

    if((divident<0 && divisor<0)||(divident>0 && divisor>0)){
        return ans;
    }
    else{
        return -ans;
    }
}

int main(){
    int divident = 22;
    int divisor = -7;

    int ans = DivideTwoNUm(divident, divisor);
    cout<<ans;
    return 0;
}