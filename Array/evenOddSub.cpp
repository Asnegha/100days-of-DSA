#include<iostream>
#include<algorithm>

using namespace std;

int evenOddSub(int a[],int n){
    int count = 1,res = 1, flag;
    
    if(a[0] % 2 == 0)
    flag = 1;
    else
    flag = 0;

    for(int i = 1; i < n; i++){
        if(a[i] % 2 == 0 & flag == 0){
            count++;
            res = max(count, res);
            flag = 1;
        }else if(a[i] % 2 != 0 & flag == 1){
            count++;
            res = max(count, res);
            flag = 0;
        }else{
            count = 1;
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

    ans = evenOddSub(a, n);
    cout << "The maximum length of even odd subarray " << ans;
}