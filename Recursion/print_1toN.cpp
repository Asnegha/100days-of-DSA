#include<iostream>

using namespace std;

int print1on(int n){
    if(n == 0){
        return 0;
    }
    print1on(n-1);
    cout << n << endl;
    return 0;
}

int printno1(int n){
    if(n == 0){
        return 0;
    }
    cout << n <<endl;
    printno1(n-1);
    return 0;
}

int main(){
    int a;
    cout << "Enter value of a";
    cin >> a;

    printno1(a);
    print1on(a);

}