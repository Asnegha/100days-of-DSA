#include<iostream>
#include<algorithm>

using namespace std;

int majele(int a[],int n){

    int count = 1,res = 0;

    for(int i = 1; i < n; i++){
        if(a[res] == a[i]){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            count = 1;
            res = i;
        }
       
    }
    
    count = 0;
    for(int i = 0;i < n; i++){
        if(a[res] == a[i]){
            count++;
        }
    }
    if(count <= n/2)
    return -1;
    return res;
}

int main(){
    int n, ans;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ans = majele(a, n);
    cout << "The maximum subarray sum " << ans;
}