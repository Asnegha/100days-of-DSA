#include<iostream>
#include<algorithm>

using namespace std;

int slidingWindow(int a[], int n, int k){
    int sum = 0;

    for(int i = 0; i < k; i++){
        sum += a[i];
    }

    int curr_max = sum;

    for(int i = 1; i+k-1 < n-1; i++){
        sum += a[i+1] - a[i-1];
        curr_max = max(curr_max, sum);
    }

    return curr_max;
}

int main(){

    int n, res, k;
    cin >> n >> k;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    res = slidingWindow(a, n, k);

    cout << "The max sum with window size k is " << res;
}