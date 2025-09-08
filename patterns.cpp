#include <bits/stdc++.h>
using namespace std;

/*
1
12
123
1234
12345
*/
void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*
1
22
333
4444
55555
*/
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

/*
*****
****
***
**
*
*/
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
12345
2345
345
45
5
*/
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*
11111
2222
333
44
5
*/
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

/*
    *
   ***
  *****
 *******
*********

 */
void pattern6(int n)
{

    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // for stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*

 *********
  *******
   *****
    ***
     *

*/
void pattern7(int n){
    for (int i = 0; i < n; i++){
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++){
            cout << "*";
        }

        // spaces
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

void pattern8(int n){
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // for stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}


/*
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/

void pattern9(int n){
    //// This is not required method, it combines two patterns but now printing the required symmetrical pattern.
    // void pattern9(int n){
    //     //first half
    //     for (int i = 0; i < n; i++){
    //         for (int j = 0; j<=i; j++){
    //             cout<<"*";
    //         }
    //         cout<<"\n";
    //     }

    //     //second half
    //     for (int i = 0; i < n; i++){
    //         for (int j = i; j<n; j++){
    //             cout<<"*";
    //         }
    //         cout<<"\n";
    //     }

    // }

    //This is the correct approch for required symmetrical pattern
    for(int i=1; i<=2*n-1; i++){    // For printing 9 rows outside  2n-1= 2(5)-1= 9
        int star=i;
        if(i>n){
            star=2*n-i;
        }
        for (int j=1; j<=star; j++){
            cout<<"*";
        }
        
        cout<<endl;
    }


}

/*

    1
    01
    101
    0101
    10101

*/

void pattern10(int n){
    for (int i=0; i<n; i++){
        int start=1;
        if(i%2==0){
            start=1;
        }
        else
        start=0;
        for (int j=0; j<=i; j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

/*

    1      1
    12    21
    123  321
    12344321

*/

void pattern11(int n){
    //🎉🎉🎉🎉🎉🎉🎉 Self made Logic Hurraaaaaahhhhhhh Bro 🎉🎉🎉🎉🎉🎉🎉🎉
    for(int i=1; i<=n; i++){
        //Left Digits
        for(int j=1; j<=i; j++){
            cout<<j;
        }

        // Spaces
        for(int j=0; j<=2*n-(2*i+1); j++){
            cout<<" ";
        }


        // Right Digits
        for(int j=i; j>=1; j--){
            cout<<j;
        }

        cout<<endl;
    }

}
    int main()
{
    int n;
    cin >> n;
    pattern11(n);

    return 0;
}
