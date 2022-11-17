#include<iostream>

using namespace std;

void moveZerosEnd(int a[], int n){
    int f = 0, temp;

    for(int i = 0; i < n; i++){
        if(a[i] != 0){
           temp = a[i];
           a[i] = a[f];
           a[f] = temp;
           f++;

        }
    }

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

    moveZerosEnd(a, n);
}