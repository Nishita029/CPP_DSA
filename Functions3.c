// FUNCTIONS WITH PERAMETERS AND RETURN TYPE

#include<stdio.h>

int Sum(int a, int b);

int main(){

int a, b, s ;

printf("enter first value: ");
scanf("%d", &a);

printf("enter second value: ");
scanf("%d", &b);

s = Sum(a,b);

printf("sum: %d", s);


//printf("sum: %d", Sum(a,b));


    return 0;
}

int Sum(int x, int y){

    return x + y;
}

