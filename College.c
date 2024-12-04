// checking if given number is prime or not 

#include<stdio.h>
void main(){

    int n ; 
    printf("Enter number: ");
    scanf("%d", &n);

    int i = 2;

    while(i < n){

        if( n % i == 0){

            printf("Number is not prime");

            break;
        }

        else {

            printf("Number is prime");

            break;
        }

    }
    if(n == 1 || n == 2){

        printf("Number is prime");
    }

}



