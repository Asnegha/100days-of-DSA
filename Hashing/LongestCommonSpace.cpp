#include<iostream>
#include<unordered_map>

using namespace std;

int countDistinct(int a[], int b[], int m, int k){
    unordered_map <int, int> s;
    int sum = 0, res = -1, temp[m];
    
    for(int i = 0; i < m; i++){
        temp[i] = a[i] - b[i];
    }
    
    for(int i = 0; i < m; i++){
        sum += temp[i];

        if(sum == k){
             res = i + 1;
        }        
        if(s.find(sum) == s.end()){
            s.insert({ sum , i});
        }
        if(s.find(sum - k) != s.end()){
            res = max(res, i - s[sum - k]);
        }

    }
    return res;
}

int main(){

    int n, res, sum;
    cin >> n >> sum;

    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    res = countDistinct(a, b, n, sum);
    cout << res;
}