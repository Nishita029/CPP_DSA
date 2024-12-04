// Use of break and continue statements

// Use of Break statement

// #include<stdio.h>
// void main(){

//     int n; 
     
//      do{
//     printf("Enter number: ");
//     scanf("%d", &n);

//     if(n % 2 != 0){             // condition for odd numbers
//         break;                   // way of coming out of a loop
//     }

//      } while(1);

//      printf("loop is terminated");


// }


// Use of continue statement

// #include<stdio.h>

// void main(){

//     for (int i = 1; i <= 10; i++){

//         if(i == 6){

//             continue;             // to skip any number
//         }
           
//            printf("%d\n", i);
//         }   

// }



// Print all the odd numbers from 5 to 55

 #include<stdio.h>
 void main(){

    for (int i = 5; i <= 55; i++){

        if(i % 2 != 0){

          printf("%d\n", i);

        }    
        }
 }