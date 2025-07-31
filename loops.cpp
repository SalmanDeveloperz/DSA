// Question 1:

// Output
/*
***
***
***
*/

// # include <bits/stdc++.h>
// using namespace std;

// int main(){
//     for (int i=0; i<=2; i++){
//         for (int j=0; j<=2; j++){
//             cout<< "*";
//         }
//         cout<< endl;
//     }

// }




// Question 2:

// Output
/*
*
**
***
****
*/

// # include <bits/stdc++.h>
// using namespace std;

// int main(){
//     for (int i=0; i<=3; i++){
//         for (int j=0; j<=i; j++){
//             cout<< "*";
//         }
//         cout<< endl;
//     }

// }





// Question 3:

// Output
/*
1
12
123
1234
*/

// # include <bits/stdc++.h>
// using namespace std;

// int main(){
//     for (int i=0; i<=4; i++){
//         for (int j=1; j<=i; j++){
//             cout<< j;
//         }
//         cout<< endl;
//     }

// }




// Question # 4:
/*
Input: 4
Output:
****
***
**
*
*/


# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    for (int i=n; i>=0; i--){
        for (int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<< endl;
    }

}




//Question # 5;

/*
Input: 4
Output:
   *  
  ***
 *****
*******
*/


// # include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>> n;
//     for (int i=0; i>=n; i++){
//         for (int j=i; j>=n; j++){
//             cout<< j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }