// Time complexity is O(logn)

#include<iostream>

using namespace std;

int index1Occur(int a[], int n,int k){
    int low = 0, high = n-1, mid;

    while(low <= high){
        mid = (low+high)/2;

        if(k > a[mid])
        low = mid + 1;
        else if(k < a[mid])
        high = mid -1;
        else if(mid == n-1 || a[mid] != a[mid+1])
        return mid;
        else
        low = mid + 1;
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

    res = index1Occur(a, n, k);
    cout << "Answer: " << res;
}