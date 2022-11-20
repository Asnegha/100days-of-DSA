#include<iostream>
#include<algorithm>

using namespace std;

int maxcon(int a[],int n){
    int count = 0,res = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            count++;
        }else{
            res = max(res, count);
            count = 0;
        }
    }
    res = max(res, count);
    return res;
}

int main(){
    int n, ans;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ans = maxcon(a, n);
    cout << "The maximum consecutive 1s " << ans;
}