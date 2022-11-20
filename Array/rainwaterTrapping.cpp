#include<iostream>
#include<algorithm>

using namespace std;

int rainwaterTrapping(int a[], int n){

    int lmax[n], rmax[n], sum = 0;

    lmax[0] = a[0];
    for(int i = 1; i < n; i++){
       lmax[i] = max(a[i], lmax[i - 1]);
    }

    rmax[n-1] = a[n-1];
    for(int i = n-2; i >=0 ; i--){
        rmax[i] = max(a[i], rmax[i + 1]);
    }

    for(int j = 0; j < n; j++){
        sum += min(lmax[j], rmax[j]) - a[j];
    }

    return sum;
}

int main(){
    int n, res;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    res = rainwaterTrapping(a, n);
    cout << "The maximum water which can be stored is " << res;
}