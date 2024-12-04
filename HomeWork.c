// checking if given number is natural or not

#include<stdio.h>
void main(){

   char ch;

    printf("Enter any number: ");
    scanf("%c", &ch);

    if(ch >= '1' && ch <= '9'){

        printf(" Number is not natural");

    } else{

        printf(" Natural number");
    }
}