#include<iostream>

using namespace std;

int sumofnat(int n){

    if(n == 0)
    return 0;

    return n + sumofnat(n-1);
}

int main(){

    int a, res;

    cout << "Enter the number a";
    cin >> a;

    res = sumofnat(a);
    cout << "Sum of the a natural number: " << res;

}