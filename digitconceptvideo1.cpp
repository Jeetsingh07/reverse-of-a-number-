// #include<iostream>
// using namespace std; 
// int main  (){
//     int n;
//     cin>>n;
//     int revnum=0;
//     while(n>0){
//         int ld=n%10;
//         revnum=revnum*10+ld;
//         n=n/10;

//     }
//  cout<<revnum;
//     return 0;
// }







#include <iostream>
#include <cmath>   // for pow() function
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // calculate sum of digits^n
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if ((int)result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
