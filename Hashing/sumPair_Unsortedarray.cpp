#include<iostream>
#include<unordered_set>

using namespace std;

int countDistinct(int a[], int m, int sum){
    unordered_set <int> s;
    
    for(int i = 0; i < m; i++){
        if(s.find(sum - a[i]) != s.end()){
            return 1;
        }
        s.insert(a[i]);
    }
    return -1;
}

int main(){

    int n, res, sum;
    cin >> n >> sum;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    res = countDistinct(a, n, sum);
    if(res == 1)
    cout << "True";
    else
    cout << "False";
}