#include<iostream>
#include<algorithm>

using namespace std;

int ropecut(int n, int a,int b,int c){
    
    if(n == 0)
    return 0;
    if(n < 0)
    return -1;

    int res = max(max(ropecut(n-a, a, b, c), ropecut(n-b, a, b, c)), ropecut(n-c, a, b,c));

    if(res == -1)
    return -1;
    else return res + 1;
}

int main() {
    int n, a, b, c, ans;

    cout << "Enter the rope lenght";
    cin >> n;
    cout << "Enter a, b, c length";
    cin >> a >> b >> c;

    ans = ropecut(n, a, b, c);
    cout << "Max number of pieces: " << ans;
}