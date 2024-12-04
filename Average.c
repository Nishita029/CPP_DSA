//Finding average of three digits

// #include<stdio.h>
// void main(){

//     int a,b,c,AVG;
//     printf("Enter the numbers: ");
//     scanf("%d\n %d\n %d",&a, &b, &c);

//     AVG = (a+b+c)/3;
//     printf("Average : %d", AVG);
// }




// Checking if given character is digit or not

#include<stdio.h>
void main(){

    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);                   //Marking this program to understand later
                                          
    if(ch >= '0' && ch <= '9'){

    printf("Given number is digit");
    } else{

        printf("Not a digit");
    }

    }


// finding the smallest digit

// #include<stdio.h>
// void main(){

//     int a,b;

//     printf("Enter digits: ");
//     scanf("%d\n %d", &a, &b);

//     if(a>b){

//         printf("%d is smallest between both",b);
    
//     } else{

//         printf("%d is smallest between both", a);
//     }
// }