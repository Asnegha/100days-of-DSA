#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void longestDistinctSubstring(string s1){

    int prev[256] = {-1};
    int i = 0, res;

    for(int j = 0; j < s1.length(); j++){
          i = max(i, prev[s1[j]] + 1);
          int maxend = j - i + 1;
          res = max(res, maxend);
          prev[s1[j]] = j;
    }

    cout << res;
}

int main(){
    string s;
    getline(cin, s);

    longestDistinctSubstring(s);
}