// Sutract the proctuct and sum of the digits 

#include<iostream>
using namespace std;

int main(){

    int n ,d ;
    int sum = 0 , subtraction;
    int product = 1;

    cin >> n;
    while ( n != 0){
        
        d = n % 10;
        sum = sum + d;
        product = product * d;
        n /= 10;
        
    }
    cout << "Sum = " << sum << endl;
    cout << "Product = "<< product <<endl;
    cout << "Subtraction = " << product - sum << endl;

    return 0;

}