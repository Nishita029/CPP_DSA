// For loop in c++

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cout <<"Enter number : ";
    cin>> n;

    // for (int i = 1; i <= n; i++)
    // {

    //     cout << i << endl;

    // }
    
    // Another way of using for loop

    int i = 1;
    for(; ;){

        if ( i <= n){

            cout << i << endl;

        }
        else{

            break;

        }
        i++;
    }

        // Multiple iterations in one loop

    for ( int a = 1 , b = 2, c = 3; a >= 1, b >= 2, c >= 3; a-- ,b-- , c--)  {                              


        cout << a << " " << b << " " << c ;    
        }               

    return 0;

}*/



// Sum of digits using for loop

#include<iostream>
using namespace std;

int main(){
    
    int n , sum = 0;
    cout <<"Enter number :";
    cin >> n;

    for (int i = 1; i <= n; i++){

        sum = sum + i;
        
    }
    
    cout << "Sum: " << sum <<endl;
    
    return 0;
}