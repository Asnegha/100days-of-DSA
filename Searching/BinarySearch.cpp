// Time complexity is O(logn)

#include<iostream>

using namespace std;

int binarySearch(int a[], int n, int k){

    int low = 0, high = n -1,mid;

    while(low <= high){
        mid = (low + high)/2;

        if(k == a[mid]){
            return mid;
        }else if(k < a[mid]){
            high = mid -1;
        }else{
            low = mid+1;
        }
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

    res = binarySearch(a, n ,k);
    cout << "The element position is " << res;
}