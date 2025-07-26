# include <bits/stdc++.h>
using namespace std;
int main(){
    // string  x;
    // cout<< "Enter name with spaces please";
    // getline (cin, x);
    // cout<< "\n Number is "<< x;
    // // cout<< x;


    int age;
    // cout<<" Enter age: ";
    cin>> age;

    if(age<18){
        cout<< "Not Adult";
    }
    else if(age==18){
        cout<< "You're an adult";
    }
    else{
        cout<< "More than Adult";
    }
    return 0;
}