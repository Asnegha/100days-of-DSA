#include<iostream>

using namespace std;

int peakEle(int a[], int n){

    int low = 0, high = n-1, mid;

    while(low <= high){
        mid = (low + high)/2;

        if((mid == 0 || a[mid-1] <= a[mid]) & (mid == n-1 || a[mid+1] <= a[mid])){
            return a[mid];
        }else if(mid > 0 & a[mid+1] >= a[mid]){
            low = mid + 1;
        }else{
           high = mid -1;
        }
    }

    return -1;
}

int main(){
    int n, res;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    res = peakEle(a, n);
    cout << "The peak element is " << res;
}