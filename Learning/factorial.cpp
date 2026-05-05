#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    // int fact= 1;
    // for (int i=1; i<=n; i++){
    //     fact= fact* i;
    // }
    // return fact;

    // With recursion
    if (n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    // printing factorial

    int n;
    cin>>n;
    int fact= factorial(n);
    cout<< fact;
}