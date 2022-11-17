#include<iostream>

using namespace std;

void leftRotate(int a[], int n){
    int first = a[0];

    for(int i = 0; i < n-1; i++){
        a[i] = a[i+1];
    }

    a[n -1] = first;

    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
}

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    leftRotate(a, n);
}