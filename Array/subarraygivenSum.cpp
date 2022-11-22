#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

string subArrayGivenSum(int a[], int n, int sum){
    int total = 0, s = 0;

    for(int i = 0; i < n; i++){
        total += a[i];

        while(total > sum){
           total = total - a[s];
           s++;
        }

        if(total == sum)
        return "Yes";
    }

    return "No";

}

int main(){

    int n, sum;
    string res;
    cin >> n >> sum;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    res = subArrayGivenSum(a, n, sum);

    cout << res;
}