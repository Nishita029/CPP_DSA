//AVERAGE OF THREE NUMBERS
 
 #include<stdio.h>

 int main(){

    int a, b, c, avg;

    printf("enter first numbers: ");
    scanf("%d", &a);

    printf("enter second numbers: ");
    scanf("%d", &b);

    printf("enter third numbers: ");
    scanf("%d", &c);

    avg = (a+b+c)/3;

    printf("average: %d", avg);

    return 0;
 }



// CHECK IF GIVEN NUMBER IS DIGIT OR NOT

// #include<stdio.h>

// int main(){

//     int n;

//     printf("enter number: ");
//     scanf("%d",&n);

//     if(n >= 0 && n <= 9){

//         printf("Given number is digit");

//     }

//     else{

//         printf("Given number is not digit");
//     }

//     return 0;

// }




// CHECK IF GIVEN NUMBER IS TWO DIGIT OR NOT


// #include<stdio.h>

// int main(){

//     int n;

//     printf("enter number: ");
//     scanf("%d",&n);

//     if(n > 9  &&  n < 100){

//         printf("Given number is two digit");

//     }

//     else{

//         printf("Given number is not  two digit");
//     }

//     return 0;

// }



// CHECK IF GIVEN NUMBER IS NATURAL OR NOT



// #include<stdio.h>

// int main(){

//     int n;

//     printf("enter number: ");
//     scanf("%d", &n);

//     if(n <= 0){

//         printf("Number is not natural");
//     }

//     else{

//         printf("Number is natural");
//     }

//     return 0;
// }
