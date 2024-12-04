// Pattern 1

/*#include<iostream>
using namespace std;

int main(){
    
    int n;                                            
    cout << "Enter number ";
    cin>> n;

    int i = 1;
    while(i <= n){
        
        int j = 1;
        while(j <= n){

            cout << j << "  ";
            j ++;
        }
        cout << endl;
        i ++;
    }
    
    return 0;
}*/




// Pattern 2

/*#include<iostream>
using namespace std;
 int main(){

    int n ,t;
    cout << "Enter number :";
    cin >> n;
  
    int i = 1;
    while( i <= n){

          t = n;

        int j = 1;
        while( j <= n){

            cout << t <<"  ";
            t--;
            j++;
        }
        cout << endl;
        i ++ ;
    }
    return 0;
 }*/




 //Pattern 3

 /*#include<iostream>
 using namespace std;

 int main(){

    int n;
    cout << "Enter number :";
    cin >> n;

    int i = 1 , count = 1;

    while( i <= n){

        int j = 1;

        while( j <= n){

            cout << count << " ";
            count ++;
            j ++;
        }
        cout <<endl;
        i ++;
    }


    return 0;

 }*/



 // Pattern 4

 /*#include<iostream>
 using namespace std;

 int main(){

    int n;
    cout <<"Enter number: ";
    cin >> n;

    int i = 1;

    while( i <= n){

        int j = 1;
        while( j <= i){

            cout<< " * " << " ";
            j++;
        }
        cout <<endl;
        i ++;
    }
    return 0;

 }*/



 //Pattern 5

 /*#include<iostream>
 using namespace std;

 int main(){

    int n;
    cout<< "Enter number : ";
    cin >> n;

    int i = 1;
    while( i <= n){

        int j = 1;
        while( j <= i){

            cout << i << " ";
            j ++;

        }
        cout << endl;
        i ++;
         
    }

    return 0;
 }*/


 //Pattern 6

 /*#include<iostream>
 using namespace std;

 int main(){
    
    int n;
    cout << "Enter number: ";
    cin >> n;

    int i = 1 , count = 1;

    while( i <= n){

        int j = 1;
        while( j <= i){

            cout << count << " ";
            count ++;
            j ++;
        
        }

        cout << endl;
        i ++;
    }


    return 0;
 }*/


 //Pattern 7

 /*#include<iostream>
 using namespace std;

 int main(){
    
    int n;
    cout <<"Enter number :";
    cin>> n;

    int i = 1;

    while( i <= n){
       
       int value = i;
       int j = 1;
        while( j <= i){

            cout << value << " ";
            value ++;
            j++;
        }
        cout << endl;
        i ++;

    }

    return 0;

 }*/


 // Pattern 8

 /*#include<iostream>
 using namespace std;

 int main(){

    int n;
    cout << "Enter number :";
    cin >> n;

    int i = 1;
    while ( i <= n){

        int value = i;
        int j = 1;

        while(j <= i){

            cout << value <<" ";
            value --;
            j ++;
        }

        cout <<endl ;
        i ++;
    }

    return 0;
 }*/


 //Pattern 9

 /*#include<iostream>
 using namespace std;

 int main(){

    int n;
    cout << "Enter number :";
    cin >> n;

    int i = 1;
    char  ch = 'A';

    while( i <= n){

        int j = 1;
        while( j <= n){

            cout << ch << " ";
            j++;
        }
        ch ++;
        cout << endl;
        i++;
    }
 }*/


 //Pattern 10

 /*#include<iostream>
 using namespace std;
 int main(){

    int n;
    cout <<"enter number :";
    cin>> n;

    int i = 1;
    while( i <= n){

        char ch = 'A';
        int j = 1;

        while ( j <= n){

            cout <<ch <<" ";
            ch ++;
            j++;
        }
        cout <<endl;
        i ++;
    }

    return 0;
 }*/


 /*//Pattern 11

 #include<iostream>
 using namespace std;
 int main(){
     
    int n;
    cout << "Enter number :";
    cin>> n;

    int i = 1;
    char ch = 'A';
    while(i <= n){

        int j = 1;
        while( j <= n){

            cout <<ch << " ";
            ch ++;
            j++;
        }
        cout <<endl;
        i ++; 

    }

    return 0;

 }*/


 // Pattern 12

 /*#include<iostream>
 using namespace std;
 int main(){

    int n;
    cout << "Enter number: ";
    cin>> n;

    int i = 1;
    char ch = 'A';
    while(i <= n){

        int j = 1;
        while( j <= n){

            cout << ch <<" ";
            ch++;
            j++;
        }
        cout <<endl;
        ch = ch - 2;
        i++;
        
    }
 }*/


 /*//Pattern 13

 #include<iostream>
 using namespace std;
 int main(){

    int n;
    cout << "Enter number :";
    cin>> n;

    int i = 1;
    char ch = 'A';
    while( i <= n){

        int j = 1;
        while(j <= i){

            cout << ch<< " ";
            j++;
        }
        cout <<endl;
        ch ++;
        i ++;
    }
    return 0;
 }*/


 // Pattern 14

 /*#include<iostream>
 using namespace std;
 int main(){

    int n;
    cout <<"Enter number: ";
    cin>> n;
    int i = 1;
    char ch = 'A';

    while(i <= n){

        int j = 1;
        while( j <= i){

            cout << ch << " ";
            ch++;
            j ++;

        }
        cout <<endl;
        i ++;
    }

    return 0;
 }*/


 //Pattern 15

 /*#include<iostream>
 using namespace std;
 int main(){

    int n;
    cout <<"Enter number: ";
    cin>> n;
    int i = 1;
    char ch = 'A';

    while(i <= n){                                     //PENDING

        int j = 1;
        while( j <= i){

            cout << ch << " ";
            ch++;
            j ++;

        }
        cout <<endl;
        i ++;
    }

    return 0;
 }*/


 //Pattern 16

 #include<iostream>
 using namespace std;
 int main(){

        int n;
        cout <<"Enter number :";
        cin>> n;
         int i = 1;
         char ch = 'D';

         while( i <= n){                            //PENDING

            int j = 1;
            while( j <= i){

                cout << ch <<" ";
                ch ++;
                j++; 
            }
            cout <<endl;
            i ++;
            ch -= 2;
         }

    return 0;
 }