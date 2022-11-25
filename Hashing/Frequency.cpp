#include<iostream>
#include<unordered_map>

using namespace std;

void frequency(int a[], int n){
    unordered_map <int , int> s;
    for(int i = 0; i < n; i++){
        s[a[i]]++;
    }

    for(auto i : s){
        cout << i.first << " : " << i.second;
    }
}

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    frequency(a, n);
}