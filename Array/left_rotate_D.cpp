#include<iostream>

using namespace std;

void reverseArray(int a[], int f, int l){
    int temp, low = f, high = l;

    while(low < high){
          temp = a[low];
          a[low] = a[high];
          a[high] = temp;
          low++;
          high--;
    }

    
}

void leftrotateD(int a[], int n,int d){

    reverseArray(a, 0, d-1);
    reverseArray(a, d, n-1);
    reverseArray(a, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
}

int main(){
    int n, d;
    cin >> n >> d;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    leftrotateD(a, n, d);
}