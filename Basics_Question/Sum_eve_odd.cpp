#include<iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n != 0) {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    return rev;
}

void EvenSum(int n){
    n = reverse(n);
    int sumOdd = 0, sumEven = 0, c = 1;
 
    while (n != 0) {
        if (c % 2 == 0)
            sumEven += n % 10;
        else
            sumOdd += n % 10;
        n /= 10;
        c++;
    }
 
    cout<<sumEven<<" "<<sumOdd;
}

int main() {
	// Write your code here
	int n = 132456;
	EvenSum(n);
	return 0;
}