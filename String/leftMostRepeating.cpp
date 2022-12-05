#include<iostream>
#include<string>

using namespace std;

int leftmostrepeating(string s1){

    int a[256] = {0}, res;

    for(int i =s1.length() - 1; i >= 0; i--){
        if(a[s1[i]] == 0)
        a[s1[i]] = 1;
        else
        res = i;     
    }

    return res;
}

int main(){
    string s1;
    int ans;

    cin >> s1;

    ans = leftmostrepeating(s1);
    cout << ans;
}