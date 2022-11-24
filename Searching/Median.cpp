#include<iostream>
#include<algorithm>

using namespace std;

int median(int a[], int b[], int n, int m){
    int low = 0, high = n, i1, i2, m1, m2, ma1, ma2;

    while(low <= high){
    i1 = (low + high)/2;
    i2 = (n+m+1)/2 - i1;
    m1 = (i1 == 0) ? -100000 : a[i1-1];
    m2 = b[i2 -1];
    ma1 = (i1 == n) ? 100000 : a[i1];
    ma2 = b[i2];
    

    if(m1 <= ma2 & m2 <= ma1){
        if((n + m) % 2 == 0)
        {cout << (max(m1, m2) + min(ma1, ma2))/2; return 0;}
        else
        {cout << max(m1, m2); return 0;}
    }else if(m2 > ma1){
        low = i1 + 1;
    }else{
        high = i1 - 1;
    }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    median(a, b, n, m);
}