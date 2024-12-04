// Output 1

/*#include <iostream>
 
using namespace std;
 int main(){

    int a = 9;
    if(a == 9){

        cout << "Nine \t";

    }
    else if (a > 0){

        cout <<"Positive";

    }
    else {
        cout <<"Negative";
    }
 }*/


 // Output 2

 /*#include<iostream>
 using namespace std;

 int main(){

    int a = 2;
    int b = a + 1;

    if ((a = 3)== b){

        cout << a;

    }
    else {

        cout << a + 1;
    }
 }*/


 // Output 3

 /*#include<iostream>

 using namespace std;

 int main(){

    int a = 24;

    if (a > 20){

        cout << "Love" << endl;

    }
    else if (a == 24){

        cout <<"Lovely" << endl;

    }
    else {

        cout<< "Babbar";
    }
    cout << a;

 }*/


 // Output 4

 #include<iostream>
 using namespace std;

 int main(){

        for (int i = 0; i < 5; i++){

             for (int j = i; j <= 5; j++){

                if (i + j == 10){

                    break;
                }

                cout << i << " " << j << endl;             
                }  
            
        }
         return 0;   
 
 }

