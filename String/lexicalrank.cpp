#include<iostream>
#include<string>

using namespace std;

int lexicalRank(string s1){
    int c[256] ={0}, fact = 1, res = 1;
    for(int i = 1; i <= s1.length(); i++){
        fact = fact*i;
    }

    for(int i = 0; i < s1.length(); i++){
        c[s1[i]]++;
    }

    for(int i = 1; i < 256; i++){
        c[i] += c[i-1];
    }

    for(int i = 0; i < s1.length() - 1; i++){
         fact = fact/(s1.length() - i);
         res = res + fact*c[s1[i] - 1];
         for(int j = s1[i]; j < 256; j++){
            c[j]--;
         }
    }

    return res;

}

int main(){
    string s;
    int ans;
    getline(cin, s);

    ans = lexicalRank(s);
    cout << ans;
}