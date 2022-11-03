#include<iostream>
using namespace std;

int fib(int n){

    if(n == 1)
    return n;
    return n * fib(n-1);
}

int main(){

    int a, res;
    cout << "Enter the number a";
    cin >> a;

    res = fib(a);
    cout << "Result: " << res;
}