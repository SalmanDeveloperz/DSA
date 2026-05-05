// #include <bits/stdc++.h>
// using namespace std;

// void print(int n){
//     // print number from 1 to n
//     if(n==0) return;
//     print(n-1);
//     cout<< n <<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
//     // cout<< print(n);
// }



#include <bits/stdc++.h>
using namespace std;

int print(int n){
    // sum of n numbers
    if(n==0) return 0;
    return n+ print(n-1);
}
int main(){
    int n;
    cin>>n;
    int sum= print(n);
    cout<< sum;
}