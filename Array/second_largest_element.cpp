#include<iostream>

using namespace std;

int findSlargest(int a[], int n){

    int max = 0,smax = -1;
     
     for(int i = 1; i < n; i++){
           if(a[i] > a[max])
           {smax = max;
           max = i;}
           else if(smax == -1){
              smax = i;

           }else if(a[smax] < a[i]){
            smax = i;
           }
     }
     return smax;

}

int main(){

    int n, res;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    res = findSlargest(a, n);

    cout << "The second largest element is " << res;
}