#include <bits/stdc++.h>
#define elif else if
using namespace std;
int main(){

    int marks;
    cin>> marks;
    
    if(marks>=80 && marks<=100){
        cout<< "A";

    }
    else if(marks>=60 && marks <=69){
        cout<< "B";

    }

    elif(marks>=50 && marks <=59){
        cout<< "C";

    }

    elif(marks>=45 && marks <=49){
        cout<< "D";

    }

    elif(marks>=25 && marks <=44){
        cout<< "E";

    }
    else{
        cout<< "F";
    }
    return 0;

}