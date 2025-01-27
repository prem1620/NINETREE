//NINETREE © 2025 by Anshuman Singh is licensed under Creative Commons Attribution-ShareAlike 4.0 International
#include<iostream>
using namespace std;
int nineTree(long long N) {
    //this function takes a long long N as input and returns the integer value of its square root.
    bool negative = false;
    if(N < 0) {
        negative = true;
        N *= -1;
    }
    long long temp = N;
    long long tripletSize = 1;
    while(temp != 0) {
        tripletSize = tripletSize * 3;
        temp = temp / 9;
    }
    long long unitSize = tripletSize / 3;
    long long doubleunits;
    long long squareRoot = 0;
    long long startTerm = 1;
    temp = N;
    while(unitSize != 0 && temp != 0) {
        doubleunits = unitSize * 2;
        long long sum1 = unitSize * (startTerm + unitSize - 1);
        long long sum2 = doubleunits * (startTerm + doubleunits - 1);
        if(temp >= sum2) {
            squareRoot += doubleunits;
            temp = temp - sum2; 
        }
        else if(temp >= sum1) {
            squareRoot += unitSize;
            temp = temp - sum1;
        }
        unitSize = unitSize / 3;
        startTerm = 1 +  (squareRoot) * 2;
    }
    if(negative) return -1 * squareRoot;
    return squareRoot;
}
int main() {

}