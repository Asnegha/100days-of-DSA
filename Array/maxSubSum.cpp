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

int main(){
    int n, ans;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ans = maxSubSum(a, n);
    cout << "The maximum subarray sum " << ans;
}