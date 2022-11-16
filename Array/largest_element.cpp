#include<iostream>

using namespace std;

int findlargest(int a[], int n){

    int max = 0;

    for(int i = 1; i < n; i++){
        if(a[i] > a[max]){
            max = i;
        }
    }
    return max;
}

int main(){

    int n, res;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    res = findlargest(a, n);

    cout << "The largest element is " << res;
}