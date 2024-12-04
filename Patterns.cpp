// Pattern 1

/*#include<iostream>
using namespace std;

int main(){

    int n ;

    cin >> n;

    int i = 1;
    while(i <= n){

        int j = 1;
        while(j <= n){

            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}*/

// Pattern 2

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    while(i <= n){

       int j = 1;
        while (j <= n){

            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}*/


// Pattern 3

/*#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  while(i <= n){

    int j = 1;
    while(j <= n){

        cout << j <<" ";
        j++;
   
    }
    cout << endl;
    i++;
  
  }

}*/


//Pattern 4

/*#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int i = 1;
  while(i <= n){

    int j = 1;
    while(j <= n){

        cout << n - j + 1 <<" ";    // formula for reverse numbers
        j++;
   
    }
    cout << endl;
    i++;
  
  }

}*/


//Pattern 5

/*#include<iostream>
using namespace std;

int main(){

    int n ;
    cin >> n;

    int i = 1 ;
    int count = 1;

    while(i <= n){

        int j = 1;
        while(j <= n){
            cout << count <<"  ";
            count ++;
            j++;

        }

        cout << endl;
        i++;
    }


}*/



// Pattern 6

/*#include<iostream>
using namespace std;

int main()
{

    int n; 
    cin >> n;

    int row = 1;
    while (row <= n){

        int col = 1;
        while (col <= row){

            cout <<"*  ";
            col ++;
        }

        cout << endl;
        row ++;

    }
    return 0;
}*/


// Pattern 7

/*#include<iostream>
using namespace std;

int main()
{

    int n; 
    cin >> n;

    int row = 1;
    while (row <= n){

        int col = 1;
        while (col <= row){

            cout <<row << " ";
            col ++;
        }

        cout << endl;
        row ++;

    }
    return 0;
}
*/


//Pattern 8

/*#include<iostream>
using namespace std;

int main(){

    int n;
    int value = 1;

    cin >> n;

    int i = 1;
    while(i <= n){

        int j = 1;
        while (j <= i){

            cout << value << " ";
            value ++;
            j ++;

        }
        cout << endl;
        i++;
    }

    return 0;

}*/


// Pattern 9

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    
    while(i <= n){

        int j = 1;
        int value = i;

        while(j <= i){

            cout << value << " ";
            value ++;
            j ++;

        }

        cout << endl;
        i++;


    }
    return 0;

}*/


// Pattern 10

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    
    while(i <= n){

        int j = 1;
        int value = i;

        while(j <= i){

            cout << value << " ";
            value --;
            j ++;

        }
         
        cout << endl;
        i++;


    }
    return 0;

}*/


// Pattern 11

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    while (i <= n){

        int j = 1;
        char ch = 'A';
        
        while (j <= n){

            cout << ch <<" ";
            ch ++;
            j ++;
        }
        
        cout << endl;
        i ++;
    }

}*/


// Pattern 12       

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    char ch = 'A';

    while (i <= n){

        int j = 1;
        
        
        while (j <= n){

            cout << ch <<" ";
            j ++;
        }
        ch ++; 
        cout << endl;
        i ++;
    }
    return 0;
}*/



// Pattern 13

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
     char ch = 'A'; 

    while(i <= n){

        int j = 1;
    

        while(j <= n){

            cout << ch << " ";
            ch ++;
            j++;

        }
        
        cout << endl;
        i++;
    }
    return 0;
}*/


// Pattern 14

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    char ch = 'A';

    while(i <= n){

        int j = 1;
        while(j <= i){
            cout << ch << " ";
            
            j ++;

        }
        ch ++ ;
        cout <<endl;
        i ++;

    }
}*/


// Pattern 15

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    char ch = 'A';

    while(i <= n){

        int j = 1;
        while(j <= i){
            cout << ch << " ";
            ch ++ ;
            j ++;

        }
      
        cout <<endl;
        i ++;

    }
}*/



//Pattern 16

/*#include<iostream>
using namespace std;

int main(){

    int n ;
    cout << "Enter number : ";
    cin >> n;

    int i = 1;
  
    while (i <= n){
       
        int space = n - i;
        while (space){


            cout << "  ";
            space --;
        }

        int j = 1;
        while( j <= i){

            cout << "*" ;
            j++;
        }
        cout << endl;
        i++;


    }


    return 0;

}*/


// Pattern 17

/*#include<iostream>
using namespace std;

int main(){

    int n ;
    cout << "Enter number: ";
    cin >> n;

    int i = 1;
    while (i <= n){

        int j = n - i + 1 ;

        while ( j >= 1){

            cout << " *";
            j--;
        }

        cout << endl;
        i++;
    }


    return 0;

}*/



// Pattern 18

#include<iostream>
using namespace std;

int main(){

    int n ;
    cout << "Enter number: ";
    cin >> n;

    int i = 1;
    while (i <= n){

        int space = i - 1;
        while (space){

            cout << "  ";
            space -- ;
        }

        int j = i;
        while( j >= 1){

            cout << " X ";
            j --;

        }
        cout << endl;
        i++;
        
        }

     
    }
