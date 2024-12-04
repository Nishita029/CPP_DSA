
// Checking the greater number

 #include<iostream>
 using namespace std;

 int main(){

    int a, b;
    
    // cout << "Enter values :";
    // cin >> a >> b;

    // if(a > b){

    //     cout<< a <<" is greater ";

    // }
    // else{

    //     cout<< b <<" is greater";
    // }

     a = cin.get();             // this function also takes space , tab , enter as input
      // a = '1' -> 49 ASCII
                                // this function gives you character 
    cout<< "value of a :" << a << endl; 
 }



// check whether the number is positive , negative or zero

/* #include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter the number" <<endl;
    cin >> n;

    if(n > 0){
      
      cout << "n is positive";

    }

     else if( n < 0){

        cout << "n is negative";
    }

    else {

        cout << " n is zero ";
    }


}*/

// Looping in c++

/*#include<iostream>
using namespace std;

int main(){

    int n; 

    cout << "Enter number: ";
    cin >> n;

    int i = 1;
    while(i <= n){

        cout << i <<"  ";
        i++;
    }
}*/

// Sum of digits

// #include<iostream>
// using namespace std;

// int main(){

//     int n , sum = 0; 

//     cout << "Enter number: ";
//     cin >> n;

//     int i = 1;

//     while(i <= n){

//         sum = sum + i;
//         i++;
//     }

//     cout << "sum: " << sum ;

// }


// Homework 1

#include<iostream>
using namespace std;

int main(){

    char ch;

    cout << "Enter character: ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z'){

    cout << "Upper case";

   }

    else if (ch >= 'a' && ch <= 'z'){

    cout << "Lower case";

   }


   else if(ch >= '0' && ch <= '9'){

    cout << "Numeric value";

   }

   else {

    cout << " Invalid character";
   }

}


// sum of all even numbers till n (Homework 2)

/*#include<iostream>
using namespace std;

int main(){

    int n , sum = 0;

    cin >> n;

    int i = 2;
    while(i <= n){

     sum = sum + i;
     i = i + 2;

    }

    cout << "sum : " << sum ;
}
*/

// change fahrenheit to celcius (Homework 3)

/*#include<iostream>
using namespace std;

int main(){

    float F , C;
    cout << "Enter number :";
    cin >> F;

    C = (F - 32 )* 5 / 9;

    cout << "Celcius conversion: "<< C ;
}*/