#include<iostream>
#include<algorithm>

using namespace std;

int maxDiff(int a[], int n){
    int minVal = a[0];
    int res = a[1] - a[0];

    for(int i = 1; i < n-1; i++){
        res = max(res, a[i] - minVal);
        minVal = min(a[i], minVal);

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

    ans = maxDiff(a, n);
    cout << "The maximum difference is " << ans;
}