#include<iostream>
#include<algorithm>

using namespace std;

int towerOfHonai(int n, char A, char B, char C){
    
    if(n == 1)
    {cout << "Move from " << A << " to " << C << endl;
    return 0;}
    
    towerOfHonai(n - 1, A ,C ,B);
    cout << "Move from " << A << " to " << C << endl;
    towerOfHonai(n - 1, B, A, C);   
    return 0;
}

int main() {
    int n;

    cout << "Enter the value of n";
    cin >> n;
    

    towerOfHonai(n, 'A', 'B', 'C');
    
}