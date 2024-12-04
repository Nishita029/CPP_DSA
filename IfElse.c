//USE OF OPERATORS AND IF ELSE

//GREATER NUMBER

#include<stdio.h>

int main(){

    int a,b,c;

    printf("enter number 1 : ");
    scanf("%d", &a);

    printf("enter number 2 : ");
    scanf("%d", &b);

    printf("enter number 3 : ");
    scanf("%d", &c);

    if ( a > b && a > c ){

        printf("a is greater among all");
    }

    else if ( b > a && b > c ){

         printf("b is greater among all");
    }

    else if ( c > a && c > b ){

        printf("c is greater among all");

    }

    else{

        printf("wrong number");
    }
     return 0; 
}




// EVEN ODD

// #include<stdio.h>

// int main(){

//     int n;
     
//      printf("enter number : ");
//      scanf("%d", &n);

//      if( n % 2 == 0){

//         printf("number is even");
//      }

//      else {

//         printf("number is odd");
//      }

//      return 0;
// }
   



// GRADE CHART

// #include<stdio.h>

// int main(){

//     int maths, physics, chemistry, total;

//     printf("enter number of maths: ");
//     scanf("%d" , &maths);

//     printf("enter number of physics: ");
//     scanf("%d" , &physics);

//     printf("enter number of chemistry: ");
//     scanf("%d" , &chemistry);

//     total = maths + physics + chemistry;

//     if( total > 250 && total <= 300){

//         printf("A+");
//     }

//     else if( total > 190 && total < 270){

//         printf("A");
//     }

//     else if( total > 120 && total < 190){

//         printf("B");
//     }
    
//     else{

//         printf("C");
//     }
    
//     return 0;
// }



// PRINTING ENGLISH ALPHABETS


// #include<stdio.h>

// int main(){

//    // for( char  ch = 'a' ; ch <= 'z' ; ch++)

//      for ( char ch = 'A' ; ch <= 'Z' ; ch++){

//        printf("%c \t", ch);
//      }
  
//     }








































