#include<iostream>
#include<string>

using namespace std;

void patternSearch(string s1, string s2){

    int j;

    for(int i = 0; i < s1.length() - s2.length() + 1; i++){

         for(j = 0; j < s2.length(); j++) {
            if(s1[i + j] != s2[j])
            break;
         } 

         if(j == s2.length())
         cout << i << endl;     
    }
}

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    patternSearch(s1, s2);
}