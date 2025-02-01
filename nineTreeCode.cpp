//NINETREE © 2025 by Anshuman Singh is licensed under Creative Commons Attribution-ShareAlike 4.0 International
#include<iostream>
using namespace std;
int nineTree(long long N) {
    //this function takes a long long N as input and returns the integer value of its square root.

    long long temp = N;
    long long unitSize = 1;
    while(temp >= 9) {
        unitSize = unitSize * 3;
        temp = temp / 9;
    }
    long long doubleUnits,sum1,sum2;
    long long squareRoot = 0;
    
    if(temp >= 4) {
        doubleUnits = 2 * unitSize;
        sum2 = doubleUnits * doubleUnits;
        temp = N - sum2;
        squareRoot = doubleUnits;
    }
    else if(temp >= 1) {
        sum1 = unitSize * unitSize;
        temp = N - sum1;
        squareRoot = unitSize;
    }
    long long startTerm;
    startTerm = 2 * squareRoot + 1;
    unitSize = unitSize / 3;  
    while(unitSize > 0 && temp > 0) {
        doubleUnits = unitSize * 2;
        sum1 = unitSize * (startTerm + unitSize - 1);
        sum2 = doubleUnits * (startTerm + doubleUnits - 1);
        if(temp >= sum2) {
            squareRoot = squareRoot + doubleUnits;
            temp = temp - sum2; 
        }
        else if(temp >= sum1) {
            squareRoot = squareRoot + unitSize;
            temp = temp - sum1;
        }
        unitSize = unitSize / 3;
        startTerm = 1 + (squareRoot) * 2;
    }
    return squareRoot;
}
int main() {
}