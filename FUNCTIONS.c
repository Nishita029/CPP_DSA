// USE OF FUNCTIONS

// #include<stdio.h>
//  void printHello();               //function declaration OR prototype
//  void Goodbye();

//  void main(){
   
//    printHello();                //function calling
//    Goodbye();
//  }


//  void printHello(){              // function definition

//     printf("Hello ! \n");

//  }

//  void Goodbye(){

//     printf("Good Bye !");
//  }




// program 2 using functions

#include<stdio.h>
 void Namaste();
 void Bonjour();
 
 void main(){
   
   char ch;

   printf("enter i for indian and f for french: ");
   scanf("%c", &ch);

   if(ch == 'i'){

    Namaste();
   }

   else {

    Bonjour();
   }

 }
  void Namaste(){

    printf("Namaste \n");

  }

  void Bonjour(){

    printf(" Bonjour ");
  }