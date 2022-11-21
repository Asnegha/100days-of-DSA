#include<iostream>
#include<algorithm>

using namespace std;

int maxSubSum(int a[],int n){
    int sum = a[0],res = a[0];

    for(int i = 1; i < n; i++){
        sum = max(sum + a[i], a[i]);
        res = max(sum, res);
    }
    return res;
}

int ciruclarSubsum(int a[], int n){
    int normalSum = maxSubSum(a, n);

    int csum = 0;
    if(normalSum < 0){
        return normalSum;
    }
    for(int i = 0; i < n; i++){
        csum += a[i];
        a[i] = -a[i];
    }

    int circularSum = csum + maxSubSum(a, n);

    return max(normalSum, circularSum);
}

int main(){
    int n, ans;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ans = ciruclarSubsum(a, n);
    cout << "The maximum circular subarray sum " << ans;
}