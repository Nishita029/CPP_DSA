// SIMPLE FUNCTION

// #include<stdio.h>
// void PrintHello();    //function declaration

// int main(){

// PrintHello();        //function calling
// return 0;
// }

// void PrintHello(){    //function definition

//     printf("Hello");
// }



// TWO SIMPLE FUNCTIONS TOGETHER


// #include<stdio.h>

// void Namaste();        //function decalareton
// void GoodBye();        //function decalareton

// int main(){

// Namaste();            //function calling
// GoodBye();            //function calling

//     return 0;
// }

// void Namaste(){            //function definition

//     printf("Namaste \n");
// }

// void GoodBye(){            //function definition

//     printf("Good Bye");
// }




// USINF IF-ELSE IN FUNCTIONS


#include<stdio.h>

void Namaste();
void Bonjour();

int main(){

char ch;

printf("enetr 'I' if you are indian OR 'F' if you are french: ");
scanf("%c",  &ch);

if(ch == 'I'){

    Namaste();
}
else{

    Bonjour();
}

    return 0;

}

void Namaste(){

    printf("Namaste \n");
}

void Bonjour(){

    printf("Bonjour \n");
}



