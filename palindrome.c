// PALINDROME NUMBER

#include<stdio.h>

int main(){

    int n , temp , remainder , sum = 0; 

    printf("enter number: ");
    scanf("%d", &n);

    temp = n;
    
    while( n != 0){

        remainder = n % 10;
        sum = sum * 10 + remainder;
        n /= 10;
        
    }
    if(temp == sum){

        printf("number is palindrome");

    }

    else{

        printf("number is not palindrome");
    }

    return 0;
}