#include<iostream>

using namespace std;

void find_the_duplicate(int a[], int n){
    int f = 1;
    for(int i = 1; i < n; i++){
        if(a[i- 1] != a[i]){
             a[f] = a[i];
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

    find_the_duplicate(a, n);
}