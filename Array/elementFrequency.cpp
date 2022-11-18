#include<iostream>

using namespace std;

void eleFreq(int a[],int n){
    int count = 1;

    for(int i = 0; i < n-1; i++){
       if(a[i] == a[i+1]){
        count++;
       }else{
        cout << a[i] << " count is " << count << endl;
        count = 1;
       }
    }
    cout << a[n - 1] << " count is " << count << endl;
}

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    eleFreq(a, n);
}