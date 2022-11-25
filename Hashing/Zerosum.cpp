#include<iostream>
#include<unordered_set>

using namespace std;

int countDistinct(int a[], int m){
    unordered_set <int> s;
    int sum = 0;
    
    for(int i = 0; i < m; i++){
        sum += a[i];
        if(s.find(sum) != s.end()){
            return 1;
        }
        if(sum == 0)
        return 1;
        s.insert(sum);
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

    res = countDistinct(a, n);
    if(res == 1)
    cout << "True";
    else
    cout << "False";
}