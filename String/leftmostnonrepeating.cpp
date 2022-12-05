#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int leftmostnonrepeating(string s1){

    int a[256] = {0}, res = 100000;

    for(int i =0 ; i < s1.length(); i++){
      a[s1[i]]++;     
    }

    for(int j = 0; j < s1.length(); j++){
        if(a[s1[j]] == 1)
        return j;
    }

    return -1;
}

int main(){
    string s1;
    int ans;

    cin >> s1;

    ans = leftmostnonrepeating(s1);
    cout << ans;
}