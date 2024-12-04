// Bitwise operator
// These operators work on Bits

#include<iostream>
using namespace std;

int main(){

     int a = 5;
     int b = 6;

     cout << "a & b: " << (a & b) << '\n';

     cout << "a | b: " << (a | b) << '\n';
     
     cout << "~b: " << ~b << endl;
     
     cout << "a ^ b: " << (a ^ b) << '\n';
     
    // Left shift and right shift

    cout << (7 << 2) << endl;   
    cout << ( 14 << 1) << endl;
    cout << (24 >> 1) << endl;
    cout << ( 56 >> 2) << endl;
    
    return 0;

} 



