#include<iostream>
#include<unordered_set>
#include<algorithm>

using namespace std;

int subsequence(int a[], int n){
    unordered_set <int> temp;
    int curr = 0, res = 0;

    for(int i = 0; i < n; i++){
        temp.insert(a[i]);
    }

    for(auto i : temp){
        if(temp.find(i - 1) == temp.end()){
            curr = 1;
            while(temp.find(i + curr) != temp.end()){
                curr++;
            }
            res = max(res, curr);
        }
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

    ans = subsequence(a, n);
    cout << "Length is " << ans;
}