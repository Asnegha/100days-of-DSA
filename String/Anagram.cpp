#include<iostream>
#include<string>

using namespace std;

bool anagram(string s1,string s2){

    int a[256] = {0};

    if(s1.length() != s2.length())
    return false;

    for(int i = 0; i < s1.length(); i++){

        a[s1[i]]++;
        a[s2[i]]--;
    }

    for(int j = 0; j < 256; j++){
        if(a[j] != 0)
        return false;
    }

    return true;
}

int main(){
    string s1, s2;
    bool res;

    cin >> s1;
    cin >> s2;

    res = anagram(s1, s2);
    cout << res;
}