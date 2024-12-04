// ARMSTRONG NUMBER

#include<stdio.h>
#include<math.h>

int main(){

    int n , temp , remainder , sum = 0;

    printf("enter number: ");
    scanf("%d", &n);

    temp = n;

    while(n != 0){

        remainder = n % 10;
        sum = (pow(remainder,3)) + sum;
        n /= 10;
    }
    
    if( temp == sum){

        printf("number is armstrong");
    }
    
    else{

        printf("number is not armstrong");
    }
    return 0;
}