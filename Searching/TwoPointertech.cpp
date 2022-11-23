#include<iostream>

using namespace std;

int twopointer(int a[], int n,int k){

    int low = 0, high = n-1;

    while(low < high){
        if(a[low] + a[high] == k)
        return 1;
        else if(a[low] + a[high] > k)
        high--;
        else
        low++;
    }
    return -1;
}

int main(){
    int n, res, k;
    cin >> n >> k;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    res = twopointer(a, n, k);
    if(res == 1)
    cout << "True";
    else 
    cout << "False";
}