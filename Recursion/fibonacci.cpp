#include<iostream>
using namespace std;

int fib(int n){

    if(n <= 1){
        return n;
    }
   
    return fib(n-1) + fib(n-2);
}

int main(){

    int a, res;
    cout << "Enter the number a";
    cin >> a;

    res = fib(a);
    cout << "nth Fibonacci number is: " << res;
}