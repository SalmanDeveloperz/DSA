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

int main()
{
    int n;
    cin >> n;

    pattern5(n);

    return 0;
}