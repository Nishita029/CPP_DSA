// Checking whether the number is even or odd 

// TYPE 1 

/* #include<stdio.h>
void main(){

    int n; 
    printf("Enter number: ");
    scanf("%d", &n);

    if (n % 2 == 0){

        printf("number is even");
    }

    else {

        printf(" number is odd ");
    }
}
*/

// Printing all the odd numbers till n

// TYPE 2

#include<stdio.h>

void main(){

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i = i+2){
    
     printf(" %d", i);

    }
}