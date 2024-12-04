// Fuctions in C++
// find nth term of an AP

/*#include<iostream>
using namespace std;

int AP(int n){

  return (3 * n) + 7;

}

int main(){

    int n ,t ;
    cout <<"Enter number ";
    cin>> n;

    t = AP(n);
    cout << n << "th term :" << t ;
    
    return 0;
}*/


// find the number of set bits in given two numbers

#include<iostream>
using namespace std;
int  main(){

    int a, b, sum = 0 , sum1 = 0;
    cout <<"Enter numbers: ";
    cin >> a >> b;
   
    while(1){

    if (a & 1){

        sum = sum + 1;

    }
        a << 1;

        if (b & 1){

        sum1= sum1 + 1;

    }
        b << 1;
    }

    cout << "Total no of set bits " ;

    return sum + sum1 ;   

}