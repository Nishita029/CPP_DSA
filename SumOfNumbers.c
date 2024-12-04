
//Sum of natural numbers

// #include<stdio.h>
// void main(){

//     int n, sum=0;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     for(int i = 1; i <= n; i++){

//         sum = sum + i;
//     }

//     printf("sum : %d", sum);
// }


// Table of a given number

// #include<stdio.h>
// void main(){

//     int n;

//     printf("Enter any number: ");
//     scanf("%d", &n);

//     for(int i = 1; i <= 10; i++){

//         printf("%d\n", n * i);
//     }
// }


// Reverse of a table

#include<stdio.h>
void main(){

    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i = 10; i >= 1; i--){

        printf("%d\n", n * i);
    }
}