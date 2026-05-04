// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin>>a;
//     while (a>0)
//     {
//         cout<<a%10<<" ";
//         a=a/10;
//     }
    
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin>>a;
//     int count=0;
//     while (a>0)
//     {
//         int last= a%10;
//         a=a/10;
//         count=count+1;
        
//     }
//     cout<< count;
    
// }





// // checking if the number is palindrome or not
// #include <iostream> 
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     int pre= n;
//     int up= 0;
//     while (n>0){
//         int neww= n%10;
//         up = up*10 +neww;
//         n= n/10;

//     }
//     if (pre== up){
//         cout<< "Yes";
//     }
//     else{
//         cout<< "No";
//     }

// }  


// // check if these are Armstrong number
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cin>> n;
//     int first= n;
//     int add = 0;
//     while (n > 0) {
//         int second = n % 10;
//         add += (second * second * second);
//         n = n / 10;
//     }
//     if (add == first) {
//         cout << first << " is an Armstrong number" << endl;
//     } else {
//         cout << first << " is not an Armstrong number" << endl;
//     }
// }  


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;

    for (int i=1; i<=n; i++){
        if (n%i==0){
            cout<< i<< " ";
        }
    }

}



