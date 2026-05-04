#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr1;
    arr1= {1,2,4,6};
    int size= arr1.size();
    cout<<"Size of an array is: "<< size<< endl;

    int product=1;
    for (int i=0; i<size; i++){
        product= product* arr1[i];
    }
    cout<< "Product of array is: "<< product<< endl;
    for (int i=0; i< size; i++){
        cout<<product/arr1[i]<<" ";
    }
}