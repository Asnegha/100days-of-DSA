#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void reverse(string &s1, int low, int high){
    while(low < high){
        swap(s1[low], s1[high]);
        low++;
        high--;
    }
}

void reverseaString(string s1){

    int start = 0;

    for(int end = 0; end < s1.length(); end++){
        if(s1[end] == ' ')
        {
            reverse(s1, start, end - 1);
            start = end+1;
        }
    }
    
    reverse(s1, 0, s1.length()-1);
    for(int i = 0; i < s1.length(); i++){
        cout << s1[i];
    }
}

int main(){
    string s;
    getline(cin, s);

    reverseaString(s);
}