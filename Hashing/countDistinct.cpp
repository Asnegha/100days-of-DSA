#include<iostream>
#include<unordered_set>

using namespace std;

int countDistinct(int a[], int n){
    unordered_set <int> s(a, a+n);
    return s.size();
}

int main(){

    int n, res;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    res = countDistinct(a, n);
    cout << "Number of distinct elements are " << res;
}