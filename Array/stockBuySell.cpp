#include<iostream>

using namespace std;

int buysell(int a[], int n){

    int profit = 0;

    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1])
        profit += a[i] - a[i-1];
    }

    return profit;
}

int main(){

    int n, res;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    res = buysell(a, n);

    cout << "The maximum profit is " << res;
}