/*
Author: Kartik Vanjani
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5A
Description: This program is a function that takes 2 ints and sees
if the 2 ints are divisible or not.
*/

#include <iostream>
using namespace std;
bool isDivisibleBy(int n, int d){
    if(d==0){
        return false;
    }
    else if(n%d==0){
        return true;
    }
    else{
        return false;
    }
    return 0;
}
bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i =2; i<n; i++){
        if(isDivisibleBy(n,i)){
            return false;
        }
    
    }
    return true;
}
int nextPrime(int n){
    int i = n+1;
    while(not isPrime(i)){
        i++;
    }
    return i;
}
int countPrimes(int a, int b){
    int count = 0;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            count++;
        }

    }
    return count;
}
bool isTwinPrime(int n){
    int i = n-2;
    int z = n+2;
    if(not isPrime(n)){
        return false;
    }
    
    if(isPrime(i)||isPrime(z)){
        return true;

    }
    else{
        return false;
    }
}
int nextTwinPrime(int n){
    int i = n+1;
    while(not isTwinPrime(i)){
        i++;
    }
    return i;
}
int largestTwinPrime(int a, int b){
    for(int z=b; z>=a; z--){
        if(isTwinPrime(z)){
            return z;
        }
    }
    return -1;
}

int main(){
    int n, d;
    cout << "Enter a number: ";
    cin>> n >> d;
    if(isDivisibleBy(n,d)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
    
}