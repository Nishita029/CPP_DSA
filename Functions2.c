// FUNCTION WITH PERAMETERS

#include<stdio.h>

void Table(int n);           //perameter OR formal perameter

int main(){

    int n;

printf("enter number: ");
scanf("%d", &n);

Table(n);                    //argument OR actual perameter

    return 0;
}

void Table(int n){          //perameter OR formal perameter

    for(int i = 1; i <= 10; i++){

        printf("%d \n",n * i);
    }
}