#include<iostream>

using namespace std;

int Palcheck(char a[], int start, int end){

    if(start >= end){
        return 1;
    }

    return (a[start] == a[end]) && Palcheck(a, start+1, end-1);
}

int main(){

    int res,n;
    cout << "Enter the array a";
    cin >> n;
    char a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    

    res = Palcheck(a, 0, n-1);
    if (res == 1){
    cout << "Palindrome"; }
    else {
        cout << "No Palindrome";
    }

}